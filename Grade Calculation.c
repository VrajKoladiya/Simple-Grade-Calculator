#include<stdio.h>

main()
{
	int score;
	
	printf("Enter your score = ");
	scanf("%d", &score);
	
	(score<=100 && score>=81)?printf("Your grade is A")
		:(score<=80 && score>=61)?printf("Your grade is B")
		:(score<=60 && score>=41)?printf("Your grade is C")
		:(score<=40 && score>=33)?printf("Your grade is D")
		:(score<=32 && score>=0)?printf("Your grade is E")
		:printf("Plz Enter your proper score");
								
			
}
