#include <stdio.h>
#include <string.h>

// Function to check if the word is similar to "zoo"
void check_zoo_similarity(char word[]) {
    int z_count = 0, o_count = 0;
    
    // Count the number of 'Z's and 'O's
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'Z' || word[i] == 'z') {
            z_count++;
        } else if (word[i] == 'O' || word[i] == 'o') {
            o_count++;
        }
    }

    // Check if the word is similar to "zoo"
    if (o_count == 2 * z_count) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    char word[100];
    
    printf("Enter a word: ");
    scanf("%s", word);

    check_zoo_similarity(word);

    return 0;
}



