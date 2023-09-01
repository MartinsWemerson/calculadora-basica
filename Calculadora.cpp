#include <iostream>

using namespace std;

int main(){
	int numero1 , numero2, escolha;
	
	
	cout<< "Calculadora Basica" <<endl <<endl;
	
	cout<< "Digite o primeiro valor: ";cin >> numero1;
	cout<< "Digite o segundo  valor: ";cin >> numero2 ;
	
	
	cout<< "Escolha o modelo de conta: soma-1, subtracao-2, divisao-3 ou multiplicacao-4: "; cin>> escolha;
    
    int variavelSelecionada;
    
     if (escolha == 1) {
        variavelSelecionada = numero1+numero2;
    } else if (escolha == 2) {
        variavelSelecionada = numero1-numero2;
    } else if (escolha == 3) {
        variavelSelecionada = numero1/numero2;
    } else if (escolha == 4) {
        variavelSelecionada = numero1*numero2;
    } else {
        cout << "Resultado" <<endl;
        variavelSelecionada = 0;
    }
    
    cout << "O Resultado: " << variavelSelecionada << endl;
    
    return 0;
}






	


