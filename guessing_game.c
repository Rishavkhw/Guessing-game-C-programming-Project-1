#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess,num=0;
    srand(time(NULL));

    printf("Welcome to a Number Guessing Game\n");
    random=rand() % 100 + 1;     

    do{
        printf("\nEnter your guess number between(1 to 100):");
        scanf("%d",&guess);
        num++;

        if(guess<random){
            printf("Guess a larger number..\n");
        }
        else if(guess>random){
            printf("guess a smaller number..\n");
        }
        else{
            printf("\nCongratulations !!! You have succesfully guessed the correct number in %d attempts",num);
        }

    }while(guess != random);
    printf("\nThanks for playing..");
    printf("\nDeveloped by:Rishav khatiwada");
}
