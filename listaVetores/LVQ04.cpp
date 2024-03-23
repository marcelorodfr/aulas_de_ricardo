#include <iostream> 

using namespace std; 

//Função para encontrar o maior elemento no vetor;
int maiorElemento(int vetor[]){
    int maioral = 0; //Inicializa a variável maior com o primeiro elemento do vetor;
    for(int i=0; i<10; i++){ //Itera sobre os elementos restantes do vetor;
        if (vetor[i] > maioral){ //Verifica se o elemento atual é maior do que o maior valor encontrado até agora;
            maioral = vetor[i]; //Atualiza o valor de maior se o elemento atual for maior
        } 
    }
    return maioral; //Retorna o maior valor encontrado no vetor;
}

//Função para encontrar a posição do maior elemento no vetor;
int posicaoMaior(int vetor[]){
    int posicao = 0; //Inicializa a variável posicao com a posição do primeiro elemento do vetor;
    for(int i=0; i<10; i++){ //Itera sobre os elementos restantes do vetor;
        if (vetor[i] > posicao){ //Verifica se o elemento atual é maior do que o elemento na posição atual do maior valor;
            posicao = i; //Atualiza a posição do maior valor encontrado;
        }
    }
    return posicao; //Retorna a posição do maior valor no vetor;
}

int main(){

    int vet_01[10], maior, position; //Declaração de variáveis;

    //Leitura do vetor;
    for(int i=0; i<10; i++){
        cout << "Insira o " << i+1 << "º elemento do vetor: " << endl; //Solicita ao usuário para inserir o elemento;
        cin >> vet_01[i]; //Armazena o elemento no vetor;
    }

    //Impressão do vetor;
    cout << "Vetor: " << endl;
    for(int i=0; i<10; i++){
        cout << vet_01[i] << " "; //Imprime cada elemento do vetor;
    } cout << endl;   
    
    //Determina e imprime o maior elemento do vetor;
    maior = maiorElemento(vet_01);
    cout << "O maior elemento do vetor vale: " << maior << endl; 

    //Determina e imprime a posição do maior elemento no vetor;
    position = posicaoMaior(vet_01); 
    cout << "O maior elemento está posicionado na " << position << "º posição." << endl;

}