#include <stdio.h>
#include "libcalc.h"
	
enum menu
{
	MENU_ADD = 1,
	MENU_SUB = 2,
	MENU_MUL = 3,
	MENU_DIV = 4
};

int main(void){
	int menu, a, b;
	
	while (1){
		printf("\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit\nSelect option: ");
		scanf("%d", &menu);
		
		if (menu == 5){
			return 0;
		}
		else{	
			printf("a = ");
			scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
				
			switch(menu){
			case MENU_ADD:
				add(a, b);
				break;
			case MENU_SUB:
				sub(a, b);
				break;			
			case MENU_MUL:	
				mul(a, b);					
				break;
			case MENU_DIV:	
				div(a, b);
				break;
			}
		}
	}
}		
