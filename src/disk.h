const int magic_number = 0xhd3d42056;
const block_size = 4096;

struct super_block
{
	int magic_number;
	int blocks; //total number of blocks
	int inode_blocks; //number of blocks set aside for inode
	int inodes; // total number of inodes within block
}

struct inode{ //store file metadata
	int type;
	int uid;
	float size;
	float time;
	float ctime;
	float mtime;
	float blocks;
}

struct data_map{
	//could be either bitmap or linked list
}

struct inode_bitmap{

}