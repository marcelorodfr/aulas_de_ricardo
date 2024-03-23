#include <iostream>

using namespace std;

void armazenar(float vetor[]){
    for(int i = 0; i < 10; i++){ //Laço #for# itera sobre as 
        cout << "Informe o "<< i+1 <<"º valor do vetor: "; //posições do array armazenando os valores
        cin >> vetor[i]; //em vetor[i];
    } cout << endl;
}

void quadrado(float vetor_1[], float vetor_2[]){
    for(int i=0; i < 10; i ++){
        vetor_2[i] = (vetor_1[i])*(vetor_1[i]);
    } 
}

int main(){

    float vet_01[10], vet_02[10];

    armazenar(vet_01); //Chamando a função para armazenar os valores;
    cout << "Valores armazenados no Vetor: " << endl; //#cout# para o usuário;
    for(int i = 0; i < 10; i++){ //Laço para printar na tela os valores dentro do array;
        cout << i+1 << "º: " << vet_01[i] << endl;
    } cout << endl;

    quadrado(vet_01, vet_02); //Chamando a função para armazenar os valores;
    cout << "Os valores dos vetores elevados ao quadrado são: " << endl; //#cout# para o usuário;
    for(int i = 0; i < 10; i++){ //Laço para printar na tela os valores dentro do array;
        cout << i+1 << "º: " << vet_02[i] << endl;
    } cout << endl;
}