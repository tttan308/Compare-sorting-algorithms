#include "../DataGenerator.cpp"

void selectionSort(int a[], int n, double& time_use, long long& compare){
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
