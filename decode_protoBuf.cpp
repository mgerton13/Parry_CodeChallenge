#include <iostream>
#include <fstream>
#include <string>
#include <google/protobuf/util/time_util.h>
#include "stdint.h"
#include "chunk.pb.h"

using namespace std;
using google::protobuf::util::TimeUtil;

int main(int argc, char* argv[])
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	//fstream read_stream, write_stream;
	uint32_t message_size;
	map<int32_t, string> chunk_map;
//	proto::BigChunk 	big_chunk;
//	proto::BigChunk::Chunk 	little_chunk;
//	proto::EncodedChunks 	encoded_file_chunks;
	
	//read_stream.open("encoded.dat");
	fstream input("encoded.dat", ios::in | ios::binary);

	if(!(input.is_open())) {
		cerr << "Unable to open input file" << endl;
		return -1;
	}

	proto::Chunk baby_chunk;			

	while(input.read(reinterpret_cast<char *>(&message_size), sizeof(message_size)) &&   input.gcount() == sizeof(message_size))
	{
		cout << message_size << endl;
		char * temp_buff = new char[message_size];

		if( input.read(temp_buff, message_size)) cerr << "AAAAAAAAAAAA" << endl;
		cout << "TEMP BUFFER: "<< temp_buff << endl;

		if(!baby_chunk.ParseFromString(temp_buff)) {
			cerr << "Unable to read encoded file" << endl;			
		}
		else
		{
			cout << baby_chunk.index() << endl;
			cout << baby_chunk.data() << endl;
			chunk_map[baby_chunk.index()] = baby_chunk.data();
		}
	}

	fstream output("decoded.jpeg", ios::out ); //| ios::hex);
	
	for (std::map< int32_t, string>::iterator it=chunk_map.begin(); it!=chunk_map.end(); ++it)
	{
		output <<it->second;
   		std::cout << it->first << " => " << it->second << '\n';
	}

	return 0;
}
