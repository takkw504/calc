#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
//#include "division.h"
#include "subtraction.h"

int main(void){
	
	system("CHCP 1252");
    system("CLS");
	
	float a,b;
	
	char choice, x;
	
	while(1){
		
		printf("meny!");
		scanf("%c", &choice);
		
		char throw_away = getchar();
		
		switch(choice){
			case 'A': case 'a':{
				
				printf("Vill du forsätta?");
				scanf("%c", &x);
				
				getchar();
				
				if(x == 'j' || 'J'){
					printf("här!");
					continue;
				}
				else{
					exit(1);
				}
				continue;
			}
			case 'M': case 'm':{
				printf("dsfsdafdsa");
				continue;
			}
			case 'D': case 'd':{
				continue;
			}
			case 'S': case 's':{
				continue;
			}
			case 'E': case 'e':{
				exit(1);
			}
			default:{
				continue;
			}
		}
	break;
	}
	
	return 0;
}