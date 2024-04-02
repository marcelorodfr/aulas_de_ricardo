#include <iostream> 

using namespace std; 

void armazenar(int vetor[]){
    for(int i = 0; i<20; i++){
        cout << "Informe o valor do vetor na posição " << i+1 << ": " << endl;
        cin >> vetor[i];
    }
}

void subtrair(int vetor_1[], int vetor_2[], int vetor_3[]){
    for(int i=0; i<20; i++){
        vetor_3[i] = vetor_1[i] - vetor_2[i];
    }
}

void somar(int vetor_1[], int vetor_2[], int vetor_3[]){
    for(int i=0; i<20; i++){
        vetor_3[i] = vetor_1[i] + vetor_2[i];
    }
}

void multiplicar(int vetor_1[], int vetor_2[], int vetor_3[]){
    for(int i=0; i<20; i++){
        vetor_3[i] = vetor_1[i] * vetor_2[i];   
    }
}

int main(){

    int vet_1[20], vet_2[20], vet_sub[20], vet_som[20], vet_mult[20];

    armazenar(vet_1);
    armazenar(vet_2);
    subtrair(vet_1, vet_2, vet_sub);
    somar(vet_1, vet_2, vet_som);
    multiplicar(vet_1, vet_2, vet_mult);

    cout << "Vetor 1: " << endl;
    for(int i=0; i<20; i++){
        cout << vet_1[i] << endl;
    }

    cout << "Vetor 2: " << endl;
    for(int i=0; i<20; i++){
        cout << vet_2[i] << endl;
    }

    cout << "Vetor 3(diferença): " << endl;
    for(int i=0; i<20; i++){
        cout << vet_sub[i] << endl;
    }

    cout << "Vetor 4(soma): " << endl;
    for(int i=0; i<20; i++){
        cout << vet_som[i] << endl;
    }

    cout << "Vetor 2(multiplicação): " << endl;
    for(int i=0; i<20; i++){
        cout << vet_mult[i] << endl;
    }
}