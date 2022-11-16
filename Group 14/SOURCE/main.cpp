#include <iostream>
#include <algorithm>
#include <fstream>
// #include "Commands.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc == 5){
        if(argv[1] == "-a"){
            if(checkGivenInput(argv[4])){
                cmd1(argv[2], argv[3], argv[4]);
            }
            else if(!checkGivenInput(argv[4])) {
                //Cmd 3
            }
        }
        else if(argv[1] == "-c") {
            //Cmd 4
        }
    }
    else if(argc == 6){
        if(argv[1] == "-a") {
            cmd2(argv[2], argv[3], argv[4], argv[5]);
        }
        else if(argv[1] == "-c") {
            //Cmd 5
        }
    }
    else{
        cout << "abcxyz";
    }
    return 0;
}