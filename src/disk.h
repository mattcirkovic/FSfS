#include <string>

const int MAGIC_NUMBER = 123456;
const int BLOCK_SIZE = 4096;

struct Super_block{
	int magic_number;
	int blocks; //number of blocks
};

struct partition{
	int begin, end;
};

class Disk{
	public:
		Super_block super_block;
		string name;
		int blocks;
		Disk(string, int);
};

Disk::Disk(string disk_name, int block_num){
	name = disk_name;
	blocks = block_num;
	super_block.magic_number = MAGIC_NUMBER;
	super_block.blocks = block_num;
}
