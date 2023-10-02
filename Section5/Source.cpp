/*
identifier != keywords != operators
keywords: palavras reservadas
identifiers: algo que um programador nomeou
Syntax: toda a estrutura de um programa que forma o source code


c++ Pre Processor N�O ENTENDE C++, APENAS PREPARA O SOURCE CODE PARA O COMPILADOR, QUE ENTENDE C++
Processa o source code antes do momento de compila��o,
ou seja, entra em a��o antes do compilador.

A��es do Pre Processor:
1 - substitui coment�rios com espa�o em branco

2 - Olha para as Pre-Processor Directives
Pre-Processor Directives: linhas que come�am com #

#include "x.h"
-> Nesse caso, o Pre-Processor substitui a linha por todo o conte�do do arquivo referido, no caso, "x.h",
e processa esse arquivo tamb�m

Portanto, o compilador n�o enxerga as Pre Processor Directives

#if
#idndef
#ifdef
--> S�o Pre Processor Directives que permitem compilar o c�digo condicionalmente

Cada projeto de c++ s� pode ter UMA main function. � a primeira fun��o chamada ap�s executar o programa.
Tudo dentro dela, � o que vai ser executado em tempo de execu��o.
*/

// argc: argument counter. N�mero de argumentos passados
// argv: argument vector. Os argumentos passados em si.

#include <iostream>
#include "Exercises.h"
using namespace std;


int main(int argc, char* argv[]) {
	//std::string name;
	//int y = 0;
	//cout << "Type a name: " << endl; // cout (output stream) � o console
	//cin >> name; // espera dois inputs. cin, por padr�o, l� do teclado
	//// cin encara espa�os em branco, tabs, new lines � direita como fim do stream.
	//// mas quando � esquerda, apenas ignora.
	//cout << "Type a number: " << endl;
	//
	//Processo do cin:
	//--> usu�rio digita no teclado
	//--> pressiona enter. As informa��es v�o para o buffer
	//--> cin extrai informa��es do buffer e joga para a vari�vel
	//--> O quanto do input ser� extra�do depende do tipo da vari�vel para a qual ser� direcionado

	//\n: new line character
	//endl: new line characater + flush do buffer de input
	//*/
	//cout << name << endl;
	//cout << y << endl;

	//string anotherName;
	//cout << "Type another name: " << flush;
	//// flush the buffer. Limpa o buffer. Tira o new line character do buffer do console.
	//cin >> anotherName;
	//cout << anotherName << endl;
	//cout << "------------------" << endl;
	//int z = 0;
	//int a = 0;
	//cout << "Type a number";
	//// como o buffer n�o � limpado, qualquer coisa depois de espa�os � direita ser� entendido
	//// como input para a pr�xima vari�vel.
	//cin >> z;
	//cin >> a;
	//cout << "Z: " << z << endl;
	//cout << "A: " << a << endl;
	Exercises* exercises = new Exercises;
	exercises->exercise1();
	exercises->exercise2();
	exercises->exercise3();

	delete exercises;
	// >> : extraction operator. Extrai informa��es do cin (input stream) para as vari�veis
	return 0;
}