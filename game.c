#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int number, guess , attempt=1;
	srand(time(0));
	number=rand()%100+1;
	do{
		printf("Guess the number between 1 to 100\n");
		scanf("%d" , &guess);
		if(number>guess){
		printf("please enter a higher number\n");
		}
		else if(number<guess){
			printf("please enter a lower number\n");
			}
			else{
				printf(" you guessed it in %d attempts\n", attempt);
				}
				attempt++;
		}while(number!=guess);
	return 0;
	}