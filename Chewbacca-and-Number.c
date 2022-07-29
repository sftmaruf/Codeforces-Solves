#include <stdio.h>

int main()
{
	long long number;
	scanf("%lld", &number);

	long long output = 0L, multiplier = 1L;
	while(number > 0)
	{
		int specificNumber = number % 10;
		int revert = 9 - specificNumber;
	
		if(revert < specificNumber && !(number/10 <= 0 && revert <= 0)) output += (multiplier * revert);
		else output += (multiplier * specificNumber);
		
		number /= 10;
		multiplier *= 10;
	}
	printf("%lld", output);
	return 0;
}

// problem-link -> https://codeforces.com/problemset/problem/514/A
// time-complexity -> O(n)
