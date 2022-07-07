#include <iostream>

using namespace std;

double somar, subtrair, multiplicar, dividir, a, b;
int opcao;

double operacao(double somar, double subtrair, double multiplicar, double dividir, double a, double b, int opcao) {
	switch (opcao) {

	case 1:
		cout << "Informe o primeiro numero\n";
		cin >> a;
		cout << "Informe o proximo numero\n";
		cin >> b;
		somar = a + b;
		cout << "O resultado e:\n" << somar;
		break;

		return opcao;

	case 2:
		cout << "Informe o primeiro numero\n";
		cin >> a;
		cout << "Informe o proximo numero\n";
		cin >> b;
		subtrair = a - b;
		cout << "O resultado e:\n" << subtrair;
		break;

		return opcao;

	case 3:
		cout << "Informe o primeiro numero\n";
		cin >> a;
		cout << "Informe o proximo numero\n";
		cin >> b;
		multiplicar = a * b;
		cout << "O resultado e:\n" << multiplicar;
		break;

		return opcao;

	case 4:
		cout << "Informe o primeiro numero\n";
		cin >> a;
		cout << "Informe o proximo numero\n";
		cin >> b;
		dividir = a / b;
		cout << "O resultado e\n" << dividir;
		break;
		
		return opcao;

	case 5:
		cout << "Sair";
		break;
	}
}

int main()
{
	int opcao;
	cout << "Digite o numero correpondente a operacao desejada\n\n";
	cout << "1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n\n";
	cin >> opcao;
	operacao(somar, subtrair, multiplicar, dividir, a, b, opcao);

}


