#include <stdio.h>
#include <stdlib.h>

// Global variables
int SECRET_CODE = 1234; // Example secret code
int choice;

// Function to clear the screen
void clrscr() {
    system("@cls||clear");
}

// Function to register a user
int userRegister() {
    clrscr();
    printf("Registering user...\n");
    // Implement registration logic here
    return 0;
}

// Function to login a user
int userLogin() {
    clrscr();
    printf("Logging in user...\n");
    // Implement login logic here
    return 0;
}

// Function to display account menu
int AccMenu() {
    while (1) {
        printf(" %d \n", SECRET_CODE);
        printf("\n");
        printf("1) Register \n");
        printf("2) Login \n");
        printf("3) exit \n");
        printf(" \n");
        printf("====>");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                userRegister();
                break;
            case 2:
                userLogin();
                break;
            case 3:
                return 0;
            default:
                clrscr();
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Main function
int main() {
    printf("ATM \n\n\n");                    
    AccMenu(); // Call the account menu
    return 0;
}
