#include <iostream>

using namespace std; 

//PRIMEIRA QUESTÃO//

//Função para armazenar valores. A questão já deu os valores 
//prontos (1, 0, 5, -2, -5, 7), mas por questão de desenvolvimento 
//da questão eu preferi pedir ao usuário os valores;
void armazenar(int vetor[]){
    for(int i = 0; i < 6; i++){ //Laço #for# itera sobre as 
        cout << "Informe o "<< i+1 <<"º valor do vetor: "; //posições do array armazenando os valores
        cin >> vetor[i]; //em vetor[i];
    }
}

int main(){
    int vetor_A[6]; //Criação do vetor tipo #int# de 5 posições;
    armazenar(vetor_A); //Chamando a função para armazenar os valores;
    cout << "Valores armazenados no Vetor: "; //#cout# para o usuário;
    for(int i = 0; i < 6; i++){ //Laço para printar na tela os valores dentro do array;
        cout << vetor_A[i] << " ";
    }
    cout << endl; //Apenas estética
    cout << "A soma é: "<< vetor_A[0] + vetor_A[1] + vetor_A[5]; //Soma da posição dos vetores
    cout << endl; //Apenas estética
    vetor_A[3] = 100; //Alterando o valor do vetor da posição 4 para 100;
    cout << "Valores armazenados no Vetor: " << endl; //#cout# para o usuário;
    for(int i = 0; i < 6; i++){ //Laço para printar na tela os valores dentro do array;
        cout << vetor_A[i] << endl; //Mostrar um em cada linha #endl#
    }
}
