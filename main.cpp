#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

#include <windows.h>


float urand(){
    return (float) rand() / RAND_MAX;
}

char randChar(bool capital){
    int i = floor(urand() * 25 + 65);
    if(!capital){
        i += 33;
    }
    return i;
}

std::string randWord(int wordLen, bool punctuation, bool lastWord){
    std::string current;
    for(int i = 0; i < wordLen; i ++){
        current += randChar(false);
    }

    if(!lastWord){
        if(punctuation && urand() < 0.1){
            current += ".";
        } else if(punctuation && urand() < 0.2){
            current += ",";
        }
        
        current += " ";
    }
    return current;
}

int main(){

    srand(time(NULL));
    std::string output = "";
    
    for(int i = 0; i <= 100; i ++){
        bool lastWord = false;
        if(i == 100){lastWord = true;}
        output += randWord(floor(urand() * 15 + 4), true, lastWord);
    }

    output += ".";

    std::cout << output << std::endl;

    std::cout << "\n\nPress <Enter> to exit!";
    std::cin.ignore();
}

