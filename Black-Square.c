#include <stdio.h>

int main(){
	int calories[4], sumOfCalories = 0;

	for(int i = 0; i < 4; i++){
		scanf("%d", &calories[i]);
	}
	getchar();
	char c;
	while(1){
		scanf("%c", &c);
		if(c == '1') 
		{
			sumOfCalories += calories[0];
		}
		else if(c == '2')
		{
			sumOfCalories += calories[1];
		}
		else if(c == '3')
		{
			sumOfCalories += calories[2];
		}
		else if(c == '4')
		{
			sumOfCalories += calories[3];
		}
		else
		{
			break;
		}
	}

	printf("%d", sumOfCalories);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/431/A
//time-complexity -> O(n)
