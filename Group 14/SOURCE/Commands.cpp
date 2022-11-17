#include <fstream>
#include <string>
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
        startTime = clock();
		RadixSort(a, n, compare);
        endTime = clock();
        time_use = (double)(endTime - startTime) / CLOCKS_PER_SEC;
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
    if(!readFile.is_open()){
        cout << "Error: file not found!\n" << endl;
        return;
    }
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

    //Write file
    ofstream writeFile("./Files/output.txt");
    if(!writeFile.is_open()){
        cout << "Error: file not found!\n" << endl;
        return;
    }
    writeFile << n << endl;
    for(int i = 0; i < n; i++){
        writeFile << a[i] << " ";
    }
    readFile.close();
    writeFile.close();
}

void cmd2(string algorithmName, string inputSize, string inputOrder, string outputPara){
    int n = stoi(inputSize);
    int a[n];
    generateDataWithInputOrder(a, n, inputOrder);

    //Write Input
    ofstream writeInput("./Files/input.txt");
    if(!writeInput.is_open()){
        cout << "Error: file not found!\n" << endl;
        return;
    }
    writeInput << n << endl;
    for(int i = 0; i < n; i++){
        writeInput << a[i] << " ";
    }
    writeInput.close();
    
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

    //Write file
    ofstream writeOuput("./Files/output.txt");
    if(!writeOuput.is_open()){
        cout << "Error: file not found!\n" << endl;
        return;
    }
    writeOuput << n << endl;
    for(int i = 0; i < n; i++){
        writeOuput << a[i] << " ";
    }
    writeOuput.close();
}

void cmd3(string algorithmName, string inputSize, string outputPara){
    for(int i = 0; i < 4; i++){
        int n = stoi(inputSize);
        int a[n];
        generateDataWithAll(a, n, i);

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
        cout << "----------------------\n";
    }
}

void cmd4(string algorithmName1, string algorithmName2, string fileName){
    cout << algorithmName1 << " | " << algorithmName2 << endl;
    ifstream readFile("./Files/"+fileName);
    int n;
    readFile >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        readFile >> a[i];
    }
    double time1 = 0;
    long long compare1 = 0;
    double time2 = 0;
    long long compare2 = 0;
    generateAlgorithms(a, n, time1, compare1, algorithmName1);
    generateAlgorithms(a, n, time2, compare2, algorithmName2);
    cout << "Running time: " << time1 << "s "<< " | " << time2 << "s " << endl;
    cout << "Comparisons: " << compare1 << " | " << compare2 << endl;
}

void cmd5(string algorithmName1, string algorithmName2, string inputSize, string inputOrder){
    int n = stoi(inputSize);
    int a[n];
    generateDataWithInputOrder(a, n, inputOrder);

    //Write Input
    ofstream writeInput("./Files/input.txt");
    if(!writeInput.is_open()){
        cout << "Error: file not found!\n" << endl;
        return;
    }
    writeInput << n << endl;
    for(int i = 0; i < n; i++){
        writeInput << a[i] << " ";
    }
    writeInput.close();

    cout << algorithmName1 << " | " << algorithmName2 << endl;
    double time1 = 0;
    long long compare1 = 0;
    double time2 = 0;
    long long compare2 = 0;
    generateAlgorithms(a, n, time1, compare1, algorithmName1);
    generateAlgorithms(a, n, time2, compare2, algorithmName2);
    cout << "Running time: " << time1 << "s "<< " | " << time2 << "s " << endl;
    cout << "Comparisons: " << compare1 << " | " << compare2 << endl;
}
