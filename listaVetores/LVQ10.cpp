#include <iostream> 

using namespace std; 

void armazenar(int vetor[]){
    for(int i=0; i<10; i++){
        cout << "Informe a " << i+1 << "º posição do vetor: " << endl;
        cin >> vetor[i];
    }
}

void verificador(int vetor[], int igual[]){
    for(int i=0; i<10; i++){
        igual[i] = -1;
        for(int j=i+1; j<10; j++){ 
            if(vetor[i] == vetor[j]){
                igual[i] = vetor[i];
                igual[j] = vetor[j]; 
            }
        }
    }
}


int main(){

    int vet_01[10], vet_igual[10];

    armazenar(vet_01);
    verificador(vet_01, vet_igual);

    for(int i=0; i<10; i++){
        cout << vet_igual[i] << " "; 
    } cout << endl;

    cout << "Obs.: -1 indica que o elemento daquela posição não é repetido no vetor."; 
}

