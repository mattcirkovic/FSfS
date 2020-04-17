#include <iostream>
#include <string>
#include "disk.h"
#include "inode.h"
#include "file.h"
#include "FSfS.h"
using namespace std;

int main(){
	string name = "newDisk";
	Disk disk(name, 10);
	cout << disk.name << " has " << disk.super_block.blocks << " blocks.";
	system("pause");
	return 0;
}
