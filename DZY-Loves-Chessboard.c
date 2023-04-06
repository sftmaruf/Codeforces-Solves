#include <stdio.h>

int main()
{
	int row, column;
	scanf("%d %d\n", &row, &column);
	int totalCells = row * column;
	char board[totalCells];
	
	int cursor = 0;
	for(int i = 0; i < row; i++)
	{
		char temp[column + 1];
		scanf("%s", &temp);
		for(int j = 0; j < column; j++)
		{
			board[cursor] = temp[j];
			cursor++;
		}
	}

	int currentRow = 1;
	for(int i = 0; i < totalCells; i++)
	{
		if(board[i] != '-')
		{
			int currentColumn = i >= column 
				? i - column * (currentRow - 1) 
				: i;

			board[i] = !(currentRow % 2)
				? !(currentColumn % 2) ? 'W' : 'B'
				: !(currentColumn % 2) ? 'B' : 'W';
		}
		
		printf("%c", board[i]);
		if((i+1)/currentRow == column)
		{
			printf("\n");
			currentRow++;
		}
	}

	return 0;
}

// problem-link -> https://codeforces.com/problemset/problem/445/A   
// time-complexity -> O(n) 
