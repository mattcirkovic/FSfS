#include <string>
#include <ctime>
const int MAGIC_NUMBER = 123456;
const int MAXFILES = 50;

enum OBJ_TYPE {file, directory};

class Inode{
	public:
		std::string name;
		int size;
		int magic_number;
		std::string owner;
		time_t created;
		time_t modified;
		Inode();
		Inode(std::string name);
};

Inode::Inode(){
	name = "";
	size = 1024;
	magic_number = MAGIC_NUMBER;
	owner = "";
	created = time(&created);
	modified = time(&modified);
}

Inode::Inode(std::string _name){
	name = _name;
	size = 1024;
	magic_number = MAGIC_NUMBER;
	owner = "";
	created = time(&created);
	modified = time(&modified);
}

class Dir_obj{
	public:
		std::string path;
		Inode inode;
		OBJ_TYPE type;
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
	Inode(name_);
	path += parent.path;
}

/* class File : public Dir_obj{
	public:

}; */
