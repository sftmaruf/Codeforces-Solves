#include <stdio.h>
#include <string.h>

int main(){
    char firstNumber[101], secondNumber[101];

    scanf("%s %s", &firstNumber, &secondNumber);
    for (int i = 0; i < strlen(firstNumber); i++)
    {
        if(firstNumber[i] != secondNumber[i]){
            firstNumber[i] = '1';
        }else if(firstNumber[i] == '1' && secondNumber[i] == '1'){
            firstNumber[i] = '0';
        }
    }
    printf("%s", firstNumber);
    return 0;
}

//time-complecity -> O(n)