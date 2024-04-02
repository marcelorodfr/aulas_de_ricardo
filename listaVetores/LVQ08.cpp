#include <iostream> 

using namespace std; 

void armazenar(int vetor[]){
    for(int i = 0; i<5; i++){
        cout << "Informe o valor do vetor na posição " << i+1 << ": " << endl;
        cin >> vetor[i];
    }
}

bool verificador(int vetor1[], int vetor2[]){
    for(int i=0, j=0; i<5; i++, j++){
        if(vetor1[i] != vetor2[j]){
            return false;
        }
    }
    return true;
}

int main(){

    int vet_01[5], vet_02[5];

    armazenar(vet_01);
    armazenar(vet_02);
    
    if(verificador(vet_01, vet_02)){
        cout << "Os vetores são iguais." << endl;
    } else {
        cout << "Os vetores são diferentes." << endl;
    }


    return 0;
}