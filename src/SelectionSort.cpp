#include<iostream>
#include "DataGenerator.cpp"
#include<time.h>
using namespace std;


void selectionSort(int a[], int n, int generateDataType, int dataSizeType){
    clock_t startTime, endTime;
    long long compare = 0;
    int n = dataSize[dataSizeType];
    GenerateData(a, n, generateDataType);
    startTime = clock();
    for(int i = 0; i < n - 1; i++){
        compare++;
        int min_pos = i;
        for (int j = i + 1; j < n; j++){
            compare++;
            if (a[j] < a[min_pos]){
                min_pos = j;
                compare++;
            }
        }
        HoanVi(a[min_pos], a[i]);
    }
    endTime = clock();
    double time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC; 
    
}

int main(){
    int *a;
    //Chay qua 4 phat sinh
    for(int i = 1; i<=4; i++){
        //Chay qua 6 kich thuoc
        for(int j=0; j<6; j++){
            int n = dataSize[j];
            GenerateData(a, n, i);
            selectionSort(a,n);
            cout << "Data order: " << i << " Data size: " << n << " Compare: " << compare << endl;
            compare = 0;
        }
    }
    return 0;
}   