#include <string>
#include <iostream>
#include <fstream>
#include "disk.h"
using namespace std;

void init(){
    cout << "==============================" << endl;
    cout << "=                            =" << endl;
    cout << "=        Welcome to FSfs     =" << endl;
    cout << "=                            =" << endl;
    cout << "==============================" << endl;
    cout << "=                            =" << endl;
    cout << "= Enter \"help\" for list of =" << endl; 
    cout << "=           commands.        =" << endl;
    cout << "=                            =" << endl;
    cout << "==============================" << endl;
}

void action(string response, Disk &disk){
    if (response.substr(0,6) == "import"){
		string filename = response.substr(7,response.length()-7);
        disk.importFile(filename);
        
    }
    else if (response.substr(0,4) == "info"){
        
    }
}

void read(Disk &disk){
    string response;
    getline(cin, response);
    if (response == "exit") exit(EXIT_FAILURE);
    action(response, disk);
    read(disk);
}

int main(){
    string response;
    Disk disk = Disk();
    init();
    read(disk);
    return 0;
}
