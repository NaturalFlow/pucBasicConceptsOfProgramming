#include "tela.h"
#include "vetorial.h"
#include "menuControl.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <random>
#include <algorithm>
#include <vector>

using namespace std;

auto estruturaVetorial1() -> void
{
   int menu;
    while(true) {
        int notas[9],medias[3],mediaAux = 0 ;
        tela("MEDIA DE ALUNOS");
        centralizar("Nota 1  [  ]",8);
        centralizar("Nota 2  [  ]",9);
        centralizar("Nota 3  [  ]",10);
        centralizar("Nota 4  [  ]",11);
        centralizar("Nota 5  [  ]",12);
        centralizar("Nota 6  [  ]",13);
        centralizar("Nota 7  [  ]",14);
        centralizar("Nota 8  [  ]",15);
        centralizar("Nota 9  [  ]",16);
        for(int i = 0; i <9; i++) {
            gotoxy(63,11+i);
            cin  >> notas[i];
            mediaAux = mediaAux + notas[i];
            if(i%3==0) {
                medias[(i/3)-1] = mediaAux/3;
                mediaAux = 0;
            }
        }
        gotoxy(35,22);
        cout << "Medias 3 a 3 : {";
        for (auto media: medias){
            cout << media <<",";
        }
        cout << "}";
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaVetorialMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaVetorial2() -> void
{
     int menu;
     while(true) {
        int vetorA[10],vetorB[10],vetorSoma[10];
        tela("SOMA DE VETORES");
        for(int i =0;i<10;i++) {
            vetorA[i]=rand()%(100-0+1) + 0;
            vetorB[i]=rand()%(100-0+1) + 0;
            vetorSoma[i] = vetorA[i] + vetorB[i];
        }
        gotoxy(35,12);
        cout << "Vetor A : {";
        for (auto num: vetorA) {
            cout << num <<",";
        }
        cout << "}";
        gotoxy(35,14);

        cout << "Vetor B : {";
        for (auto num: vetorB) {
            cout << num <<",";
        }
        cout << "}";

        gotoxy(35,16);
        cout << "Vetor Soma : {";
        for (auto num: vetorSoma) {
            cout << num <<",";
        }
        cout << "}";
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaVetorialMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaVetorial3() -> void
{
     int menu;
     while(true) {
        int vetorA[10],vetorB[10],vetorSoma[10];
        tela("COMPARAR VETORES");
        for(int i =0;i<10;i++) {
            vetorA[i]=rand()%(100-0+1) + 0;
            vetorB[i]=rand()%(100-0+1) + 0;
            vetorSoma[i] = vetorA[i] + vetorB[i];
        }
        gotoxy(35,12);
        cout << "Vetor A : {";
        for (auto num: vetorA) {
            cout << num <<",";
        }
        cout << "}";
        gotoxy(35,14);

        cout << "Vetor B : {";
        for (auto num: vetorB) {
            cout << num <<",";
        }
        cout << "}";

        gotoxy(35,16);
        cout << "Vetor Soma : {";
        for (auto num: vetorSoma) {
            cout << num <<",";
        }
        cout << "}";
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaVetorialMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaVetorial4() -> void
{
     int menu;
     while(true) {
        vector<int> vetorA;
        tela("ORDENANDO VETORES");
        for(int i =0;i<10;i++) {
            vetorA.push_back(rand()%(100-0+1) + 0);
        }
        gotoxy(35,10);
        cout << "Vetor : {";
        for (auto num: vetorA) {
            cout << num <<",";
        }
        cout << "}";
        sort(vetorA.begin(),vetorA.end());
        gotoxy(35,12);
        cout << "Vetor Ordenado: {";
        for (auto num: vetorA) {
            cout << num <<",";
        }
        cout << "}";

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        } while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaVetorialMenu();
            case 3:
                menuControl();
            default:
                break;
        }
    }
}

auto estruturaVetorialMenu() -> void
{
    system("cls");
    bool menu = false;

    while(menu == false) {
        int selected = 0;
        tela("ESTRUTURA VETORIAL");

        centralizar("1-Media aritmetica das 3 medias        ",8);
        centralizar("2-Soma de dois vetores                 ",10);
        centralizar("3-Numeros comuns e posiçoes dos vetores",12);
        centralizar("4-Vetor em ordem crescente             ",14);
        centralizar("5-Voltar ao Menu Principal             ",16);
        centralizar("Opcao: [ ]                             ",20);
        do{
            gotoxy(49,23);
            cin >> selected;
        }while (testeMenuOptions(selected, 5) == false);

        system("cls");

        switch (selected) {
            case 1:
                estruturaVetorial1();
                break;
            case 2:
                estruturaVetorial2();
                break;
            case 3:
                estruturaVetorial3();
                break;
            case 4:
                estruturaVetorial4();
                break;
            case 5:
                menuControl();
                break;

            default:
                cout << "Think";
        }
    }
}
