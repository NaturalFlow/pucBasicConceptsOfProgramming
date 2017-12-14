#include "repeticao.h"
#include <iostream>
#include <string>
#include "menuControl.hpp"
#include <cmath>
#include "tela.h"

using namespace std;

auto estruturaRepeticao1() -> void
{
    while(true){
        int Num1 , Num2 , Cont = 0, menu;
        float Media = 0;
        tela("SOMA DE INTERVALO DE NUMEROS");
        centralizar("Numero 1: [  ]", 8);
        centralizar("Numero 2: [  ]", 10);
        gotoxy(64,11);
		cin >> Num1 ;
		while(Num1 < 0){
            mensagemDeErro("Numero invalido");
            cin >> Num1 ;
		}
		gotoxy(64,13);
		cin >> Num2 ;
		while(Num2 < 0) {
            cout << "\n Numero invalido : " ;
            cin >> Num2 ;
		}

		if(Num1 < Num2)
		{
			for(int i=Num1; i < Num2+1; i++)
			{
				Media = Media + i ;
			}
		 Media = Media / ((Num2 - Num1) 	) ;
		 gotoxy(40,20);
		 cout << "Media do intervalo = " << Media ;
		}
		else if(Num1 > Num2) {
			for(int j=Num2; j < Num1+1 ; j++) {
				if((j % 2 ) == 0) {
					Cont ++ ;
				}
			}
			gotoxy(40,20);
			cout << "Numeros de pares = " << Cont ;
		}
		else {
            gotoxy(40,20);
			cout << "Os numeros sao iguais ! ";
		}

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        cin >> menu;
		switch (menu) {
            case 1:
                break;
            case 2:
                estruturaRepeticaoMenu();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }

}

auto estruturaRepeticao2() -> void
{
    int menu = 1;

    while(menu == 1){
        menu = 0;
        system("cls");
        tela("CONVERSOR GRAUS CELSIUS EM GRAUS FAHRENHEIT");
        centralizar("Informe a temperatura a converter ",8);
        centralizar("Temperatura: [   ] *C             ",10);

        float c,F;

        while(true) {
            gotoxy(57,13);
            cin  >> c;
            if(c<= 0)
                mensagemDeErro("O Numero informado e invalido(ou negativo).");
            else break;
        }

        F = (1.8*c) + 32;
        gotoxy(43,16);
        cout << "[ " << c << " *C corresponde a " << F << " *F ]";

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin  >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaRepeticaoMenu();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto estruturaRepeticao3() -> void
{
    int menu;
    while(true) {
        int num1,num2,aux,qtdeTermos;
        tela("SERIE DE FETUCCINE");
        centralizar("Quantidade de Termos[  ]",10);
        centralizar("Primeiro Termo      [  ]",12);
        centralizar("Segundo Termo       [  ]",14);
        gotoxy(69,13);
        cin  >> qtdeTermos;
        gotoxy(69,15);
        cin  >> num1;
        gotoxy(69,17);
        cin  >> num2;
        gotoxy(30,20);
        cout << "Fetuccine {" << num1 <<"," << num2;
        for (int i = 3; i <= qtdeTermos; i++) {
            if(i%2 ==0) {
                aux = num2 - num1;
                cout <<"," << aux;
            }
            else{
                aux = num2 + num1;
                cout << "," << aux;
            }
            num1 = num2;
            num2 = aux;
        }
        cout << "}";
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                estruturaRepeticao4();
            case 2:
                estruturaRepeticaoMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaRepeticao4() -> void
{
    int menu = 1;
    while(menu == 1){
        menu = 0;
        system("cls");

        char nome[50];
        int tamanho;
        tela("TAMANHO DE UM NOME");
        centralizar("Digite seu nome completo: ",8);
        fflush(stdin);
        centralizar("Nome:                     ",10);
        gotoxy(53,14);
        cout << "-----------------------------------";
        gotoxy(53,13);
        cin.getline(nome,50);

        tamanho = strlen(nome);
        gotoxy(47,16);
        cout << "O nome digitado e " << nome << ",";
        gotoxy(47,17);
        cout << "e tem " << tamanho << " caracteres." << endl;

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                estruturaRepeticao4();
            case 2:
                estruturaRepeticaoMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaRepeticao5() -> void
{
    while(true){
        tela("TABUADA");
        centralizar("Operador(+-/*) : [ ]",7);
        gotoxy(68,11);
        char operador;
        int k = 0;
        cin >> operador;

        switch(operador) {
                case '+':
                    for(int i = 0; i < 10 ; i ++) {
                        for(int j = 0; j < 10; j++) {
                            gotoxy(10+k,11+j);
                            cout << i+1 << " + "<< j+1 << " = " << i+j;
                        }
                        k+=10;
                    }
                    break;
                case '-':
                    for(int i= 1 ; i < 10 ; i ++) {
				     	for(int j =1 ; j < 10; j++) {
                            gotoxy(10+k,11+j);
				     		cout << i << "-"<< j << "= " << i-j  ;
						 }
						 k+=10;
					 }
					 break;
				case '/':
					for(int i= 1 ; i < 10 ; i ++) {
				     	for(int j =1 ; j < 10; j++) {
                            gotoxy(10+k,11+j);
				     		cout << i << "/" << j << "= " << i/j  ;
						 }
					 }
					 break;
				case '*':
					for(int i= 1 ; i < 10 ; i ++) {
				     	for(int j =1 ; j < 10; j++) {
                            gotoxy(10+k,11+j);
				     		cout << i << "x"<< j << "= " << i*j;
						 }
                        k+=10;
					 }
					 break;
				default : "\n Digite uma operacao valida ";
            }
             showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        int menu=0;
        do{
            cin  >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaRepeticaoMenu();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto estruturaRepeticaoMenu() -> void
{
    system("cls");
    bool menu = false;

    while(menu == false) {
        int selected = 0;
        tela("ESTRUTURA DE REPETICAO");

        centralizar("1-Se Crescente/Decrescente/Iguais      ",8);
        centralizar("2-Conversor de Temperatura *C -> *F    ",10);
        centralizar("3-Serie de Fetuccine                   ",12);
        centralizar("4-Contador de Nome/Caracteres          ",14);
        centralizar("5-Tabuada de 1 a 10                    ",16);
        centralizar("6-Voltar ao Menu Principal             ",18);
        centralizar("Opcao: [ ]                             ",20);
        do{
            gotoxy(49,23);
            cin >> selected;
        }while (testeMenuOptions(selected, 6) == false);

        system("cls");

        switch (selected) {
            case 1:
                estruturaRepeticao1();
                break;
            case 2:
                estruturaRepeticao2();
                break;
            case 3:
                estruturaRepeticao3();
                break;
            case 4:
                estruturaRepeticao4();
                break;
            case 5:
                estruturaRepeticao5();
                break;
             case 6:
                menuControl();
                break;

            default:
                cout << "Think";
        }
    }
}
