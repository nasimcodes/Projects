#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    //যাতে প্রতি বার আলাদা সংখ্যা গেস করে
    int no_of_guess=0;
    int user_score=0;
    int comp_score=0;
    //পরবর্তীতে বাড়ানো কমানো যায় 
    printf("Enter r for rock\n");
    printf("Enter p for paper\n");
    printf("Enter s for scissor\n");
    
    do{
    int comp=(rand()%3)+1;//১-৩ এর মধ্যে গেস করবে
    char user;
    printf("\nEnter: ");
    scanf(" %c",&user);
    
    if(user != 'r' && user != 'p' && user != 's'){
    printf("wrong input, try again...\n");
    continue;
    }
    
    if(user=='r')
    {
    printf("\nYou chose Rock.\n");
    }
    else if(user=='p'){
    printf("\nYou chose Paper.\n");
    }
    else if(user=='s')
    {
    printf("\nYou chose Scissor.\n");
    }
    
    if(comp==1)
    {
    printf("Computer chose Rock.\n");
    }
    else if(comp==2){
    printf("Computer chose Paper.\n");
    }
    else if(comp==3)
    {
    printf("Computer chose Scissor.\n");
    }
    if(
    (user=='r' && comp==1) ||
    (user=='p' && comp==2) ||
    (user=='s' && comp==3)
    )
    {
    printf("\nDRAW\n");
    }
    
    else if(
    (user=='r' && comp==3) ||
    (user=='p' && comp==1) ||
    (user=='s' && comp==2)
    )
    {
    printf("\nYou win\n");
    user_score++;
    }
    
    else{
    printf("\nComputer win\n");
    comp_score++;
    }
    
    no_of_guess++;
    }while(no_of_guess<5);
    //যাতে ৫বার চলে।
    printf("\n★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
    printf("\nFinal Result: \n");
    printf("Your score: %d \n",user_score);
    printf("computer score: %d \n",comp_score);
    if(user_score>comp_score)
    {
    printf("Congrats, You WIN...\n");
    }
    else if(user_score<comp_score)
    {
    printf("Oops,you lose..\n");
    }
    else if(user_score==comp_score)
    {
    printf("The match is DRAW..\n");
    }
    printf("\n★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
    return 0;
}