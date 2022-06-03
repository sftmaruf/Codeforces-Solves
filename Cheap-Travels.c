#include <stdio.h>
#include <math.h>
 
int main()
{
	int plannedRide, specialRide, oneRidePrice, specialRidePrice, minimumCost = 0;
	scanf("%d %d %d %d", &plannedRide, &specialRide, &oneRidePrice, &specialRidePrice);
 
	if(specialRide >= plannedRide)
	{
		if(plannedRide * oneRidePrice < specialRidePrice)
		{
			minimumCost = plannedRide * oneRidePrice;
		}
		else
		{
			minimumCost = specialRidePrice;
		}
	}
	else
	{
		int specialRideTaken = plannedRide / specialRide;
		int rideLeft = plannedRide - (specialRideTaken * specialRide);
		minimumCost = (rideLeft * oneRidePrice) + (specialRideTaken * specialRidePrice);
 
		int onlyOneRideCost = plannedRide * oneRidePrice; 
		int onlySpecialCost = ceil(plannedRide/(double)specialRide) * specialRidePrice; 
		if(onlyOneRideCost < minimumCost)
		{
			minimumCost = onlyOneRideCost;
		}
		
		if(onlySpecialCost < minimumCost)
		{
			minimumCost = onlySpecialCost;
		}
	}
	printf("%d\n", minimumCost);
	return 0; 
}
