#include <iostream> 

using namespace std; 

void armazenar(int vetor[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Informe a " << i+1 << "º posição do vetor: " << endl;
        cin >> vetor[i];
    }
}

void parImpar(int vetor[], int vetorPar[], int vetorImpar[], int tam, int tamPar, int tamImpar){
    tamPar = 0;
    tamImpar = 0; 
    for(int i=0; i<tam; i++){
        if(vetor[i] % 2 == 0){ 
            vetorPar[tamPar++] = vetor[i];
        } else {
            vetorImpar[tamImpar++] = vetor[i];
        }
    }
}

int main(){ 

    int tamanho, tamPar, tamImpar;
    int *vet_01, *vet_par, *vet_impar; 

    cout << "Informe o tamanho do seu vetor: " << endl;
    cin >> tamanho; 
    
    if(tamanho%2 == 0){
        tamPar = tamanho/2;
        tamImpar = (tamanho/2);
    } else {
        tamPar = tamanho/2;
        tamImpar = (tamanho/2)+1; 
    }

    vet_01 = new int[tamanho]; 
    vet_par = new int[tamPar];
    vet_impar = new int[tamImpar];

    armazenar(vet_01, tamanho);
    parImpar(vet_01, vet_par, vet_impar, tamanho, tamPar, tamImpar);

    cout << "Vetor: " << endl; 
    for(int i=0; i<tamanho; i++){
        cout << vet_01[i] << " "; 
    } cout << endl;

    cout << "Vetor par: " << endl; 
    for(int i=0; i<tamPar; i++){
        cout << vet_par[i] << " "; 
    } cout << endl;

    cout << "Vetor impar: " << endl; 
    for(int i=0; i<tamImpar; i++){
        cout << vet_impar[i] << " "; 
    } cout << endl;


    return 0;
}