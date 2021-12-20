#include <stdio.h>

int main()
{
	int nOfTestCase, number;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--)
	{
		scanf("%d", &number);
	
		if(number / 10 <= 0)
		{
			printf("%d\n", number);
			continue;

		}

		int checker = 0;
		int ordinaryNumber = 9;
		int incrementRateDeterminer = 10;
		int incrementWith = 11;
		int tempNumber = 11;
	
		
		while(tempNumber <= number)
		{
			ordinaryNumber++;
			tempNumber += incrementWith;
			checker++;

			if(checker == 9)
			{
				checker = 0;
				incrementRateDeterminer *= 10;
				incrementWith += incrementRateDeterminer;
				tempNumber = incrementWith;
			}
		}
		printf("%d\n", ordinaryNumber);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1520/B
//time-complexity -> O(m * n)
