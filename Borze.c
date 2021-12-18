#include <stdio.h>
#include <stdlib.h>

int main(){
	char letter, reserveLetter = '*';
	while(1)
	{
		scanf("%c", &letter);
		if(letter != '.' && letter != '-') break;

		if(letter == '.' && reserveLetter == '*')
		{
			printf("0");
		}
		else if(letter == '.' && reserveLetter == '-')
		{
			printf("1");
			reserveLetter = '*';
		}
		else if(letter == '-' && reserveLetter == '-')
		{
			printf("2");
			reserveLetter = '*';
		}
		else if(letter == '-' && reserveLetter == '*'){
			reserveLetter = '-';	
		}
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/32/B
//time-complexity -> O(n)
