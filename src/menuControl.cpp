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

void menuControl() {
    
    while (true) {
        int selected=0;
        
        system("clear");
        
        cout << "1-Estrutura Sequencial\n"
             << "2-Estrutura Condicional\n"
             << "3-Estrutura Repeticao\n"
             << "4-Vetores\n"
             << "\nDigite da categoria e aperte enter: ";
        
        cin  >> selected;
        
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
            default:
                break;
        }
        
    }
    
}
