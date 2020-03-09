const int MAGIC_NUMBER = 123456;
const int BLOCK_SIZE = 4096;
const int MAX_NAME_SIZE = 50;

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
		char* name;
		Disk(char[], int);
};

Disk::Disk(char* disk_name, int block_num){
	name = disk_name;
	super_block.magic_number = MAGIC_NUMBER;
	super_block.blocks = block_num;
}
