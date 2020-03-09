#include "disk.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  Disk disk("newdisk", 10);
  cout << disk.name << " has " << disk.super_block.blocks << " blocks.";
  system("pause");
  return 0;
}
