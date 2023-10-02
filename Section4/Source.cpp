#include <iostream>
#include <stdio.h>
using namespace std;

//extern int x;

// clean: exclui todos os arquivos objeto. Deixa somente os .cpp e .h. E exclui o executável.
// compilar: converter arquivos .cpp in arquios .o/.obj. São arquivos binários
// Compiler: faz o processo de compilação.
// build: compilar + linkar com libs externas e criar o executável.
// rebuild: clean + build.
// debug: para desenvolvimento.
// release: para produção, usuários finais.
// .exe: é o arquivo gerado após todo o processo de building

/*
syntax error : erro de estrutura de código, sintaxe
semantic error: erro de significado para o compilador. Somar inteiro com string por exemplo.
Porém, sem erro de sintaxe. Algo não faz sentido.

Compiler warning: alerta. É um potencial erro.
Linker errors: linker não conseguiu conectar os arquivos objeto ou header.
--> LNK: erro de linker

Runtime error: ocorrem em tempo de execução, não de compilação.
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