#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[1000];

    scanf("%s", &word);
    word[0] = toupper(word[0]);
    printf("%s", word);
    return 0;
}