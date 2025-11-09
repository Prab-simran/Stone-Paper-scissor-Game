#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<conio.h>
int main(){
    int Player_Score =0;
    int Computer_Score =0;
    int Player_Choice,Computer_Choice;

    printf("\n\n\n\t\t************* STONE,PAPER,SCISSOR GAME *************\n\n\n");
    printf("YOU WILL HAVE A FIVE ROUND GAME WITH THe COMPUTER,LETS START!!\n\n");
    printf("\tPress 1 for stone\n\tPress 2 for paper\n\tPress 3 for scissor\n");
    srand(time(NULL));              // to generate new randon numbers everytime
    for(int i=0;i<5;i++){
      printf("\nEnter Your Choice: ");
      scanf("%d",&Player_Choice);
      Computer_Choice =(rand()%3)+1;         //rand for generating random number between the range of 1 to 3
      
    if(Player_Choice==1) {
        if(Computer_Choice==1){
            printf("Player chose stone and computer chose stone\n");
            printf("Draw\n");
        }
        else if(Computer_Choice==2){
            printf("Player chose stone and computer chose paper\n");
            printf("Computer wins!\n");
            Computer_Score=Computer_Score+1;

        }else{
            printf("Player chose stone and computer chose scissor\n");
            printf("Player wins!\n");
            Player_Score=Player_Score+1;

        }
    }
      else if(Player_Choice==2){
      if(Computer_Choice==1){
            printf("Player chose paper and computer chose stone\n");
            printf("Player wins!\n");
            Player_Score=Player_Score+1;
        }
        else if(Computer_Choice==2){
            printf("Player chose paper and computer chose paper\n");
            printf("Draw\n");

        }
        else{
            printf("Player chose paper and computer chose scissor\n");
            printf("Computer wins!\n");
            Computer_Score=Computer_Score+1;
    
        }
    }
        else if(Player_Choice==3){
      if(Computer_Choice==1){
            printf("Player chose scissor and computer chose stone\n");
            printf("Computer wins!\n");
            Computer_Score=Computer_Score+1;
        }
        else if(Computer_Choice==2){
            printf("Player chose scissor and computer chose paper\n");
            printf("Player wins!\n");    
            Player_Score=Player_Score+1;

        }
        else{
            printf("Player chose scissor and computer chose scissors\n");
            printf("Draw\n");
        }   
    }   
    else
     {
        printf("Wrong answer\n");
    }   
printf("\n\tPlayer score: %d, Computer score : %d\n",
    Player_Score,Computer_Score);
 }    
     if (Computer_Score > Player_Score)
        printf("Computer wins %d to %d", Computer_Score, Player_Score);

    else if (Computer_Score < Player_Score)
        printf("Player wins %d to %d", Player_Score, Computer_Score);

    else if (Computer_Score == Player_Score)
        printf("No winner, it is a draw");

    printf("\n\t\tGAME OVER\nPress enter to quit");
    getchar();

    
    return 0;
}