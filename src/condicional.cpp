//
//  condicional.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/19/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//
#include "tela.h"
#include "condicional.hpp"
#include <iostream>
#include <string>
#include "menuControl.hpp"

using namespace std;

auto estruturaCondicional1() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;
        int nums[3] = {};
        float input;
        system("cls");
        tela("ORDENAR 3 NUMEROS INTEIROS");
        centralizar("Numero 1: [  ]",8);
        centralizar("Numero 2: [  ]",10);
        centralizar("Numero 3: [  ]",12);
        int inputColumn = 0;
        for(int i = 0; i < 3; i++) {
            while(true) {
                inputColumn+=2;
                gotoxy(64,9+inputColumn);
                cin  >> input;
                if (input/float(int(input)) > 1){
                    cout << "Informe um numero valido(inteiro)\n";
                    cin.clear();
                }
                else{
                    nums[i] = input;
                    break;
                }
            }
        }

        if (nums[0] <= nums[1] && nums[1] <= nums[2]) {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[0] << ',' << nums[1] << ',' << nums[2] << "]\n";
        }

        else if (nums[0] <= nums[2] && nums[2] <= nums[1]) {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[0] << ',' << nums[2] << ',' << nums[1] << "]\n";
        }
        else if (nums[1] <= nums[0] && nums[0] <= nums[2]) {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[1] << ',' << nums[0] << ',' << nums[2] << "]\n";
        }

        else if (nums[1] <= nums[0] && nums[2] <= nums[0]) {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[1] << ',' << nums[2] << ',' << nums[0] << "]\n";
        }

        else if (nums[2] <= nums[0] && nums[0] <= nums[1]) {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[2] << ',' << nums[0] << ',' << nums[1] << "]\n";
        }

        else {
            gotoxy(30,20);
            cout << "Segue-se os numeros em ordem crescente:["
                  << nums[2] << ',' << nums[1] << ',' << nums[0] << "]\n\n";
        }
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

