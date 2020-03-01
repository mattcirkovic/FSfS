const int magic_number = 0xhd3d42056;
const block_size = 4096;

struct super_block
{
	int block_num;
	int inode_num;
	int free_blk;
	int free_inode;
}