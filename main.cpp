#include <iostream>
#include "menuControl.hpp"
#include "tela.h"
#include <iomanip>

using namespace std;

int main()
{
    tela("PUC - PONTIFICIA UNIVERSIDADE CATOLICA");
    centralizar("PROJETO AVALIACAO 2017/2 ",10);
    centralizar("PROF.: ANIBAL VICENTE    ",12);
    centralizar("ALUNO: LUCAS B.BRITO     ",14);
    centralizar("ALUNO: DANICKSON NAVES   ",16);

    gotoxy(16,33);
    system("pause");
    menuControl();
}

