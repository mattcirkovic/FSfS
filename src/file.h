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
};

class File{
	public:

		Inode inode;
		File(){
			inode.name = "*.temp";
			inode.size = 1024;
		}
		File(std::string f_name, int size){
			inode.name = f_name;
			inode.magic_number = MAGIC_NUMBER;
		}
};
