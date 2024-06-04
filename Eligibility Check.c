#include<stdio.h>

main()
{
	int score;
	printf("Enter your score = ");
	scanf("%d", &score);
	
	if(score<=100 && score>=81)
	{
		printf("Your grade is A. Excellent work! You are eligible for the next level.");
	}
	else if(score<=80 && score>=61)
	{
		printf("Your grade is B. Well done. You are eligible for the next level.");
	}
	else if(score<=60 && score>=41)
	{
		printf("Your grade is C. Good job. You are eligible for the next level.");
	}
	else if(score<=40 && score>=33)
	{
		printf("Your grade is D. You passed. You are eligible for the next level.");
	}
	else if(score<=32 && score>=0)
	{
		printf("Your grade is E.Sorry, you failed. Please try again next time");
	}
}
