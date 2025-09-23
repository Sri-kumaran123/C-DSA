#include <stdio.h>

enum TrafficLight {
	RED,
	YELLOW,
	GREEN
};

int main() {
	enum TrafficLight light;
	printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN) \t");
	scanf("%d", (int*)&light);
	
//	printf("enum values %d, %c, %f \n",RED, YELLOW, GREEN);
	switch(light) {
		case RED:
			printf("Stop! \n");
			break;
		case YELLOW:
			printf("Get Ready! \n");
			break;
		case GREEN:
			printf("Go! \n");
			break;
		default:
			printf("Invalid input! \n");
	}
	return 0;
}
