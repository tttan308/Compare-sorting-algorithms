#include <fstream>
#include<cstring>
#include "SortAlgorithms.cpp"

void generateAlgorithms(int a[], int n, double& time_use, long long& compare, string algorithm){
    clock_t startTime, endTime; 
	if(algorithm == "bubble-sort"){

	}
	else if(algorithm == "counting-sort"){
        cout << "counting-sort";
        CountingSort(a, n, time_use, compare);
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
        startTime = clock();
		QuickSort(a, 0, n-1, compare);
        endTime = clock();
        time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
	}
	else if(algorithm == "radix-sort"){
		
	}
	else if(algorithm == "selection-sort"){
        startTime = clock();
		SelectionSort(a, n, compare);
        endTime = clock();
        time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
	}
	else if(algorithm == "shaker-sort"){
		
	}
	else if(algorithm == "shell-sort"){
		
	}
	else{
		cout << "Error: unknown algorithm!\n" << endl;
	}
}


void cmd1(string algorithmName, string fileName, string outputPara){
    //Read file
    ifstream readFile("./Files/"+fileName);
    int n;
    readFile >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        readFile >> a[i];
    }
    double time = 0;
    long long compare = 0;
    //Sort
    generateAlgorithms(a, n, time, compare, algorithmName);
    if(outputPara == "-time"){
        //Output runtime
        cout << "Runtime: " << time << "s" << endl;
    }
    else if(outputPara == "-comp"){
        //Output comparisons
        cout << "Comparisons: " << compare << endl;
    }
    else if(outputPara == "-both"){
        //Output runtime and comparisons
        cout << "Runtime: " << time << "s" << endl;
        cout << "Comparisons: " << compare << endl;
    }
}

void cmd2(string algorithmName, string inputSize, string inputOrder, string outputPara){
    int n = stoi(inputSize);
    int a[n];
    generateDataWithInputOrder(a, n, inputOrder);
    double time = 0;
    long long compare = 0;
    //Sort
    generateAlgorithms(a, n, time, compare, algorithmName);
    if(outputPara == "-time"){
        //Output runtime
        cout << "Runtime: " << time << "s" << endl;
    }
    else if(outputPara == "-comp"){
        //Output comparisons
        cout << "Comparisons: " << compare << endl;
    }
    else if(outputPara == "-both"){
        //Output runtime and comparisons
        cout << "Runtime: " << time << "s" << endl;
        cout << "Comparisons: " << compare << endl;
    }
}

int main(){
    cmd2("selection-sort", "500000", "-rand", "-both");
}
