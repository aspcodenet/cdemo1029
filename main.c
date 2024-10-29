#include <stdio.h>
#include <stdbool.h>
#include "inputhelpers.h"

//1. funktioner grunder
//1.5 Liv och död - scope/intro till pekare
//2. deklaration vs definition
//3. flera filer! .h + .c + Makefile

// DEKLARERA (lova att det kommer en funktion som heter showMenu)
void showMenu();

void addera(int c){
    int t = 123;
    //char whatever[10] = "blabla";
    c = c + 12;
    printf("%d\n", c);
}
void adderaAndModifyOriginal(int *c){ // i variablens c ligger en address
    int t = 123;
    //char whatever[10] = "blabla";
    *c = *c + 12;
    printf("%d\n", c);
}


/*
1. 11 23 11
2. 11 23 23
3. 11 11 11
*/ 
int main() { 
    int b = 99;
    int c = 11;
    char namn[15] = "Stefan";
    printf("%d\n", c); // 11
    adderaAndModifyOriginal(&c); // 1004
    printf("%d\n", c); // 23
 
    while(true){
        showMenu();
        int selection = getMenuInput(1,4);
        //int selection = getMenuInput(100,102);
 
        if(selection == 4){
            break;
        }       
    }  
    return 0; // japp
}


void showMenu(){ // DEFINITION av en funktion
    printf("1. Skapa ny player\n");
    printf("2. Uppdatera player\n");
    printf("3. Lista alla players\n");
    printf("4. Exit\n");
}

