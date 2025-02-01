#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess;
    int no_guess=0;
    srand(time(NULL));
    printf(" \n WELCOME TO the number gusssing game\n");
    random = rand() % 100 + 1;//Generating number between (1 to 100) 
    do{
        printf("\nguess the number between (1 to 100)\n\t\t");
        scanf("%d",&guess);
        no_guess++;
        if(guess < random){
            printf("enter a bigger number. \n");
        }else if(guess > random){
            printf("tenter a smaller number. \n");
        }else {
            printf("\tfinally got it \n!!! you finally guessed the number in %d attempts!!!", no_guess);
        }
    }while( guess !=random);
    printf("\n\t thanks for playing");
    printf("\n\tMade By Soumyadip Singha");
}