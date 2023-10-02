#include <iostream>
#include <stdio.h>
using namespace std;

//extern int x;

// clean: exclui todos os arquivos objeto. Deixa somente os .cpp e .h. E exclui o execut�vel.
// compilar: converter arquivos .cpp in arquios .o/.obj. S�o arquivos bin�rios
// Compiler: faz o processo de compila��o.
// build: compilar + linkar com libs externas e criar o execut�vel.
// rebuild: clean + build.
// debug: para desenvolvimento.
// release: para produ��o, usu�rios finais.
// .exe: � o arquivo gerado ap�s todo o processo de building

/*
syntax error : erro de estrutura de c�digo, sintaxe
semantic error: erro de significado para o compilador. Somar inteiro com string por exemplo.
Por�m, sem erro de sintaxe. Algo n�o faz sentido.

Compiler warning: alerta. � um potencial erro.
Linker errors: linker n�o conseguiu conectar os arquivos objeto ou header.
--> LNK: erro de linker

Runtime error: ocorrem em tempo de execu��o, n�o de compila��o.
Divided by zero por exemplo, FileNotFound
--> Erros que podem ser tratados pelo programador

Logic Errors: erros causados pelo programador. Por ser burro. Causar bugs
*/


int main() {
	int32_t userNumber;
	int32_t anotherNumber;
	while (true) {
		cout << "Type a number between 1 and 100: " << flush;
		cin >> userNumber;
		if (userNumber >= 1 && userNumber <= 100) {
			printf("Amazing! That's is my favorite number too!\n");
			printf("No really! %d is my favorite number!", userNumber);
			break;
		}
		cout << "Not a valid number. Type again." << endl;
		continue;
	}
	return 0;
}