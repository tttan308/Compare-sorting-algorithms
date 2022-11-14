#include"./DataGenerator.cpp"

void cmd1(string algorithmName, string fileName, string outputPara){
    //Read file
    ifstream readFile("./files/"+fileName);
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
    // quickSort(a, 0, n-1, time, compare);
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
    cmd2("quick-sort", "200", "-rand", "-both");
    return 0;
}