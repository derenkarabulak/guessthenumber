#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	srand(time(NULL));
	int random = rand()%1000;
	int guess;
	
	x:printf ("Can you guess the number between 0 and 100 ?\n");
	scanf ("%d", &guess);
	
	if (guess == random){
		printf ("You guessed right !\n");
		printf ("Correct answer %d", random);
				
	}else if (guess < random){
		printf("Too low.\nTry again.\n");
		goto x;
		
	}else if (guess > random ){
		printf ("Too high\n");
		goto x;
	}
}
