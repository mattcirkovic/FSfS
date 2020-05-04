#include <string>
#include <ctime>
#include "disk.h"
const int MAGIC_NUMBER = 123456;
const int MAXFILES = 50;

class Dir_obj{
	public:
		std::string path;
		Inode inode;
		type item_type;
};

class Directory : public Dir_obj{
	public: 
		Dir_obj contents[MAXFILES];
		Dir_obj parent;
		Directory();
		Directory(std::string name);
};

Directory::Directory(){
	Inode();
	path = "~/";
}

Directory::Directory(std::string name_){
	Inode();
	path += parent.path;
}

