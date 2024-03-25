#include <iostream> 

using namespace std; 

//armazenar os elementos no vetor;
void armazenar(int vetor[]){
    for(int i=0; i<10; i++){
        cout << "Insira o " << i+1 << "º elemento do vetor: " << endl;
        cin >> vetor[i];
    }
}

//laço para inverter os elementos do vetor e armazenar no vetor invertido;
void inversor(int vetor[], int invertido[]){
    for(int i=9, j=0; j<10; i--, j++){
        invertido[j] = vetor[i];
    }
}

int main(){
    //Aqui todo mundo já sabe o que tá fazendo, não vou comentar
    int vet_01[10], vet_invertido[10]; 

    armazenar(vet_01);
    inversor(vet_01, vet_invertido);

    cout << "Vetor invertido:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << vet_invertido[i] << endl;
    }

}