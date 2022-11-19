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


void SelectionSort(int a[], int n){
    for(int i = 0; i < n; i++){
    int min_pos = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min_pos]){
            min_pos = j;
            }
        }
    swap(a[min_pos], a[i]);
    }
}

//====== INSERTION SORT ======//

void InsertionSort(int a[], int n, long long& compare){

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

//Do thoi gian
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
            compare++;
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
        compare++;
        QuickSort(a, l, part - 1, compare);
    }
    compare++;
    if(part < r){
        compare++;
        QuickSort(a, part, r, compare);
    }
    compare++;
}

//Ham binh thuong dung de do thoi gian
int partition(int a[], int l, int r){
    int pivot = a[(l+r)/2];
    int i = l;
    int j = r;
    while(i <= j){
        while(a[i] < pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i <= j){
            HoanVi(a[i], a[j]);
            i++;
            j--;
        }
    }
    return i;
}

void QuickSort(int a[], int l, int r){
    int part = partition(a, l, r);
    if(l < part - 1){
        QuickSort(a, l, part - 1);
    }
    if(part < r){
        QuickSort(a, part, r);
    }
}


//====== COUNTING SORT ======//

void CountingSort(int a[], int n, double& time_use, long long& compare){
    int max = a[0];
    for(int i = 1; i < n; i++){
        compare++;
        if(a[i] > max){
            max = a[i];
        }
        compare++;
    }
    int *count = new int[max + 1];
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
}


//====== RADIX SORT ======//

void RadixSort(int a[], int n, long long& compare){
    int max = a[0];
    for(int i = 1; i < n; i++){
        compare++;
        if(a[i] > max){
            compare++;
            max = a[i];
        }
        compare++;
    }
    compare++;
    int exp = 1;
    while(max / exp > 0){
        compare++;
        vector<int> buckets[10];
        for(int i = 0; i < n; i++){
            compare++;
            buckets[(a[i] / exp) % 10].push_back(a[i]);
        }
        compare++;
        int index = 0;
        for(int i = 0; i < 10; i++){
            compare++;
            for(int j = 0; j < buckets[i].size(); j++){
                compare++;
                a[index] = buckets[i][j];
                index++;
            }
            compare++;
        }
        compare++;
        exp*= 10;
    }
    compare++;
}

void RadixSort(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    int exp = 1;
    while(max / exp > 0){
        vector<int> buckets[10];
        for(int i = 0; i < n; i++){
            buckets[(a[i] / exp) % 10].push_back(a[i]);
        }
        int index = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < buckets[i].size(); j++){
                a[index] = buckets[i][j];
                index++;
            }
        }
        exp*= 10;
    }
}

//====== FLASH SORT ======//

void FlashSort(int a[], int n, long long& compare){
    int max = a[0];
    int min = a[0];
    for(int i = 1; i < n; i++){
        compare++;
        if(a[i] > max){
            max = a[i];
        }
        compare++;
        if(a[i] < min){
            min = a[i];
        }
        compare++;
    }
    int m = (int)(0.45 * n);
    int *L = new int[m];
    for(int i = 0; i < m; i++){
        compare++;
        L[i] = 0;
    }
    for(int i = 0; i < n; i++){
        compare++;
        int k = (int)((m - 1) * (a[i] - min) / (max - min));
        L[k]++;
    }
    for(int i = 1; i < m; i++){
        compare++;
        L[i] += L[i - 1];
    }
    int *B = new int[n];
    for(int i = 0; i < n; i++){
        compare++;
        B[i] = a[i];
    }

    
}

