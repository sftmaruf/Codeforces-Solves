#include <stdio.h>

void solve(long long requiredDamage, long long nOfAttacks, long long *seconds)
{
	long long left = 1, right, optimizedDuration;
	optimizedDuration = right = requiredDamage;

	while(left < right)
	{
	      	long long acquiredDamage = 0, mid = (left + right) / 2;

		for(int i = 1; i < nOfAttacks; i++)
		{
			int poisonedDuration = seconds[i] - seconds[i - 1];
			acquiredDamage += poisonedDuration > mid ? mid : poisonedDuration;
		}	
		acquiredDamage += mid;

		if(acquiredDamage >= requiredDamage)
		{
			optimizedDuration = mid;
			right = mid;
		}	
		else
		{
			left = mid + 1;
		}
	}
	printf("%lld\n", optimizedDuration);
}

int main()
{
	int nOfTestCase;
	scanf("%d", &nOfTestCase);

	while(nOfTestCase--)
	{
		long long nOfAttacks, requiredDamage;
		scanf("%lld %lld", &nOfAttacks, &requiredDamage);

		long long seconds[nOfAttacks];
		for(int i = 0; i < nOfAttacks; i++)
		{
			scanf("%lld", &seconds[i]);
		}
		
		if(nOfAttacks > requiredDamage)
		{
			printf("1\n");
			continue;
		}

		solve(requiredDamage, nOfAttacks, seconds);
	}
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/1613/C
//time-complexity -> O(log n)
