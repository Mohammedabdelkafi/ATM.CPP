#include <stdio.h>
#include <stdlib.h>

int SECRET_CODE = 1234;
int choice;

void clrscr() {
    system("@cls||clear");
}
int userRegister() {
    clrscr();
    printf("Registering user...\n");

    return 0;
}
int userLogin() {
    clrscr();
    printf("Logging in user...\n");
    return 0;
}
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
int main() {
    printf("ATM \n\n\n");                    
    AccMenu();
    return 0;
}
