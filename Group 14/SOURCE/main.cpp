#include <cstring>
#include "Commands.cpp"

int main(int argc, char** argv) {
    if(argc == 5){
        if(strcmp(argv[1], "-a") == 0){
            if(checkGivenInput(argv[3])){
                cout << "cmd1" << endl;
                cmd1(argv[2], argv[3], argv[4]);
            }
            else if(!checkGivenInput(argv[3])) {
                cout << "cmd3" << endl;
                cmd3(argv[2], argv[3], argv[4]);
            }
        }
        else if(strcmp(argv[1], "-c") == 0) {
            cout << "cmd4" << endl;
            cmd4(argv[2], argv[3], argv[4]);
        }
    }
    else if(argc == 6){
        if(strcmp(argv[1], "-a") == 0) {
            cout << "cmd2" << endl;
            cmd2(argv[2], argv[3], argv[4], argv[5]);
        }
        else if(strcmp(argv[1], "-c") == 0){
            cout << "cmd5" << endl;
            cmd5(argv[2], argv[3], argv[4], argv[5]);
        }
    }
    else{
        cout << "abcxyz";
    }
    return 0;
}