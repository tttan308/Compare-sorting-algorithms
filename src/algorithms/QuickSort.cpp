#include"header.h"

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

void quicksort(int a[], int l, int r, double& time_use, long long& compare){
    clock_t startTime, endTime; 
    startTime = clock();
    if(l < r){
        int m = (l + r) / 2;
        int p = partition(a, l, r, time_use, compare);
        quicksort(a, l, p - 1, time_use, compare);
        quicksort(a, p + 1, r, time_use, compare);
    }
    endTime = clock();
    time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
}
