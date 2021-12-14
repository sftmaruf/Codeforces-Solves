#include <stdio.h>

int main()
{
	int rows, columns, isColor = 0;
       	char color;
	
	scanf("%d %d", &rows, &columns);

	for(int i = 0; i < rows * columns; i++)
	{
		getchar();
		scanf("%c", &color);
		if(color != 'W' && color != 'B' && color != 'G') isColor = 1;	
	}

	isColor == 1 ? printf("#Color\n") : printf("#Black&White\n");
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/707/A
//time-complexity -> O(n)
