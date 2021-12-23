#include <stdio.h>

int main()
{
	int yakkoTurn, wakkoTurn, max, numerator, denominator = 6;
	scanf("%d %d", &yakkoTurn, &wakkoTurn);
	
	max = wakkoTurn;
	if(yakkoTurn > max) max = yakkoTurn;
	numerator = (6 - max) + 1;

	while(1)
	{
		if(numerator % 2 == 0 && denominator % 2 == 0)
		{
			numerator /= 2;
			denominator /= 2;
		}
		else if(numerator % 3 == 0 && denominator % 3 == 0)
		{
			numerator /= 3;
			denominator /= 3;
		}
		else if(numerator % 6 == 0 && denominator % 6 == 0)
		{
			numerator = denominator = 1;
	
		}
		else
		{
			break;
		}
	}
	printf("%d/%d\n", numerator, denominator);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/9/A
//time-complexity -> O(log n)
