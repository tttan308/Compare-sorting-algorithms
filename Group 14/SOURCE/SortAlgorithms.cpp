#include <ctime>
#include <vector>
#include "DataGenerator.cpp"

//====== SELECTION SORT ======//

void SelectionSort(int a[], int n, long long& compare ){
    for(int i = 0; i < n - 1; i++){
        compare++;
        int min_pos = i;
        for (int j = i + 1; j < n; j++){
            compare++;
            if (a[j] < a[min_pos]){
                min_pos = j;
            }
            compare++;
        }
        compare++;
        HoanVi(a[min_pos], a[i]);
    }
    compare++;
}


//====== INSERTION SORT ======//

void InsertionSort(int a[], int n, double& time_use, long long& compare){

}


//====== BUBBLE SORT ======//

void BubbleSort();


//====== SHAKER SORT ======//

void ShakerSort();


//====== SHELL SORT ======//

void ShellSort();


//====== HEAP SORT ======//

void HeapSort();


//====== MERGE SORT ======//

void MergeSort();


//====== QUICK SORT ======//

int partition(int a[], int l, int r, long long& compare){
    int pivot = a[(l+r)/2];
    int i = l;
    int j = r;
    while(i <= j){
        compare++;
        while(a[i] < pivot){
            compare++;
            i++;
        }
        compare++;
        while(a[j] > pivot){
            compare++;
            j--;
        }
        compare++;
        if(i <= j){
            HoanVi(a[i], a[j]);
            i++;
            j--;
        }
        compare++;
    }
    compare++;
    return i;
}

void QuickSort(int a[], int l, int r, long long& compare){
    int part = partition(a, l, r, compare);
    if(l < part - 1){
        QuickSort(a, l, part - 1, compare);
    }
    compare++;
    if(part < r){
        QuickSort(a, part, r, compare);
    }
    compare++;
}


//====== COUNTING SORT ======//

void CountingSort(int a[], int n, double& time_use, long long& compare){
    clock_t startTime, endTime;
    startTime = clock();

    int max = a[0];
    for(int i = 1; i < n; i++){
        compare++;
        if(a[i] > max){
            max = a[i];
        }
        compare++;
    }
    int count[max + 1];
    for(int i = 0; i <= max; i++){
        compare++;
        count[i] = 0;
    }
    for(int i = 0; i < n; i++){
        compare++;
        count[a[i]]++;
    }
    int index = 0;
    for(int i = 0; i <= max; i++){
        compare++;
        for(int j = 0; j < count[i]; j++){
            compare++;
            a[index] = i;
            index++;
        }
    }
    endTime = clock();
    time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
}


//====== RADIX SORT ======//

void RadixSort(int a[], int n, long long& compare){
    int max = a[0];
    for(int i = 1; i < n; i++){
        compare++;
        if(a[i] > max){
            max = a[i];
        }
        compare++;
    }
    int exp = 1;
    while(max / exp > 0){
        exp*= 10;
        vector<int> bucket[10];
        for(int i = 0; i < n; i++){
            compare++;
            bucket[(a[i] / exp) % 10].push_back(a[i]);
        }
        int index = 0;
        for(int i = 0; i < 10; i++){
            compare++;
            for(int j = 0; j < bucket[i].size(); j++){
                compare++;
                a[index++] = bucket[i][j];
            }
        }
    }
}


//====== FLASH SORT ======//

void FlashSort(int a[], int n, long long& compare){
}

