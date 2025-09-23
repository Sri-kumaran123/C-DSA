#include <stdio.h>
#include <string.h>

struct Vehicle {
    char plate[20];
    char type;      // 'C'=Car, 'B'=Bus, 'T'=Truck
    char fuel;      // 'P'=Petrol, 'D'=Diesel, 'E'=Electric
    float weight;   // in tons
    int isVIP;      // 1=VIP, 0=Regular
};

int main() {
    struct Vehicle v;
    float toll = 0;

    // Input vehicle details
    printf("Enter vehicle plate number: ");
    scanf("%s", v.plate);

    printf("Enter vehicle type (C=Car, B=Bus, T=Truck): ");
    scanf(" %c", &v.type);

    printf("Enter fuel type (P=Petrol, D=Diesel, E=Electric): ");
    scanf(" %c", &v.fuel);

    printf("Enter vehicle weight (tons): ");
    scanf("%f", &v.weight);

    printf("Is VIP vehicle? (1=Yes, 0=No): ");
    scanf("%d", &v.isVIP);

    // Validate input
    if(v.weight <= 0)
        printf("Invalid vehicle weight!\n");
    else {
        // Nested switch: vehicle type
        switch(v.type) {
            case 'C':
            case 'c':
                toll = 50;
                switch(v.fuel) { // nested switch: fuel type
                    case 'P': case 'p': toll += 10; break;
                    case 'D': case 'd': toll += 5; break;
                    case 'E': case 'e': toll -= 10; break; // discount for electric
                    default: printf("Invalid fuel type!\n"); return 0;
                }
                break;

            case 'B':
            case 'b':
                toll = 100;
                if(v.weight > 5) toll += 50; // extra for heavy bus
                switch(v.fuel) {
                    case 'P': case 'p': toll += 20; break;
                    case 'D': case 'd': toll += 10; break;
                    case 'E': case 'e': toll -= 20; break;
                    default: printf("Invalid fuel type!\n"); return 0;
                }
                break;

            case 'T':
            case 't':
                toll = 150;
                if(v.weight > 10) toll += 100; // extra for heavy truck
                switch(v.fuel) {
                    case 'P': case 'p': toll += 30; break;
                    case 'D': case 'd': toll += 20; break;
                    case 'E': case 'e': toll -= 30; break;
                    default: printf("Invalid fuel type!\n"); return 0;
                }
                break;

            default:
                printf("Invalid vehicle type!\n"); 
                return 0;
        }

        // Nested if-else for VIP discount and warnings
        if(v.isVIP == 1) {
            toll *= 0.7; // 30% discount
            if(toll < 50) printf("VIP vehicle: Minimum toll applied.\n");
        } else if(toll > 200) {
            printf("Warning: High toll charge for heavy vehicle!\n");
        }

        // Final report
        printf("\n--- Toll Summary ---\n");
        printf("Vehicle Plate: %s\n", v.plate);
        printf("Vehicle Type: %c\nFuel Type: %c\nWeight: %.2f tons\n", v.type, v.fuel, v.weight);
        if(v.isVIP) printf("VIP: Yes\n"); else printf("VIP: No\n");
        printf("Total Toll: $%.2f\n", toll);
        printf("-------------------\n");
    }

    return 0;
}

