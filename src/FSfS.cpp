// #include "disk.h"
#include <iostream>
#include <string>
using namespace std;

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
		string name;
		Disk(string, int);
};

Disk::Disk(string disk_name, int block_num){
	name = disk_name;
	super_block.magic_number = MAGIC_NUMBER;
	super_block.blocks = block_num;
}


int main(){
	string name = "newDisk";
	Disk disk(name, 10);
	cout << disk.name << " has " << disk.super_block.blocks << " blocks.";
	system("pause");
	return 0;
}
