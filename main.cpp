#include<iostream>
#include<algorithm>
#include "DataGenerator.cpp"
using namespace std;

int main(int argc, char *argv[] ) {
    if(argc == 5){
        if(argv[1] == "-a"){
            if(checkGivenInput(argv[4])){
                //Cmd1
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
            //Cmd 2
        }
        else if(argv[1] == "-c") {
            //Cmd 5
        }
    }
    return 0;
}