//
//  sequencial.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/17/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//
#include "tela.h"
#include "sequencial.hpp"
#include "menuControl.hpp"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

auto estruturaSequencialFG1()-> void
{
    int menu = 1;

    while(menu == 1){
        menu = 0;
        system("cls");

        tela("Digite Os Valores dos Catetos");
        centralizar("Valor do cateto A:[   ]",8);
        centralizar("Valor do cateto B:[   ]",10);

        float catetoA=0,catetoB=0;

        while(true) {
            gotoxy(68,11);
            cin  >> catetoA;
            if(catetoA <= 0)
                mensagemDeErro("O Numero informado e invalido(0 ou negativo).");
            else break;
        }

        while(true) {
            gotoxy(68,13);
            cin  >> catetoB;
            if(catetoB <= 0)
                mensagemDeErro("O Numero informado e invalido(0 ou negativo).");
            else break;
        }
        const float hipotenusa = sqrt(pow(catetoA,2)+pow(catetoB,2));
        gotoxy(30,20);
        cout << "O triangulo com catetos "
             << catetoA << " e " << catetoB
             << " tem como tamanho da hipotenusa " << hipotenusa;

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin  >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        system("cls");

        switch (menu) {
            case 1:
                break;
            case 2:
                fGeometrica();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto estruturaSequencialFG2() -> void
{
    int menu = 1;
    while(menu){
        menu=0;
        system("cls");
        float raio = 0,comprimento,area;
        const double pi = 3.1415926535;

        tela("CIRCUFERENCIA");
        centralizar("Raio:[   ]",8);

        while(true) {
            gotoxy(61,11);
            cin  >> raio;
            if(raio <= 0)
                mensagemDeErro("O Numero informado e invalido(0 ou negativo).");
            else break;
        }
        comprimento = 2*pi*raio;
        area = pi*pow(raio,2);
        gotoxy(30,18);
        cout << " Circuferencia de Raio: "    << raio;
        gotoxy(30,19);
        cout << " Comprimento: "              << comprimento;
        gotoxy(30,20);
        cout  << " Area: "                     << area;
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin  >> menu;
        }while (testeMenuOptions(menu, 3) == false);


        switch (menu) {
            case 1:
                break;
            case 2:
                fGeometrica();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }

}

auto estruturaSequencialFG3() -> void
{
    int menu=1;

    while(menu == 1){
        menu = 0;
        system("cls");
        float lado = 0,area = 0,perimetro = 0,diagonal = 0;

        tela("QUADRADO");
        centralizar("Lado do Quadrado: [  ]",8);

        while(true) {
            gotoxy(68,11);
            cin  >> lado;
            if(lado <= 0)
                mensagemDeErro("O Numero informado invalido(0 ou negativo).");
            else break;

        }
        area = lado*lado;
        perimetro = lado*4;
        diagonal = sqrt(2)*lado;
        gotoxy(30,18);
        cout << " Area.............: " << area;
        gotoxy(30,19);
        cout << " Perimetro........: " << perimetro;
        gotoxy(30,20);
        cout << " Diagonal.........: " << diagonal;
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin  >> menu;
        }while (testeMenuOptions(menu, 3) == false);


        switch (menu) {
            case 1:
                break;
            case 2:
                fGeometrica();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto estruturaSequencialFG4() -> void
{
    float diagonalMaior=0;
    centralizar("Digite a Diagonal Maior do Losango: [  ]",8);
    while (true) {
        cin  >> diagonalMaior;
        if (diagonalMaior <= 0)
            cout << "O Numero informado e invalido(0 ou negativo).\n";
        else break;
    }
    system("cls");

    const float diagonalMenor = diagonalMaior/2,
                area = diagonalMaior * diagonalMenor/2,
                lado = sqrt(5*area)/2,
                perimetro = lado * 4;

    cout << "Lado do Losango: " << lado          << '\n'
         << "Diagonal Maior.: " << diagonalMaior << '\n'
         << "Diagonal Menor.: " << diagonalMenor << '\n'
         << "Perimetro......: " << perimetro     << '\n'
         << "Area...........: " << area          << "\n\n";
}

auto estruturaSequencial1() -> void
{
    int menu = 1;
    while(menu == 1) {
        menu = 0;
        system("cls");
        string tipo = "";
        int consumoGPeloTipo=0;
        float tempoViagemHoras,velocidadeMediaKMH;
        float consumoEstimadoG,consumoEstimadoEtanol,valorTotal;

        tela("Consumo de Gasolina");
        centralizar("Tipo do veiculo(A,B ou C): [ ]",8);
        cin.ignore();
        getline(cin, tipo);
        if(tipo[0] == 'A' || tipo[0] == 'a')
            consumoGPeloTipo = 8;
        if(tipo[0] == 'B' || tipo[0] == 'a')
            consumoGPeloTipo = 10;
        if(tipo[0] == 'C' || tipo[0] == 'c')
            consumoGPeloTipo = 12;

        centralizar("Tempo da Viagem em horas: ",10);
        cin  >> tempoViagemHoras;
        centralizar("Velocidade media do veiculo: ", 12);
        cin  >> velocidadeMediaKMH;

        consumoEstimadoG = (tempoViagemHoras * velocidadeMediaKMH)/consumoGPeloTipo;
        consumoEstimadoEtanol = consumoEstimadoG + consumoEstimadoG*0.4;
        valorTotal = (consumoEstimadoG * 3.8) + (consumoEstimadoEtanol * 2.9);

        cout.precision(3);
        gotoxy(30,10);
        cout << fixed << "Consumo Estimado de Gasolina: "  << consumoEstimadoG << "L";
        gotoxy(30,11);
        cout << "Consumo Estimado de Etanol: "<< consumoEstimadoEtanol <<"L";
        gotoxy(30,12)
        cout.precision(2);
        cout << "Valor total gasto: R$ " << fixed << valorTotal;
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");

        do{
            cin >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        switch (menu) {
            case 1:
                break;
            case 2:
                fGeometrica();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto estruturaSequencial2() -> void {
    int menu = 1;
    while(menu == 1){
        menu =0;
        //Variaveis
        int diasAtraso;
        float valorConta, multa, jurosTotal, totalPagar;
        tela("QUANTO VOU PAGAR?");

        centralizar("O valor da conta R$:       ",8);
        cin  >>valorConta;
        centralizar("Informe os dias de atraso: ",10);
        cin  >>diasAtraso;

        //Processamento
        jurosTotal = (diasAtraso/30)+valorConta*0.09;
        multa      = valorConta*0.05;
        totalPagar = valorConta+multa+jurosTotal;

        //Saidas
        cout.precision(2);
        gotoxy(35,16);
        cout << "Dias de atraso..: " << int(diasAtraso);
        gotoxy(35,17);
        cout << "Valor da Conta..: R$ " << valorConta;
        gotoxy(35,18);
        cout << "Total da Multa .: R$ " << multa;
        gotoxy(35,19);
        cout << "Juros Total.....: R$ " << jurosTotal;
        gotoxy(35,20);
        cout << "Preço Final ....: R$ " << totalPagar;

        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        switch (menu) {
            case 1:
                break;
            case 2:
                estruturaCondicionalMenu();
                break;
            case 3:
                menuControl();
                break;
            default:
                break;
        }
    }
}

auto fGeometrica() -> void {

    while(true) {
        system("cls");
        int selected;
        tela("FIGURAS GEOMETRICAS");
        centralizar("1 - Triangulo      (Hipotenusa)             ",8);
        centralizar("2 - Circurferencia (Comprimento e Area)     ",10);
        centralizar("3 - Quadrado       (Area Perimetro Diagonal)",12);
        centralizar("4 - Losango        (Lado Area Perimetro)    ",14);
        centralizar("5 - Voltar ao Menu Inicial                  ",16);
        centralizar("Opção:[ ]       ",18);

        do{
            gotoxy(60,21);
            cin >> selected;
        }while (testeMenuOptions(selected, 5) == false);


        system("cls");

        switch (selected) {
            case 1:
                estruturaSequencialFG1();
                break;
            case 2:
                estruturaSequencialFG2();
                break;
            case 3:
                estruturaSequencialFG3();
                break;
            case 4:
                estruturaSequencialFG4();
                break;
            case 5:
                estruturaSequencialMenu();
                break;
            default:
                break;
        }

    }

}

auto estruturaSequencialMenu() -> void
{

   while(true) {
        int selected = 0;

        tela("ESTRUTURA SEQUENCIAL");

        centralizar("1-Figuras Geometricas   ",8);
        centralizar("2-Exercicio Combustivel ",10);
        centralizar("3-Exercicio Prestacao   ",12);
        centralizar("4-Voltar ao menu inicial",14);
        centralizar("Opçao: [ ]",18);
       do{
           gotoxy(64,21);
           cin >> selected;
       }while (testeMenuOptions(selected, 4) == false);

        system("cls");

        switch (selected) {
            case 1:
                fGeometrica();
                break;
            case 2:
                estruturaSequencial1();
                break;
            case 3:
                estruturaSequencial2();
                break;
            case 4:
                menuControl();
                break;
            default:
                cout << "Think";
      }
   }
}
