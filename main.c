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
        printf("Spelet körs");
        char message[20];
        printf("Vill du fortsätta J/N?"); 
        scanf(" %s", message);
        if(message[0] == 'J'){
            break;
        }       
    } 
    return 0; // japp
}