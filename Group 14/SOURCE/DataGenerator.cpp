#include"./algorithmsSort/QuickSort.cpp"
#include "./algorithmsSort/SelectionSort.cpp"

using namespace std;

template <class T>
void HoanVi(T &a, T &b) {
	T x = a;
	a = b;
	b = x;
}

//-------------------------------------------------

// Hàm phát sinh mảng dữ liệu ngẫu nhiên
void GenerateRandomData(int a[], int n) {
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++) {
		a[i] = rand()%n;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự tăng dần
void GenerateSortedData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
}

// Hàm phát sinh mảng dữ liệu có thứ tự ngược (giảm dần)
void GenerateReverseData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = n - 1 - i;
	}
}

// Hàm phát sinh mảng dữ liệu gần như có thứ tự
void GenerateNearlySortedData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	srand((unsigned int) time(NULL));
	for (int i = 0; i < 10; i ++) {
		int r1 = rand()%n;
		int r2 = rand()%n;
		HoanVi(a[r1], a[r2]);
	}
}

void GenerateData(int a[], int n, int dataType) {
	switch (dataType) {
	case 0:	// ngẫu nhiên
		GenerateRandomData(a, n);
		break;
	case 1:	// có thứ tự
		GenerateSortedData(a, n);
		break;
	case 2:	// có thứ tự ngược
		GenerateReverseData(a, n);
		break;
	case 3:	// gần như có thứ tự
		GenerateNearlySortedData(a, n);
		break;
	default:
		printf("Error: unknown data type!\n");
	}
}

int dataSize[6] = {10000,30000,50000,100000,300000,500000};

	
bool checkGivenInput(string s){
	return s.find(".txt") >=0;
}

void generateDataWithInputOrder(int a[], int n, string nameData){
	if(nameData == "-rand"){
		GenerateRandomData(a, n);
	}
	else if(nameData == "-nsorted"){
		GenerateNearlySortedData(a, n);
	}
	else if(nameData == "-sorted"){
		GenerateSortedData(a, n);
	}
	else if(nameData == "-rev"){
		GenerateReverseData(a, n);
	}
	else {
		cout << "Error: unknown data type!\n" << endl;
	}
}

void generateAlgorithms(int a[], int n, double& time_use, long long& compare, string algorithm){
	if(algorithm == "bubble-sort"){

	}
	else if(algorithm == "counting-sort"){

	}
	else if(algorithm == "flash-sort"){

	}
	else if(algorithm == "heap-sort"){

	}
	else if(algorithm == "insertion-sort"){

	}
	else if(algorithm == "merge-sort"){
		cout << "merge-sort" << endl;
	}
	else if(algorithm == "quick-sort"){
		quickSort(a, 0, n-1, time_use, compare);
	}
	else if(algorithm == "radix-sort"){
		cout << "radix-sort" << endl;
	}
	else if(algorithm == "selection-sort"){
		selectionSort(a, n, time_use, compare);
	}
	else if(algorithm == "shaker-sort"){
		cout << "shaker-sort" << endl;
	}
	else if(algorithm == "shell-sort"){
		cout << "shell-sort" << endl;
	}
	else{
		cout << "Error: unknown algorithm!\n" << endl;
	}
}
