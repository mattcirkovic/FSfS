#include <iostream>
#include <iomanip>
#include <string>
#include "file.h"
using namespace std;

class Directory{
    public:
        string path;
        string content_names[50];
        Directory(){
            path = "~/";
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

void action(string response, Directory directory){
    if (response == "help"){
        cout << endl;
        cout << "help is here" << endl;
        cout << endl;
    }
    else if (response == "ls"){    } 
    
    else if (response.substr(0,5) == "mkdir"){
		// TO DO Directory
	}
}

void read(Directory directory){
    string response;
    cout << directory.path;
    cin >> response;
    action(response, directory);
    read(directory);
}

int main(){
    init();
    Directory directory = Directory();
    read(directory);
    return 0;
}
