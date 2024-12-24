
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char word[] ="feminine";
    char guessed[9] ="_________";
    int chances = 3;
    char guess;

    printf("Welcome to hangman!!\n");

    while(chances>0){
        printf("Word : %s\n" , guessed);
        printf("Enter your guess: ");
        scanf("%c",&guess);
        guess = tolower(guess);
        
        int correctGuess = 0;
        for(int i = 0; i < strlen(word);i++){
            if (word[i] == guess){
            guessed[i] = guess;
            correctGuess = 1;
            }
        if (!correctGuess){}
            printf("You have %d chances left.\n",chances);
            if(strcmp(word,guessed) == 0){
                printf("Congratulations you have guessed the word: %s\n", word);
                return 0;
            }
        }
    }

    printf("Game Over! The word was '%s'.\n", word);
    return 0;
}
