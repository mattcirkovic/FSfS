#include <string>
using namespace std;

const int MAGIC_NUMBER = 123456;
const int BLOCK_SIZE = 4096;
const int MAX_NAME_SIZE = 50;

class Disk{
	public:
		Super_block super_block;
		string name;
		Disk(string disk_name, int block_num){
			name = disk_name;
			super_block.magic_number = MAGIC_NUMBER;
			super_block.blocks = block_num;
		}
};
