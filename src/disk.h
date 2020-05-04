#include <string>
#include <time.h>
#include <fstream>
const int BLOCK_SIZE = 4096;
const int NUM_BLOCKS = 1024;
const int MAGIC_NUMBER = 12345678;
enum type {file, directory, temp};

class Inode{
    public:
        std::string name;
		int size;
		int magic_number;
		std::string owner;
		time_t created;
		time_t modified;
		type item_type;
        Inode(){
            name = "temp";
            size = -1;
            item_type = type::temp;
            magic_number = MAGIC_NUMBER;
        }
};

class SuperBlock{
    public:
        Inode inodeTable[16][16];
        time_t created;

};

class Block{
    public:
        char data[BLOCK_SIZE];
        Block(){
            for (int i=0; i<BLOCK_SIZE; i++) data[i] = 0;
        }
};

class Disk{
    public:
        SuperBlock superblock;
        Block datablocks[NUM_BLOCKS];
        Disk(){
            for (int i=0; i<NUM_BLOCKS; i++){
                datablocks[i] = Block();
            }
            for (int j=0; j<10; j++){
                for (int k=0; k<10; k++){
                    superblock.inodeTable[j][k] = Inode(); 
                }
            }
        }
        void importFile(std::string filename);
};

void Disk::importFile(std::string filename){
    std::ifstream file;
    std::string line;
    file.open(filename);
    getline(file, line);
    for (int i=0; i<BLOCK_SIZE; i++){
        datablocks[0].data[i] = line[i];
    }
    time(&superblock.inodeTable[0][0].created);
    time(&superblock.inodeTable[0][0].modified);
    superblock.inodeTable[0][0].item_type = type::file;
    superblock.inodeTable[0][0].magic_number = MAGIC_NUMBER;
    superblock.inodeTable[0][0].name = filename;
    superblock.inodeTable[0][0].owner = "temp";
    superblock.inodeTable[0][0].size = line.length();
    }