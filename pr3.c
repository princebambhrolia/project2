#include<stdio.h>


main(){

int score;
char grade;

printf("Enter your score : ");
scanf("%d",&score);


if(score>=85 && score<=100){

	printf("Your grade is A.");
	grade='A';

}else if(score>=70 && score<=85){

	printf("Your grade is B.");
	grade='B';

}else if(score>=55 && score<=70){

	printf("Your grade is C.");
	grade='C';

}else if(score>=40 && score<=55){

	printf("Your grade is D.");
	grade='D';

}else{

	grade='F';

}

 

switch(grade){

	case 'A' :
		printf("Excellent work !");

		break;

	case 'B' :
		printf(" Well done");

		break;

	case 'C' :
		printf(" Good job");

		break;

	case 'D' :
		printf(" You passed, but you could do better");

		break;

	case 'F' :
		printf("Sorry, you failed");

		break;

}



if(score>=40){

	printf(". Congratulations! You are eligible for the next level.");

}else{

	printf(". Please try again next time.");

}

}