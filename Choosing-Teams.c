#include <stdio.h>

int main(){
	int nOfStudents, leastParticipation, eligibleMembers = 0;
	scanf("%d %d", &nOfStudents, &leastParticipation);
	int nOfTimeParticipated[nOfStudents];
	for(int i = 0; i < nOfStudents; i++){
		scanf("%d", &nOfTimeParticipated[i]);
		nOfTimeParticipated[i] = 5 - nOfTimeParticipated[i];
		if(leastParticipation <= nOfTimeParticipated[i]){
			eligibleMembers++;	
		}
	}

	printf("%d", eligibleMembers/3);
	return 0;
}

//problem-link -> https://codeforces.com/problemset/problem/432/A 
//time-complexity -> 0(n)
