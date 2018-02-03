//
//  menuControl.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/19/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//
#include "tela.h"
#include "menuControl.hpp"
#include "sequencial.hpp"
#include "condicional.hpp"
#include "repeticao.h"
#include "vetorial.h"
#include <iostream>


using namespace std;

auto testeMenuOptions(const int &n,const int &tamanho) -> bool
{
    if (n < 1 || n > tamanho) {
        mensagemDeErro("Essa opção nao existe digite novamente");
        return false;
    }
    else return true;
}


auto menuControl() -> void
{
    system("cls");
    while (true) {
        int selected=0;
        tela("MENU PRINCIPAL");
        centralizar("1-Estrutura Sequencial ",8);
        centralizar("2-Estrutura Condicional",10);
        centralizar("3-Estrutura Repeticao  ",12);
        centralizar("4-Vetores              ",14);
        centralizar("5-Encerrar             ",16);
        centralizar("Opção: [ ]",18);
        do{
        gotoxy(64,21);
        cin  >> selected;
        }while (testeMenuOptions(selected, 5) == false);

        system("cls");

        switch (selected) {
            case 1:
                estruturaSequencialMenu();
                break;
            case 2:
                estruturaCondicionalMenu();
                break;
            case 3:
                estruturaRepeticaoMenu();
                break;
            case 4:
                estruturaVetorialMenu();
                break;
            case 5:
                break;
            default:
                break;
        }

    }

}





