#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    //charset di 76 caratteri
    char charset[] = 
    "ABCDEFGHIKLMNOPQRSTUVWXYZ1234567891011121314151617181920é*§/&$£!&-_,"  

    ;char *Password;
    ;int lenght;

    ;printf("Lunghezza Password: ")
    ;scanf("%d", &lenght);

    //Genera lo spazio in memoria per la psw
    Password = (char *)calloc(lenght, sizeof(char));

    //Inizalizzazione seme
    srand((unsigned)time(NULL));




    for (int i = 0; i < lenght; i++) {
        Password[i] = charset[rand() % 76];
    }

    //stampa la psw
    printf("\n La password generata è: \n");
    printf("\n %s \n", Password);



    return 0;
}