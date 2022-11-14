#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;

int main() {
    ofstream fileW("./files/input.txt");
    int n = 300000;
    int a[n];
    fileW << n << endl;
    GenerateReverseData(a,n);
    for(int i=0; i<n; i++){
        fileW << a[i] << " ";
    }
    // if(argc == 5){
    //     if(argv[1] == "-a"){
    //         if(checkGivenInput(argv[4])){
    //             cmd1(argv[2], argv[3], argv[4]);
    //         }
    //         else if(!checkGivenInput(argv[4])) {
    //             //Cmd 3
    //         }
    //     }
    //     else if(argv[1] == "-c") {
    //         //Cmd 4
    //     }
    // }
    // else if(argc == 6){
    //     if(argv[1] == "-a") {
    //         //Cmd 2
    //     }
    //     else if(argv[1] == "-c") {
    //         //Cmd 5
    //     }
    // }
    return 0;
}