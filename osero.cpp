#include<conio.h>
#include <stdio.h>
#include<stdlib.h>
#define FIELD_WIDTH 10
#define FIELD_HEIGHT 10

#define BLOCK_TYPE_MAX 3

int X, Y;//カーソル
int main() {
	while (1) {
		system("cls");
		for (int y = 0; y < FIELD_HEIGHT - 2; y++) {
			for (int x = 0; x < FIELD_WIDTH - 2; x++) {
				if ((y == Y) && (x == X))
					printf("〇");
				else if ((y == 3) && (x == 3))
					printf("●");
				else if ((y == 4) && (x == 4))
					printf("●");
				else if ((y == 3) && (x == 4))
					printf("〇");
				else if ((y == 4) && (x == 3))
					printf("〇");
				else
					printf("・");
			}
			printf("\n");
		}
		
		

		switch (_getch()) {
		case 'w':Y--; break;//上
		case 's':Y++; break;//下
		case 'a':X--; break;//左
		case 'd':X++; break;//右
		case '\n':printf("●"); break;
		}
		
	}
};


