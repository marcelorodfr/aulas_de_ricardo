#include <iostream> 

using namespace std;

void armazenar(int vetor[]){
    for(int i = 0; i < 10; i++){ //Laço #for# itera sobre as 
        cout << "Informe o "<< i+1 <<"º valor do vetor: "; //posições do array armazenando os valores
        cin >> vetor[i]; //em vetor[i];
    } cout << endl; //Estética;
}

int parimpar(int vetor[]){
    int pares = 0; //Função para verificar se o número é par;
    for(int i = 0; i < 10; i++){
        if (vetor[i]%2 == 0){ 
            pares++; 
        }
    }
    return pares; 
}

int main(){

    int vet_01[10];

    armazenar(vet_01); //Chamando a função no vet_01;
    cout << "A quantidade de números pares é de ";
    cout << parimpar(vet_01) << " números!"; //Saída de dados;
}