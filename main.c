#include <stdio.h>
#include <stdbool.h>
#include "inputhelpers.h"

//1. funktioner grunder
//1.5 Liv och död - scope/intro till pekare
//2. deklaration vs definition
//3. flera filer! .h + .c + Makefile

// DEKLARERA (lova att det kommer en funktion som heter showMenu)
void showMenu();


int main() {  
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

