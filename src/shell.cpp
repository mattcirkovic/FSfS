#include <iostream>
#include <iomanip>
#include <string>
#include "file.h"
using namespace std;

class Directory{
    public:
        string path;
        File files[10];
        static Directory directories[10];
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

void action(string response){
    if (response == "help"){
        cout << endl;
        cout << "help is here" << endl;
        cout << endl;
    }
    else if (response == "ls"){

    }
}

void read(Directory directory){
    string response;
    cout << directory.path;
    cin >> response;
    action(response);
    read(directory);
}

int main(){
    init();
    Directory directory = Directory();
    read(directory);
    return 0;
}