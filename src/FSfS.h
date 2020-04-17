struct Super_block{
	int magic_number;
	int blocks; //number of blocks
};

struct partition{
	int begin, end;
};
