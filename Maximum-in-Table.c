#include <stdio.h>

int main()
{
	int numberOfRowsColumns, max = 1;
	scanf("%d", &numberOfRowsColumns);

	int table[numberOfRowsColumns][numberOfRowsColumns];

	for(int i = 0; i < numberOfRowsColumns; i++)
	{
		for(int j = 0; j < numberOfRowsColumns; j++)
		{
			if(j == 0 || i == 0)
			{
				table[i][j] = 1;
				continue;
			}

			table[i][j] = table[i - 1][j] + table[i][j -1];
			if(table[i][j] > max) max = table[i][j];
		}
	}

	printf("%d\n", numberOfRowsColumns);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/509/A
//time-complexity -> O(n ^ 2)
