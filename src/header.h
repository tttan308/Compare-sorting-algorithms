#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
using namespace std;


//data generator
template <class T>
void HoanVi(T &a, T &b);
void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);
void GenerateData(int a[], int n, int dataType);
bool checkGivenInput(string s);
void generateDataWithInputOrder(int a[], int n, string nameData);
void generateAlgorithms(int a[], int n, string algorithm);


//Sort algorithm
int partition(int a[], int l, int r, double& time_use, long long& compare);
void quicksort(int a[], int l, int r, double& time_use, long long& compare);

//command line
