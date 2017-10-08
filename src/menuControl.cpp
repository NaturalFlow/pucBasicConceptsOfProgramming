//
//  menuControl.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/19/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include "menuControl.hpp"
#include "sequencial.hpp"
#include "condicional.hpp"
#include <iostream>


using namespace std;

bool testeMenuOptions(int n,int tamanho) {
    if (n < 1 || n > tamanho) {
        cout << "Essa opção nao existe digite novamento: " ;
        return false;
    }
    else return true;
}


void menuControl() {
    system("clear");
    while (true) {
        int selected=0;
        
        cout << "\n  1-Estrutura Sequencial\n"
             << "  2-Estrutura Condicional\n"
             << "  3-Estrutura Repeticao\n"
             << "  4-Vetores\n"
             << "  5-Encerrar\n"
             << "\n  Opção: ";
        do{
        cin  >> selected;
        }while (testeMenuOptions(selected, 5) == false);
        
        system("clear");
        
        switch (selected) {
            case 1:
                estruturaSequencialMenu();
                break;
            case 2:
                estruturaCondicionalMenu();
                break;
            case 3:
                cout << "Em Progresso.Aguarde\n";
                break;
            case 4:
                cout << "Em progresso.Aguarde\n";
                break;
            case 5:
                return;
            default:
                break;
        }
        
    }
    
}





