#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "file.h"
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

void action(string response, Directory &directory){
    if (response == "help"){
        cout << endl;
        cout << "help is here" << endl;
        cout << endl;
    }
    else if (response == "ls"){
		int i=0;
        while(directory.contents[i].inode.created != NULL){
            cout << directory.contents[i].inode.name << "    ";
        }
	}
    else if (response.substr(0,5) == "mkdir"){
		// TO DO Directory
	}
    else if (response.substr(0,7) == "newfile"){
        // TO DO FILE
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
