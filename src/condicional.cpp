//
//  condicional.cpp
//  Projeto Avaliacao part1 condi,sequencial
//
//  Created by Lucas Brito on 9/19/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include "condicional.hpp"
#include <iostream>
#include <string>
#include "sequencial.hpp"
#include "menuControl.hpp"



using namespace std;

void estruturaCondicional1() {
    

    int menu = 1;
    while(menu == 1){
        menu =0;
        
        system("clear");
        
        int nums[3] = {};
        float input;
        
        cout << "Digite 3 numeros inteiros:\n";
        for(int i = 0; i < 3; i++) {
            while(true) {
                cout << "Numero " << i+1 << ": ";
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
        
        if (nums[0] <= nums[1] && nums[1] <= nums[2])
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[0] << ',' << nums[1] << ',' << nums[2] << "]\n";
        
        else if (nums[0] <= nums[2] && nums[2] <= nums[1])
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[0] << ',' << nums[2] << ',' << nums[1] << "]\n";
        
        else if (nums[1] <= nums[0] && nums[0] <= nums[2])
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[1] << ',' << nums[0] << ',' << nums[2] << "]\n";
        
        else if (nums[1] <= nums[0] && nums[2] <= nums[0])
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[1] << ',' << nums[2] << ',' << nums[0] << "]\n";
        
        else if (nums[2] <= nums[0] && nums[0] <= nums[1])
            cout << "Segue-se os numeros em ordem crescente:["
                 << nums[2] << ',' << nums[0] << ',' << nums[1] << "]\n";
        
        else cout << "Segue-se os numeros em ordem crescente:["
                  << nums[2] << ',' << nums[1] << ',' << nums[0] << "]\n\n";

        
        
        

        system("clear");
 
        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional2() {
    int menu = 1;
    while(menu == 1){
        menu =0;
        /*VARIAVEIS*/
        string capital;
        
        /*ENTRADAS*/
        cout << "Digite o nome da capital de Goias: \n";
        getline(cin,capital);
        
        system("clear");

        /*SAIDAS*/
        if (capital == "Goiania" || capital == "GOIANIA")
            cout << "Resposta correta \n";
        else cout << "Resposta Incorreta\n";
        
        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional3() {
    int menu = 1;
    while(menu == 1){
        menu = 0;
        system("clear");
        
        float num1,num2;
        char operador;
        
        cout << "Calculadora 4 opera;oes basicas:(+-*/)\n"
             << "Informe os dados no formato num1 operador num2\n";
        cin  >> num1 >> operador >> num2 ;
        
        switch (operador) {
            case '+':
                cout << "resultado da soma:" << num1 + num2;
                break;
            case '-':
                cout << "resultado da diferen;a: " << num1 - num2;
                break;
            case '*':
                cout << "resultado do produto: " << num1 * num2;
                break;
            case '/':
                cout << "resultado do quociente: " << num1 / num2;
                break;
            default:
                break;
        }

        cout << '\n'
             << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional4() {
    int menu = 1;
    while(menu == 1){
        menu =0;
        
        //Variaveis
        int diasAtraso;
        float valorConta, multa, jurosTotal, totalPagar;
        
        //Entradas
        cout << "Informe o valor da conta R$: ";
        cin  >>valorConta;
        cout << "Informe os dias de atraso..: ";
        cin  >>diasAtraso;
        
        //Processamento
        jurosTotal = (diasAtraso/30)+valorConta*0.09;
        multa      = valorConta*0.05;
        totalPagar = valorConta+multa+jurosTotal;
        
        //Saidas
        cout.precision(2);
        cout <<  fixed
        << "Dias de atraso..: " << int(diasAtraso)
        << "\nValor da Conta..: R$ " << valorConta
        << "\nTotal da Multa .: R$ " << multa
        << "\nJuros Total.....: R$ " << jurosTotal
        << "\nPreÁo final R$..: R$ " << totalPagar <<"\n";
        
        
        cout << '\n'
        << "1-Repetir o exercicios.\n"
        << "2-Voltar ao menu anterior.\n"
        << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional5() {
    int menu = 1;
    while(menu == 1){
        menu =0;
        system("clear");
        
        float salario,valorDoEmprestimo,qtdeParcelas,valorDasParcelas = 0.0;
        
        cout << "Salario do empregado..: ";
        cin  >> salario;
        cout << "Valor do emprestimo...: ";
        cin  >> valorDoEmprestimo;
        cout << "Quantidade de Parcelas: ";
        cin  >> qtdeParcelas;
        
        valorDasParcelas= valorDoEmprestimo/qtdeParcelas;
        
        cout << "\nValor das parcelas: " << valorDasParcelas;
        
        if (valorDasParcelas > (salario*0.3))
             cout << "\nO Emprestimo nao pode ser concedido pois o valor das parcelas sao maiores que 30% do salario do empregado.\n";
        else cout << "\n O Emprestimo pode ser concedido.Salario do empregado pode manter o valor das parcelas.\n";
            
        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional6() {
    int menu = 1;
    while(menu == 1){
        menu =0;
        
        /*VARIAVEIS*/
        string nome;
        float nota1, nota2, nota3, nota4;
        float N1, N2, mediaFinal, frequencia;
        int aulas, faltas, presenca;
        
        /*ENTRADAS*/
        
        cout << "Informe o Nome do Aluno: \n";
        getline(cin,nome);
        cout << "informe a primeira nota do aluno   : \n";
        cin  >>nota1;
        cout << "informe a segunda nota do aluno    : \n";
        cin  >>nota2;
        cout << "informe a terceira nota do aluno   : \n";
        cin  >>nota3;
        cout << "informe a quarta nota do aluno     : \n";
        cin  >>nota4;
        cout << "informe o numero de aulas dadas    : \n";
        cin  >>aulas;
        cout << "informe o numero de faltas do aluno: \n";
        cin  >>faltas;
        
        system("clear");
        /*PROCESSAMENTO/CALCULOS*/
        N1         = (nota1+nota2)/2;
        N2         = (nota3+nota3)/2;
        mediaFinal = (N1*0.4+N2*0.6);
        presenca   = (aulas - faltas);
        frequencia = (presenca*100)/aulas;
        
        /*SAIDAS*/
        cout <<"O aluno " << nome<< " obteve media final de : "<< mediaFinal <<"\n";
        cout <<"Sua frequencia foi de: "<<frequencia<<"%\n";
        
        if (mediaFinal >= 7.5 && frequencia >= 75)
             cout << "O aluno foi aprovado. \n\n";
        else cout << "O aluno foi reprovado.\n\n";
        
        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional7() {
    int menu = 1;
    while(menu == 1){
        menu = 0;
        string nome;
        char aK[11] = {'A','B','C','D','E','F','G','H','I','J','K'};
        char lN[3]  = {'L','M','N'};
        char oZ[9] = {'O','P','Q','R','S','T','X','Y','Z'};
        
        cin.ignore();
        cout << "Nome do Aluno(a): ";
        getline(cin, nome);
        
        
        
        for (int i = 0; i < 11; i++) {
            if (nome[0] == aK[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 100\n";
                break;
            }
            if (nome[0] == lN[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 110\n";
                break;
            }
            if (nome[0] == oZ[i]){
                cout << "Aluno(a) " << nome << " esta alocado na sala 120\n";
                break;
            }

        }

        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicional8() {
    int menu = 1;
    while(menu == 1){
        menu =0;
        float resultado = 0, altura = 0;
        char sexo = 0;
        
        cout << " Digite sua altura: \n";
        cin  >> altura;
        cout << " Digite seu sexo [F] para feminino ou [M] para masculino: \n";
        cin  >> sexo;
        
        if(sexo == 'M'||sexo == 'M')
            resultado = 72.7*altura - 58;
        else if(sexo == 'F'||sexo == 'f')
            resultado = 62.1*altura - 44.7;
        
        system("clear");
        
        cout <<" O seu peso ideal e : " << resultado <<"kg\n\n";
        
        cout << "1-Repetir o exercicios.\n"
             << "2-Voltar ao menu anterior.\n"
             << "3-Voltar ao menu principal.\n";
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
void estruturaCondicionalMenu() {
    system("clear");
    bool menu = false;
    
    while(menu == false) {
        int selected = 0;
        
        cout << "  1 – Ordenar 3 Numeros Inteiros\n"
        << "  2 – Receber o nome da capital de Goias\n"
        << "  3 – Calculadora\n"
        << "  4 - Calcular o Quadrado e a Raiz Quadrada\n"
        << "  5 – Margem de consignaçao\n"
        << "  6 – Media Final e Frequencias\n"
        << "  7 - Alunos Pelo Nome\n"
        << "  8 – Peso Ideal\n"
        << "  9 – Voltar ao Menu Principal\n\n"
        << " Opção: ";
        do{
            cin >> selected;
        }while (testeMenuOptions(selected, 9) == false);
        
        system("clear");
        
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


