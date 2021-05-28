#include <stdio.h>

int main()
{
    long long argument;
    int reminder;
    scanf("%lld", &argument);

    reminder = argument % 2;
    argument % 2 == 0
        ? printf("%lld", argument / 2 + reminder)
        : printf("%lld", argument / -2 - reminder);
    ;
    return 0;
}

//time-complexity -> O(1)