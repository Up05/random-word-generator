#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int yes = 2;
char *words;

float _rand(float _min){
    return (float) rand() / RAND_MAX + _min;
}

int main(){
    
    unsigned int wordCount;
    unsigned int wordLength;
    float punctChance;

    srand(time(NULL));

    printf("Enter amount of words: ");
    scanf("%u", &wordCount);

    printf("Enter average length of word: ");
    scanf("%u", &wordLength);
    
    printf("Enter chance of punctuation [0-1]: ");
    scanf("%f", &punctChance);

    int currentWordLength = (int) wordLength + (((rand() / RAND_MAX) * wordLength) - (wordLength / 2));


    bool dot = false;
    for(int i = 0; i <= wordCount; i ++){
        for(int j = 0; j <= currentWordLength; j ++){
            int charCode;
            if(i == 0 && j == 0 || dot)
                charCode = (int) floor(_rand(0) * 25 + 65);
            else
                charCode = (int) floor(_rand(0) * 25 + 97);
            printf("%c", (char) charCode);
            dot = false;
        }

        float cRand = _rand(0);
        if(cRand <= punctChance / 100 || i == wordCount){
            printf(". ");
            dot = true;
        } else if(cRand < punctChance)
            printf(", ");
         else 
            printf(" ");


    }
    // system("pause");

    return (0);
}



