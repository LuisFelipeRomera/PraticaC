#include<stdio.h>
int main(){

/* This code tells the user the weekday based on the day of the year, starting
 on a sunday (sunday = 1) */

	int day;

	scanf("%d", &day); // Scan the day of the year

	day = day%7; // Discovers the day of the week 

	switch (day){ // Prints the day of the week depending on the value of "day"
		case 1:
			printf("Sunday\n"); // Prints "sunday" if day equals 1
		
		break; // end the first case conditional

		case 2:
			printf("Monday\n");
		break;

			
		case 3:
			printf("Tuesday\n");
		break;


		case 4:
			printf("Wednesday\n");
		break;

		case 5:
			printf("Thursday\n");
		break;

		case 6:
			printf("Friday\n");
		break;

		case 0:
			printf("Saturday\n");
		break;
		
	
	}

	return 0;
}
