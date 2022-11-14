#include <iostream>
#include <algorithm>
#include <fstream>
#include "DataGenerator.cpp"

using namespace std;

int main() {
    ofstream fileW("./Files/input.txt");
    int n = 300000;
    int a[n];
    fileW << n << endl;
    GenerateReverseData(a,n);
    for(int i=0; i<n; i++){
        fileW << a[i] << " ";
    }

    return 0;
}