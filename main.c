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
        printf("Game running...and done");
        char message[20];
        printf("Wanna play again Y/N?"); 
        scanf(" %s", message);
        if(message[0] == 'N'){
            break;
        }       
    } 
    return 0; // japp
}