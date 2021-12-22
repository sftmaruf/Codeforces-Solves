#include <stdio.h>

int main()
{
	int nOfTestCase, width, length;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--)
	{
		scanf("%d %d", &width, &length);
		
		int area = width * length;
		if(width % 2 != 0 && length % 2 != 0)
		{
			printf("%d\n", (area + 1) / 2);
		}
		else
		{
			printf("%d\n", area / 2);
		}

	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1358/A
//time-complexity -> O(n)
