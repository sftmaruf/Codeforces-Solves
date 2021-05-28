#include<stdio.h>
#include<string.h>
int main()
{
    char input[101];

    gets(input);

    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' || input[i] == 'Y'  )
        {}
        else
        {
            input[i] = tolower(input[i]);
            printf(".%c",input[i]);
        }

    }

}
