#include <string>
const int MAGIC_NUMBER = 123456;

class Inode{
	public:
		std::string name;
		int size;
		int magic_number;
		Inode(){
			name = "temp";
			magic_number = MAGIC_NUMBER;
		}
		Inode(std::string f_name, int size){
			name = f_name;
			magic_number = MAGIC_NUMBER;
		}
};

class File{
	public:

		Inode inode;
		File(){
			inode.name = "*.temp";
			inode.size = 1024;
		}
};
