#include "tela.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

const int HEIGHT = 30;
const int WIDTH = 120;
const int LEFT_PADDING = 3;
const int RIGHT_PADDING = 3;
const int TOP_PADDING = 3;

auto gotoxy(int x, int y)->void
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

auto drawH(int n, char simbolo)->void
{
	for (int i = 0; i < n; i++) {
		cout << simbolo;
	}
}

auto centralizar(string texto, int linha)->void
{
    gotoxy((WIDTH/2)-(texto.length()/2),TOP_PADDING+linha);
    cout << texto;
}

auto mensagemDeErro(string texto)->void
{
    gotoxy(LEFT_PADDING+11,TOP_PADDING+HEIGHT);
    cout << texto;
}
auto showOptions(string texto1, string texto2, string texto3)->void
{
    gotoxy(20,TOP_PADDING+25);
    cout << texto1;
    gotoxy(20,TOP_PADDING+26);
    cout << texto2;
    gotoxy(20,TOP_PADDING+27);
    cout << texto3;
    gotoxy(10,TOP_PADDING+28);
    cout << "Opçao: [ ]";
    gotoxy(18,TOP_PADDING+28);
}
auto tela(string titulo)->void
{
	//Horizontal  Parte Superior
	gotoxy(LEFT_PADDING,TOP_PADDING);
	drawH(WIDTH-LEFT_PADDING-RIGHT_PADDING+1, '=');
    //Titulo
    centralizar(titulo, 2);
	//Vertical
	gotoxy(LEFT_PADDING,TOP_PADDING+2);
	for(int i = 0; i < HEIGHT; i++) {
		gotoxy(LEFT_PADDING, TOP_PADDING+2+i);
		cout << '=';
		if(i == 2)
            drawH(WIDTH-LEFT_PADDING-RIGHT_PADDING-2, '=');
		else if (i == 22)
            drawH(WIDTH-LEFT_PADDING-RIGHT_PADDING-2, '=');
		else if (i == 27)
            drawH(WIDTH-LEFT_PADDING-RIGHT_PADDING-2, '=');
        else if (i == 28)
            cout << "Mensagem: ";
	}
	for(int i = 0; i < HEIGHT; i++) {
		gotoxy(WIDTH-RIGHT_PADDING, TOP_PADDING+2+i);
		cout << '=';
	}
	//Horizontal Parte Inferior
	gotoxy(LEFT_PADDING, TOP_PADDING+HEIGHT+1);
	drawH(WIDTH-LEFT_PADDING-RIGHT_PADDING, '=');
}
