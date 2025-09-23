#include <stdio.h>

struct Vehicle {
	char plate[15];
	char type;
	char hoursParked;
	int isVIP;
};

int main() {
	struct Vehicle v;
	
	printf("Enter vehicle plate number: ");
    scanf("%s", v.plate);

    printf("Enter vehicle type (C=Car, B=Bike, T=Truck): ");
    scanf(" %c", &v.type);

    printf("Enter hours parked: ");
    scanf("%d", &v.hoursParked);

    printf("Is it a VIP vehicle? (1=Yes, 0=No): ");
    scanf("%d", &v.isVIP);
    
    // Base fee calculation
    float fee = 0;
    
    if(v.hoursParked <= 0) {
        printf("Invalid parking duration!\n");
        return 0;
    }
    
    if(v.type == 'C' || v.type == 'c') {
        if(v.hoursParked <= 2) fee = 20;
        else fee = 20 + (v.hoursParked - 2) * 10;
    } 
    else if(v.type == 'B' || v.type == 'b') {
        if(v.hoursParked <= 2) fee = 10;
        else fee = 10 + (v.hoursParked - 2) * 5;
    } 
    else if(v.type == 'T' || v.type == 't') {
        if(v.hoursParked <= 2) fee = 50;
        else fee = 50 + (v.hoursParked - 2) * 25;
    } 
    else {
        printf("Invalid vehicle type!\n");
        return 0;
    }

    // VIP discount
    if(v.isVIP == 1) fee *= 0.8;
    
     // Display report
    printf("\n--- Parking Summary ---\n");
    printf("Vehicle Plate: %s\nType: %c\nHours Parked: %d\n", v.plate, v.type, v.hoursParked);
    if(v.isVIP) printf("VIP: Yes\n"); else printf("VIP: No\n");
    printf("Total Fee: %.2f\n", fee);
    printf("----------------------\n");

    return 0;


}
