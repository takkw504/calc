#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
//#include "division.h"
#include "subtraction.h"

int main(void){

	system("CHCP 1252");
    system("CLS");

	float a, b;

	char choice, x;

	while(1){

		printf("Kalkylator!\nVälj mellan A/M/D/S\nA. Addition\nM. Multiplikation\nD. Division\nS. Subtraktion\n");
		scanf("%c", &choice);

		char throw_away = getchar();

		switch(choice){
			case 'A': case 'a':{
				system("CLS");
				printf("\nAnge tal 1 du vill addera: ");
				scanf("%f", &a);
				getchar();
				printf("\nAnge tal 2 du vill addera: ");
				scanf("%f", &b);
				getchar();

				printf("\nSvar: %lf", add(a,b));

				printf("\nVill du forsätta?");
				scanf("%c", &x);

				getchar();

				if(x == 'j' || 'J'){
					system("CLS");
					continue;
				}
				else{
					exit(1);
				}
				continue;
			}
			case 'M': case 'm':{
				system("CLS");
				printf("\nAnge tal 1 du vill multiplicera: ");
				scanf("%f", &a);
				getchar();
				printf("\nAnge tal 2 du vill multiplicera: ");
				scanf("%f", &b);
				getchar();

				printf("\nSvar: %lf", mult(a,b));

				printf("\nVill du forsätta?");
				scanf("%c", &x);

				getchar();

				if(x == 'j' || 'J'){
					system("CLS");
					continue;
				}
				else{
					exit(1);
				}
				continue;
			}
			case 'D': case 'd':{
				system("CLS");
				printf("\nAnge tal 1 du vill dividera: ");
				scanf("%f", &a);
				getchar();
				printf("\nAnge tal 2 du vill dividera: ");
				scanf("%f", &b);
				getchar();

				printf("\nSvar: %lf", a/b);

				printf("\nVill du forsätta?");
				scanf("%c", &x);

				getchar();

				if(x == 'j' || 'J'){
					system("CLS");
					continue;
				}
				else{
					exit(1);
				}
				continue;
			}
			case 'S': case 's':{
				system("CLS");
				printf("\nAnge tal 1 du vill subtrahera: ");
				scanf("%f", &a);
				getchar();
				printf("\nAnge tal 2 du vill subtrahera: ");
				scanf("%f", &b);
				getchar();

				printf("\nSvar: %lf", sub(a,b));

				printf("\nVill du forsätta?");
				scanf("%c", &x);

				getchar();

				if(x == 'j' || 'J'){
					system("CLS");
					continue;
				}
				else{
					exit(1);
				}
				continue;
			}
			case 'E': case 'e':{
				exit(1);
			}
			default:{
				printf("Här kan du endast svara M/D/S/A, försök igen!");
				printf("pause");
				system("CLS");
				continue;
			}
		}
	break;
	}

	return 0;
}
