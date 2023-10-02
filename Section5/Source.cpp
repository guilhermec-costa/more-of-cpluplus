/*
identifier != keywords != operators
keywords: palavras reservadas
identifiers: algo que um programador nomeou
Syntax: toda a estrutura de um programa que forma o source code


c++ Pre Processor NÃO ENTENDE C++, APENAS PREPARA O SOURCE CODE PARA O COMPILADOR, QUE ENTENDE C++
Processa o source code antes do momento de compilação,
ou seja, entra em ação antes do compilador.

Ações do Pre Processor:
1 - substitui comentários com espaço em branco

2 - Olha para as Pre-Processor Directives
Pre-Processor Directives: linhas que começam com #

#include "x.h"
-> Nesse caso, o Pre-Processor substitui a linha por todo o conteúdo do arquivo referido, no caso, "x.h",
e processa esse arquivo também

Portanto, o compilador não enxerga as Pre Processor Directives

#if
#idndef
#ifdef
--> São Pre Processor Directives que permitem compilar o código condicionalmente

Cada projeto de c++ só pode ter UMA main function. É a primeira função chamada após executar o programa.
Tudo dentro dela, é o que vai ser executado em tempo de execução.
*/

// argc: argument counter. Número de argumentos passados
// argv: argument vector. Os argumentos passados em si.

#include <iostream>
#include "Exercises.h"
using namespace std;


int main(int argc, char* argv[]) {
	//std::string name;
	//int y = 0;
	//cout << "Type a name: " << endl; // cout (output stream) é o console
	//cin >> name; // espera dois inputs. cin, por padrão, lê do teclado
	//// cin encara espaços em branco, tabs, new lines à direita como fim do stream.
	//// mas quando à esquerda, apenas ignora.
	//cout << "Type a number: " << endl;
	//
	//Processo do cin:
	//--> usuário digita no teclado
	//--> pressiona enter. As informações vão para o buffer
	//--> cin extrai informações do buffer e joga para a variável
	//--> O quanto do input será extraído depende do tipo da variável para a qual será direcionado

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
	//// como o buffer não é limpado, qualquer coisa depois de espaços à direita será entendido
	//// como input para a próxima variável.
	//cin >> z;
	//cin >> a;
	//cout << "Z: " << z << endl;
	//cout << "A: " << a << endl;
	Exercises* exercises = new Exercises;
	exercises->exercise1();
	exercises->exercise2();
	exercises->exercise3();

	delete exercises;
	// >> : extraction operator. Extrai informações do cin (input stream) para as variáveis
	return 0;
}