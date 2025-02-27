#include <stdio.h>
#include <stdlib.h>
int SECRET_CODE;
int CHOICE;
int NEW_CODE;
void clrscr() {
    system("@cls||clear");
}
int userRegister() {
    clrscr();
    printf("Enter New Code: ");
    scanf("%d", &SECRET_CODE);
    return 0;
}

int userLogin() {
    clrscr();
    printf("Log in \n");
    scanf("%d", &SECRET_CODE);
    return 0;
}
int AccMenu() {
    while (1) {
        printf("\n");
        printf("1) Register \n");
        printf("2) Login \n");
        printf("3) exit \n");
        printf(" \n");
        printf("====>");
        scanf("%d", &CHOICE);
        switch (CHOICE) {
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
                break;
        }
    }
}
int main() {
    printf("ATM \n\n\n");                    
    AccMenu();
    return 0;
}
