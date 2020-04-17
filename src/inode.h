#include <string>
#include "disk.h"

class Inode{
	public:
		string name;
		int size;
		int magic_number;
		Inode(string f_name, int size){
			name = f_name;
			magic_number = MAGIC_NUMBER;
		}
}
