#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char UserInput[256];

// Find area of the floor
int AreaOfFloor(int length_floor, int width_floor) 
{

	printf("Please input the Length of the floor: \n");
	if (fgets(UserInput, sizeof(UserInput), stdin)) {
		if (1 == sscanf(UserInput, "%d\n", &length_floor)) {
		}
	}

	printf("Please input the width of the floor: \n");
	if (fgets(UserInput, sizeof(UserInput) , stdin)) {
		if (1 == sscanf(UserInput, "%d\n", &width_floor)) {
		}
	}

	//calculate the area of the floor

		return length_floor * width_floor;

}

//Cost per tile	
int CostPerTile(int cost_per_unit)
{

	//Input for cost per tile
	printf("Please input the cost per tile: \n");
	if (fgets(UserInput, sizeof(UserInput), stdin)) {
		if (1 == sscanf(UserInput, "%d\n", &cost_per_unit)) {
		}
	}

	return cost_per_unit;

}




int main(int argc, char *argv[])
{

	int length_floor;
	int width_floor;
	int cost_per_unit;
	int CostOfFloor;


	// calcualte the cost of the floor
	int Area_of_floor = AreaOfFloor(length_floor, width_floor);  
	int Cost_per_Tile = CostPerTile(cost_per_unit);

	CostOfFloor = Area_of_floor * Cost_per_Tile;
	
	//display cost of the floor
	printf("The Cost of The Floor is :  $%d\n", CostOfFloor);
		
	return 0;
}

