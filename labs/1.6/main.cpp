/**
 * Done by:
 * Student Name: Volynets Natalia
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
using namespace std;

int main() {

//перша частина
{
    const char CONST1 = 'S';
     char chVar1;
    chVar1 = '6';
     char chVar2 = '?';

    const char CONST2 = 0x11;
     char chVar3;
    chVar3 = 0xf4;
     char chVar4 = 0x2c;
}

//друга частина
{
int nA;
float fltB;
unsigned short wC;

//Ініціювання змінних, що описанні в завданні
nA = 9742;
fltB = -3.54e3;
wC = 34033;

double dblD;
int nE;
char chF;

dblD = nA;
nE = fltB;
chF = wC;

//за допомогою явного приведення
dblD = (double)nA;
nE = (int)fltB;
chF = (char)wC;

//з обходом суворої типізації
double * pdblD;
void *pV;
pV = &nA;
pdblD = (double*)pV;
dblD = *pdblD;

int * pnE;
pV = &fltB;
pnE = (int*)pV;
nE = *pnE;

char * pchF;
pV = &wC;
pchF = (char*)pV;
chF = *pchF;

 std::cout << nE << std:: endl;
}
return 0;
}














