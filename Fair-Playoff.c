#include <stdio.h>
#define max(a, b) { a < b ? b : a }

int main()
{
	int nOfTestCase, skills[4], firstHighestSkilledPlayer, secondHighestSkilledPlayer;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--)
	{
		firstHighestSkilledPlayer = secondHighestSkilledPlayer = 0;
		for(int i = 0; i < 4; i++)
		{
			scanf("%d", &skills[i]);
			if(skills[i] > firstHighestSkilledPlayer) firstHighestSkilledPlayer = skills[i];
		}

		for(int i = 0; i < 4; i++)
		{
			if(firstHighestSkilledPlayer > skills[i] && secondHighestSkilledPlayer < skills[i])
			{
				secondHighestSkilledPlayer = skills[i];	
			}
		}
	
		int firstFinalist = max(skills[0], skills[1]);
		int secondFinalist = max(skills[2], skills[3]);

		if((firstFinalist == firstHighestSkilledPlayer || firstFinalist == secondHighestSkilledPlayer)
			&& (secondFinalist == firstHighestSkilledPlayer || secondFinalist == secondHighestSkilledPlayer))
		{
			printf("YES\n");
			continue;
		}
		printf("NO\n");
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1535/A
//time-complexity -> O(n)
