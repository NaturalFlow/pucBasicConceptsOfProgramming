//
//  sequencial.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/17/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include "sequencial.hpp"
#include "menuControl.hpp"
#include <iostream>
#include <cmath>

using namespace std;

void estruturaSequencialFG1() {
    
    int menu = 1;
    
    while(menu == 1){
        menu = 0;
        system("clear");
        
        float catetoA=0,catetoB=0,hipotenusa=0;
        
        while(true) {
            cout << "Digite o valor de um cateto: ";
            cin  >> catetoA;
            if(catetoA <= 0)
                cout << "O Numero informado e invalido(0 ou negativo).\n";
            else break;
        }
        
        while(true) {
            cout << "Digite o valor do outro cateto: ";
            cin  >> catetoB;
            if(catetoB <= 0)
                cout << "O Numero informado e invalido(0 ou negativo).\n";
            else break;
        }
        system("clear");
        
        hipotenusa = sqrt(pow(catetoA,2)+pow(catetoB,2));
        
        cout << "\nO triangulo com catetos "
             << catetoA << " e " << catetoB
             << " tem como tamanho da hipotenusa " << hipotenusa << "\n\n"
        
             << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
        
        cin  >> menu;
        
        system("clear");
        
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

void estruturaSequencialFG2() {
    int menu = 1;
    while(menu){
        menu=0;
        system("clear");
        float raio = 0,comprimento,area;
        const double pi = 3.1415926535;
        
        while(true) {
            cout << "Informe o raio da circuferencia: ";
            cin  >> raio;
            if(raio <= 0)
                cout << "O Numero informado e invalido(0 ou negativo).\n";
            else break;
        }
        system("clear");
        
        comprimento = 2*pi*raio;
        area = pi*pow(raio,2);
        
        cout << " Circuferencia de Raio: "    << raio        << '\n'
             << " Comprimento: "              << comprimento << '\n'
             << " Area: "                     << area        << "\n\n"
        
             << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
        
        cin  >> menu;
        
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

void estruturaSequencialFG3() {
    int menu=1;
    
    while(menu == 1){
        
        menu = 0;
        
        system("clear");
        
        float lado = 0,area = 0,perimetro = 0,diagonal = 0;
        
        while(true) {
            cout << "Informe o lado do quadrado:";
            cin  >> lado;
            
            if(lado <= 0)
                cout << "O Numero informado e invalido(0 ou negativo).\n";
            else break;
            
        }
        system("clear");
        
        area = lado*lado;
        perimetro = lado*4;
        diagonal = sqrt(2)*lado;
        
        cout << "\nLado Do Quadrado: " << lado      << '\n'
             << " Area.............: " << area      << '\n'
             << " Perimetro........: " << perimetro << '\n'
             << " Diagonal.........: " << diagonal  << "\n\n"
             << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
        cin  >> menu;
        
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

void estruturaSequencialFG4() {
    float lado = 0,area=0,diagonalMaior=0,perimetro=0,diagonalMenor=0;
    
    while (true) {
        cout << "Digite a Diagonal Maior do Losango: ";
        cin  >> diagonalMaior;
        if (diagonalMaior <= 0)
            cout << "O Numero informado e invalido(0 ou negativo).\n";
        else break;
    }
    system("clear");
    
    diagonalMenor = diagonalMaior/2;
    area = diagonalMaior * diagonalMenor/2;
    lado = sqrt(5*area)/2;
    perimetro = lado * 4;
    
    cout << "Lado do Losango: " << lado          << '\n'
         << "Diagonal Maior.: " << diagonalMaior << '\n'
         << "Diagonal Menor.: " << diagonalMenor << '\n'
         << "Perimetro......: " << perimetro     << '\n'
         << "Area...........: " << area          << "\n\n";
}

void estruturaSequencial1() {
    int menu =1;
    
    while(menu == 1){
        menu = 0;
        system("clear");
        
        char tipo[1];
        int consumoGPeloTipo=0;
        float tempoViagemHoras,velocidadeMediaKMH;
        float consumoEstimadoG,consumoEstimadoEtanol,valorTotal;
        
        cout << "Informe Dados do veiculo\n"
             << "Tipo do veiculo(A,B ou C): ";
        fgets(tipo, 1, stdin);
        if (tipo[strlen(tipo)-1] == '\n') tipo[strlen(tipo)-1] = '\0';

        
        if(tipo[0] == 'A' || tipo[0] == 'a')
            consumoGPeloTipo = 8;
        if(tipo[0] == 'B' || tipo[0] == 'a')
            consumoGPeloTipo = 10;
        if(tipo[0] == 'C' || tipo[0] == 'c')
            consumoGPeloTipo = 12;
        
        cout << "\nTempo da Viagem em horas: ";
        cin  >> tempoViagemHoras;
        cout << "\nVelocidade media do veiculo: ";
        cin  >> velocidadeMediaKMH;
        
        
        
        consumoEstimadoG = (tempoViagemHoras * velocidadeMediaKMH)/consumoGPeloTipo;
        consumoEstimadoEtanol = consumoEstimadoG + consumoEstimadoG*0.4;
        valorTotal = (consumoEstimadoG * 3.8) + (consumoEstimadoEtanol * 2.9);
        
        system("clear");
        cout.precision(3);
        cout << fixed
             << "Consumo Estimado de Gasolina: "  << consumoEstimadoG      <<"L\n"
             << "Consumo Estimado de Etanol: "    << consumoEstimadoEtanol <<"L\n";
        cout.precision(2);
        cout << "Valor total gasto: R$ " << fixed << valorTotal <<"\n\n"
        
             << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
        
        cin  >> menu;
        
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

void estruturaSequencial2() {
}

void fGeometrica() {
    
    while(true) {
        system("clear");
        
        int selected;
        cout << "1 - Triangulo      (Hipotenusa)\n"
             << "2 - Circurferencia (Comprimento e Area)\n"
             << "3 - Quadrado       (Area Perimetro Diagonal)\n"
             << "4 - Losango        (Lado Area Perimetro)\n"
             << "5 - Voltar ao Menu Inicial"
             << "\n\nAperte o numero referente ao exercicio que deseja executar e aperte enter: ";
        
        cin  >> selected;
        
        system("clear");
        
        switch (selected) {
            case 1:
                cout << "Exercicio 01 Estrutura Sequencial(Triangulo)\n\n";
                estruturaSequencialFG1();
                break;
            case 2:
                cout << "Exercicio 02 Estrutura Sequencial(Circurferencia)\n\n";
                estruturaSequencialFG2();
                break;
            case 3:
                cout << "Exercicio 03 Estrutura Sequencial(Quadrado)\n\n";
                estruturaSequencialFG3();
                break;
            case 4:
                cout << "Exercicio 04 Estrutura Sequencial(Losango)\n\n";
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

void estruturaSequencialMenu() {
    
   while(true) {
        int selected = 0;
    
        cout << "1 - Figuras Geometricas\n"
             << "2 - Exercicio Combustivel\n"
             << "3 - Exercicio Prestacao\n"
             << "4 - Voltar ao menu inicial\n\n"
             << "Digite o numero da categoria e aperte enter: ";
        cin  >> selected;
    
        system("clear");
    
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
