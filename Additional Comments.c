#include<stdio.h>

main()
{
	int score;
	printf("Enter your score = ");
	scanf("%d",&score);
	
	switch(score)
	{
		case 81 ... 100:
			printf("Your grade is A. Excellent work!");
			break;
		case 61 ... 80:
			printf("Your grade is B. Well done");
			break;
		case 41 ... 60:
			printf("Your grade is C. Good job");
			break;
		case 33 ... 40:
			printf("Your grade is D. You passed");
			break;
		case 0 ... 32:
			printf("Your grade is E.Sorry, you failed");
			break;
		default:
			printf("Plz Enter your proper score");
	}
}
