#include <iostream> 

using namespace std; 

// Função para criar o gabarito da prova;
void criandoGabarito(string gabarito[]){
    for(int i = 0; i < 10; i++){
        cout << "Insira o gabarito da " << i+1 << "º questão: ";
        cin >> gabarito[i]; 
    }

}

// Função para preencher o cartão de resposta do aluno;
void preenchaProva(string resposta[]){
    for(int i = 0; i < 10; i++){
        cout << "Insira sua resposta da " << i+1 << "º questão: ";
        cin >> resposta[i]; 
    }
}

// Função para corrigir a prova comparando o gabarito com as respostas do aluno;
void corrigindo(string gabarito[], string resposta[], string correcao[]){
    for(int i = 0; i < 10; i++){
        if(gabarito[i] == resposta[i]){
            correcao[i] = "Correta"; 
        } else {
            correcao[i] = "Errada"; 
        }
    }
}

// Função para calcular a nota com base nas correções;
int nota(string correcao[]){
    int acertos = 0;
    for(int i = 0; i < 10; i++){
        if(correcao[i] == "Correta"){
            acertos++;
        }
    }  
    return acertos; 

}

int main(){

    // Declaração das variáveis;
    string gabaritoProva[10], cartaoResposta[10], correcaoProva[10]; 
    int notaDaProva;

    // Criando o gabarito da prova;
    criandoGabarito(gabaritoProva);

    // Imprimindo o gabarito; 
    cout << "Verifique o gabarito abaixo: " << endl; 
    for(int i = 0; i < 10; i++){
        cout << "Gabarito da questão " << i+1 << ": " << gabaritoProva[i] << endl;
    }

    // Preenchendo o cartão de resposta do aluno;
    preenchaProva(cartaoResposta);

    // Imprimindo o cartão de resposta do aluno;
    cout << "Esse é o seu Cartão Resposta: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Resposta da questão " << i+1 << ": " << cartaoResposta[i] << endl;
    }

    // Corrigindo a prova;
    corrigindo(gabaritoProva, cartaoResposta, correcaoProva); 

    // Imprimindo a correção;
    cout << "Correção abaixo: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Questão " << i+1 << ": " << correcaoProva[i] << endl;
    }

    // Calculando e imprimindo a nota
    notaDaProva = nota(correcaoProva);
    cout << "Nota: " << notaDaProva << endl;

    return 0; // Retorno padrão da função principal
}