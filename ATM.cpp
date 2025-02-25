#include <stdio.h>
#include <stdlib.h>
int SECRET_CODE;
int choice;

void clrscr()
{
    system("@cls||clear");
}
int userRegister() {
	clrscr();
	
}
int userLogin() {
	clrscr();
	
}

int main() {
	printf("ATM \n");
    printf("\n");
	printf("\n");                    
    printf("1) Register \n");
    printf("2) Login \n");
    printf("3) exit \n");
    printf(" \n");
    printf("====>");
    scanf("%d", &choice);
}
int AccMenu() {
	printf(" %d \n", SECRET_CODE);
	printf("\n");
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
	}
}
