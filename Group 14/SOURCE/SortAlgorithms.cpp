#include <ctime>
#include "DataGenerator.cpp"

//====== SELECTION SORT ======//

void SelectionSort(int a[], int n, double& time_use, long long& compare ){
    compare = 0;
    clock_t startTime, endTime; 
    startTime = clock();
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
        HoanVi(a[min_pos], a[i]);
    }
    endTime = clock();
    time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
}


//====== INSERTION SORT ======//

void InsertionSort();


//====== BUBBLE SORT ======//

void BubbleSort();


//====== HEAP SORT ======//

void HeapSort();


//====== MERGE SORT ======//

void MergeSort();


//====== QUICK SORT ======//

int partition(int a[], int l, int r, double& time_use, long long& compare){
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++){
        compare++;
        if(a[j] <= pivot){
            ++i;
            HoanVi(a[i], a[j]);
        }
        compare++;
    }
    ++i;
    HoanVi(a[i], a[r]);
    return i;
}

void QuickSort(int a[], int l, int r, double& time_use, long long& compare){
    clock_t startTime, endTime; 
    startTime = clock();
    if(l < r){
        int m = (l + r) / 2;
        int p = partition(a, l, r, time_use, compare);
        QuickSort(a, l, p - 1, time_use, compare);
        QuickSort(a, p + 1, r, time_use, compare);
    }
    endTime = clock();
    time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
}


//====== RADIX SORT ======//

void RadixSort();


//====== SHAKER SORT ======//

void ShakerSort();


//====== SHELL SORT ======//

void ShellSort();


//====== COUNTING SORT ======//

void CountingSort();


//====== FLASHSORT SORT ======//

void FlashSort();

