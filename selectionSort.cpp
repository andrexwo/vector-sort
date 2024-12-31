#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>

using namespace std;
using namespace chrono;

void selectionSort(vector <int>& v){

    for (int j = 0; j < v.size()-1; j++) {  
        int indexMenor = j; 
        for (int i = j + 1; i < v.size(); i++) {
            if (v[i] < v[indexMenor]) {
                indexMenor = i;
            }
        }

    if (indexMenor != j) {
        int aux = v[j];
        v[j] = v[indexMenor];
        v[indexMenor] = aux;
    }
 }
}

void insertionSort(vector <int>& v) {
    
    for (int j = 0; j < v.size(); j++) {
        
        int i = j;
        while (i > 0 && v[i] < v[i-1]) {
            int aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;
            i -= 1;
        }
    }
}




int main() {    

    string nomeArq = "C:/Users/andre/Desktop/andre/coisasDeAndre/materiais das cadeiras/p4/EDD/instancias-num/num.100000.3.in";
    ifstream inFile(nomeArq);

    if (!inFile) {
        cout << "erro ao abrir o arquivo;" << endl;
        perror ("detalhes: ");
        return 1;
    }

    vector <int> vetor;

    int nmr;

    while (inFile >> nmr) {
        vetor.push_back(nmr);
    }

    inFile.close();

     auto start = high_resolution_clock::now();

    selectionSort(vetor);
    // insertionSort(vetor);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    for (int o = 0; o < vetor.size(); o++){
        cout << vetor[o] << ", ";
    }

    cout << endl << endl << "tempo de execução: " << duration.count() << " miliseg;" << endl;


    return 0;
}