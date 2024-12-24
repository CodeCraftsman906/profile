
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 void printChoice(int choice){
    switch(choice){
        case 0: printf("Stone"); break;
        case 1: printf("Paper"); break;
        case 2: printf("Scissors"); break;
    }
 }

 int main(){
    int userChoice , computerChoice;
    srand(time(0));
    printf("Welcome to the Stone-Paper-Scissors game\n");
    printf("Enter your choice: \n");
    printf("0 - Stone \n 1 - Paper \n 2 - Scissors");
    scanf("%d",&userChoice);
    
    int random =rand () %101;
    if (random<=33){
        computerChoice = 0;
    }
    else if (random<=66){
        computerChoice = 1;
    }
    else{
        computerChoice = 2;
    }

    printf("Your Choice: ");
    printChoice(userChoice);
    printf("\nComputer's Choice: ");
    printChoice(computerChoice);
    printf("\n");

    if (userChoice == computerChoice){
        printf("It's a Tie!!\n");
    }
    else if ((userChoice == 0 && computerChoice == 2)||
             (userChoice == 1 && computerChoice == 0)||
             (userChoice == 2 && computerChoice == 1)){
                printf("You Win !!\n");
             }
    else{
        printf("You Lose!!\n");
    }
    return 0;
 }
