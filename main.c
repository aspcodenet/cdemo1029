#include <stdio.h>
#include <stdbool.h>

//1. funktioner grunder
//1.5 Liv och död - scope/intro till pekare
//2. deklaration vs definition
//3. flera filer! .h + .c + Makefile
//4. Stefans safeinput - använd!
//    https://github.com/aspcodenet/ccode2
//5. funktionspekare???

int main() {  
    while(true){
        printf("1. Skapa ny player\n");
        printf("2. Uppdatera player\n");
        printf("3. Lista alla players\n");
        printf("4. Exit\n");
        printf("Vad vill du göra?");
        int selection;
        scanf(" %d", &selection);
        if(selection == 4){
            break;
        }       
    } 
    return 0; // japp
}