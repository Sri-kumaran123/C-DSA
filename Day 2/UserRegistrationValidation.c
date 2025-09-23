#include <stdio.h>
#include <string.h>

int main() {
	char username[20], email[30];
    int age;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter email: ");
    scanf("%s", email);

    printf("Enter age: ");
    scanf("%d", &age);

	if (strlen(username) == 0) return printf("Error: Username is required\n"), 0;
    if (strlen(email) == 0) return printf("Error: Email is required\n"), 0;
    if (age <= 0) return printf("Error: Invalid age\n"), 0;

    if (strchr(email, '@') == NULL) return printf("Error: Invalid email format\n"), 0;
    if (strlen(username) < 3) return printf("Error: Username too short\n"), 0;
    if (age < 18) return printf("Error: Must be at least 18 years old\n"), 0;

    // Success
    printf("Registration successful!\n");
    return 0;

}
