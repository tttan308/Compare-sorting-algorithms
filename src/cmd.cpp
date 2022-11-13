#include<iostream>
#include <fstream>
#include "./algorithms/SelectionSort.cpp"
using namespace std;

void cmd1(string algorithmName, string fileName, string outputPara){
    //Read file
    ifstream readFile("./files/input.txt");
    int n;
    readFile >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        readFile >> a[i];
    }
    double time = 0;
    long long compare = 0;
    //Sort
    selectionSort(a, n, time, compare);
    if(outputPara == "-time"){
        //Output runtime
        cout << "Runtime: " << time << "s" << endl;
    }
    else if(outputPara == "-comp"){
        //Output comparisons
        cout << "Comparisons: " << compare << endl;
    }
    else if(outputPara == "-both"){
        //Output runtime and comparisons
        cout << "Runtime: " << time << "s" << endl;
        cout << "Comparisons: " << compare << endl;
    }
}

int main(){
    cmd1("selection", "input.txt", "-both");
    return 0;
}
