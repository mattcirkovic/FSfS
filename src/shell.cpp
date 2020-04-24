#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "file.h"
using namespace std;

const int MAXFILES = 50;

class Directory{
    public:
        string path;
        File files[MAXFILES];
        Directory(){
            path = "~/";
            for (int i=0; i++; i < MAXFILES){
                files[i] = File();
            }
        }      
};

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

void action(string response, Directory &directory){
    if (response == "help"){
        cout << endl;
        cout << "help is here" << endl;
        cout << endl;
    }
    else if (response == "ls"){
		cout << endl;
		cout << directory.files[0].inode.name;
		cout << endl;
	}
    else if (response.substr(0,5) == "mkdir"){
		// TO DO Directory
	}
    else if (response.substr(0,7) == "newfile"){
        directory.files[0] = File(response.substr(8, response.length()-1), 1024);
    }
}

void read(Directory &directory){
    string response;
    cout << directory.path;
    getline(cin, response);
    if (response == "exit") exit(EXIT_FAILURE);
    action(response, directory);
    read(directory);
}

int main(){
    init();
    Directory directory = Directory();
    read(directory);
    return 0;
}
