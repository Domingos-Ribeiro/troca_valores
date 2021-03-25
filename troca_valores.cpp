
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
	// Trocando os valores das variáveis
	int a = 0;
	int b = 0;
	int aux;
	int* apontador_a = NULL;
	int* apontador_b = NULL;
	int* auxiliar = NULL;
	apontador_a = &a;
	apontador_b = &b;

	cout << "\n";
	cout << "Introduza um numero: ";
	cin >> a;
	cout << "Introduza mais um numero: ";
	cin >> b;

	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
	cout << "Endereco de memoria da variavel a (Primeiro valor) Antes da Troca ----> ";
	cout << apontador_a;
	cout << "\n";
	cout << "Valor da variavel (a) tambem Antes da Troca---------------------------> ";
	cout << *apontador_a;
	cout << "\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";

	cout << "\n";
	cout << "O primeiro numero foi o ----------------------------------------------> "<< a << endl;
	cout << "O segundo numero introduzido foi o -----------------------------------> " << b << endl;
	cout << "\n";



	// Para efetuar a troca necessitamos de um auxiliar que tome o valor de a
	aux = a;
	a = b;
	b = aux;

	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXX Depois de efetuada a Troca ";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
	cout << "O primeiro valor ficou com -------------------------------------------> " << a << endl;
	cout << "O segundo numero introduzido ficou com o valor -----------------------> " << b << endl;
	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
	
	cout << "Endereco de memoria da variavel a (Primeiro valor) DEPOIS da troca ---> ";
	cout << apontador_a;
	cout << "\n\n";
	cout << "Valor da Variavel (a) Depois de Efetuada a Troca ---------------------> ";
	cout << *apontador_a;
	cout << "\n\n";

	cout << "Confirmacao do endereco de (a) Depois da Troca -----------------------> ";
	cout << &a;
	cout << "\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n\n";
	

}