auto estruturaCondicional2() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;
        string capital;
        system("cls");
        tela("CAPITAL DE GOIAS");
        centralizar("Qual e a capital de Goias ? [           ]",9);
        gotoxy(68,12);
        cin.ignore();
        getline(cin,capital);


        if (capital == "Goiania" || capital == "GOIANIA") {
            gotoxy(41,20);
            cout << "RESPOSTA CORRETA!!! =D";
        }
        else {
            gotoxy(40,20);
            cout << "RESPOSTA INCORRETA!!! =(";
        }
        showOptions("1-Repetir o exercicios","2-Voltar ao menu anterior.","3-Voltar ao menu principal.");
        do{
            cin >> menu;
        }while (testeMenuOptions(menu, 3) == false);

        switch (menu) {//Saidas
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

auto estruturaCondicional3() -> void
{
    int menu = 1;
    while(menu == 1){
        menu = 0;
        system("cls");

        float num1,num2;
        char operador;

        tela("CALCULADORA DE 4 OPERAÇOES");
        centralizar("Numero 1       [  ]",10);
        centralizar("Operador(+-/*) [ ] ",12);
        centralizar("Numero 2       [  ]",14);
        gotoxy(67,13);
        cin  >> num1;
        gotoxy(67,15);
        cin  >> operador;
        gotoxy(67,17);
        cin  >> num2;

        switch (operador) {
            case '+':
                gotoxy(35,20);
                cout << "Resultado da soma:" << num1 + num2;
                break;
            case '-':
                gotoxy(35,20);
                cout << "Resultado da diferen;a: " << num1 - num2;
                break;
            case '*':
                gotoxy(35,20);
                cout << "Resultado do produto: " << num1 * num2;
                break;
            case '/':
                gotoxy(35,20);
                cout << "Resultado do quociente: " << num1 / num2;
                break;
            default:
                break;
        }
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

auto estruturaCondicional4() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;
        //Variaveis
        int diasAtraso;
        float valorConta, multa, jurosTotal, totalPagar;
        tela("QUANTO VOU PAGAR?");

        centralizar("O valor da conta R$: ",8);
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
        cout << "Preço Final R$..: R$ " << totalPagar;

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
auto estruturaCondicional5() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;
        system("cls");
        float salario,valorDoEmprestimo,qtdeParcelas,valorDasParcelas = 0.0;

        tela("MARGEM DE CONSIGNAÇAO");
        centralizar("Salario do empregado:   [        ]",8);
        centralizar("Valor do emprestimo:    [        ]",10);
        centralizar("Quantidade de Parcelas: [  ]      ",12);
        gotoxy(68,11);
        cin  >> salario;
        gotoxy(68,13);
        cin  >> valorDoEmprestimo;
        gotoxy(68,15);
        cin  >> qtdeParcelas;

        valorDasParcelas= valorDoEmprestimo/qtdeParcelas;
        gotoxy(35,18);
        cout << "Valor das parcelas: " << valorDasParcelas;
        gotoxy(10,20);
        if (valorDasParcelas > (salario*0.3))
             cout << "O Emprestimo NAO PODE SER CONCEDIDO. O valor das parcelas sao maiores que 30% do salario do empregado.";
        else cout << "O Emprestimo PODE SER CONCEDIDO. Salario do empregado pode manter o valor das parcelas.";

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
auto estruturaCondicional6() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;

        /*VARIAVEIS*/
        string nome;
        float nota1, nota2, nota3, nota4;
        float N1, N2, mediaFinal, frequencia;
        int aulas, faltas, presenca;
        system("cls");
        /*ENTRADAS*/
        tela("MEDIA FINAL E FREQUENCIA");
        cin.ignore();
        centralizar("Nome do Aluno:[              ]",6);
        gotoxy(60,9);
        getline(cin,nome);
        centralizar("Primeira Nota do aluno : [   ]",8);
        gotoxy(71,11);
        cin  >>nota1;
        centralizar("Segunda Nota do aluno  : [   ]",10);
        gotoxy(71,13);
        cin  >>nota2;
        centralizar("Terceira Nota do aluno : [   ]",12);
        gotoxy(71,15);
        cin  >>nota3;
        centralizar("Quarta Nota do aluno   : [   ]",14);
        gotoxy(71,17);
        cin  >>nota4;
        centralizar("Numero de aulas dadas  : [   ]",16);
        gotoxy(71,19);
        cin  >>aulas;
        centralizar("Numero de Faltas       : [   ]",19);
        gotoxy(72,22);
        cin  >>faltas;

        /*PROCESSAMENTO/CALCULOS*/
        N1         = (nota1+nota2)/2;
        N2         = (nota3+nota3)/2;
        mediaFinal = (N1*0.4+N2*0.6);
        presenca   = (aulas - faltas);
        frequencia = (presenca*100)/aulas;

        /*SAIDAS*/
        gotoxy(30,23);
        cout << "O aluno " << nome<< " obteve media final de : "<< mediaFinal;
        gotoxy(30,24);
        cout << "Sua frequencia foi de: "<<frequencia<<"%";
        gotoxy(30,25);
        if (mediaFinal >= 7.5 && frequencia >= 75)
             cout << "O aluno foi aprovado.";
        else cout << "O aluno foi reprovado.";

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
auto estruturaCondicional7() -> void
{
    int menu = 1;
    while(menu == 1){
        menu = 0;
        string nome;
        char aK[11] = {'A','B','C','D','E','F','G','H','I','J','K'};
        char lN[3]  = {'L','M','N'};
        char oZ[9] = {'O','P','Q','R','S','T','X','Y','Z'};
        system("cls");

        cin.ignore();
        tela("SALA DE ACORDO COM O NOME");
        centralizar("Nome do Aluno(a): [                         ]",9);
        gotoxy(58,12);
        getline(cin, nome);
        gotoxy(40,20);
        for (int i = 0; i < 11; i++) {
            if (nome[0] == aK[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 100";
                break;
            }
            if (nome[0] == lN[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 110";
                break;
            }
            if (nome[0] == oZ[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 120";
                break;
            }

        }
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
auto estruturaCondicional8() -> void
{
    int menu = 1;
    while(menu == 1){
        menu =0;
        float resultado = 0, altura = 0;
        char sexo = 0;
        system("cls");
        tela("PESO IDEAL");
        centralizar("Altura:          [    ]",8);
        centralizar("Sexo [F] ou [M]: [ ]  ",10);
        gotoxy(67,11);
        cin  >> altura;
        gotoxy(67,13);
        cin  >> sexo;

        if(sexo == 'M'||sexo == 'm')
            resultado = 72.7*altura - 58;
        else if(sexo == 'F'||sexo == 'f')
            resultado = 62.1*altura - 44.7;
        gotoxy(43,15);
        cout <<"Peso Ideal: " << resultado <<" kg";
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
auto estruturaCondicionalMenu() -> void
{
    system("cls");
    bool menu = false;

    while(menu == false) {
        int selected = 0;
        tela("ESTRUTURA CONDICIONAL");

        centralizar("1-Ordenar 3 Numeros Inteiros           ",8);
        centralizar("2-Receber o nome da capital de Goias   ",9);
        centralizar("3-Calculadora                          ",10);
        centralizar("4-Calcular o Quadrado e a Raiz Quadrada",11);
        centralizar("5-Margem de consignacao                ",12);
        centralizar("6-Media Final e Frequencias            ",13);
        centralizar("7-Alunos Pelo Nome                     ",14);
        centralizar("8-Peso Ideal                           ",15);
        centralizar("9-Voltar ao Menu Principal             ",16);
        centralizar("Opcao: [ ]                            ",20);
        do{
            gotoxy(49,23);
            cin >> selected;
        }while (testeMenuOptions(selected, 9) == false);

        system("cls");

        switch (selected) {
            case 1:
                estruturaCondicional1();
                break;
            case 2:
                estruturaCondicional2();
                break;
            case 3:
                estruturaCondicional3();
                break;
            case 4:
                estruturaCondicional4();
                break;
            case 5:
                estruturaCondicional5();
                break;
            case 6:
                estruturaCondicional6();
                break;
            case 7:
                estruturaCondicional7();
                break;
            case 8:
                estruturaCondicional8();
                break;
            case 9:
                menuControl();
                break;

            default:
                cout << "Think";
        }
    }
}


