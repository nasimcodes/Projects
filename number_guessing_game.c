#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int randnum=(rand()%100)+1;
    int guessed;
    int no_of_guesses=0;
    printf("I chose a number within 1 to 100\n");
    printf("\nGuess the number: \n");
    do{
    scanf("%d",&guessed);
    if(guessed<randnum){
    printf("Guess higher number please\n");
    }
    else if(guessed>randnum){
    printf("Guess lower number please\n");
    }
    
    no_of_guesses++;
    
    }while(guessed!=randnum);
    
    printf("\n***********\n");
    printf("\nYes.. The number is %d\n",randnum);
    printf("You get the number in %d guesses.. \n",no_of_guesses);
    printf("\n***********\n");
    return 0;
}