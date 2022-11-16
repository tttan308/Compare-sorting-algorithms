#include <ctime>
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

