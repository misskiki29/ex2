#include <iostream>

/******************
Name: Daria Lozinskaya
ID: 230360703
Assignment: ex2
*******************/

#include <stdio.h>


// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
/* Example:
* n = 3:
* 0   0
*   o
* \___/
*/


// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
// and the sum of all digits to the right of the middle digit(s) are equal
/* Examples:
Balanced: 1533, 450810, 99
Not blanced: 1552, 34
Please notice: the number has to be bigger than 0.
*/






// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
/* Examples:
Abudant: 12, 20, 24
Not Abudant: 3, 7, 10
Please notice: the number has to be bigger than 0.
*/




//
// // Case 4: determine wether a number is a prime.
// /* Examples:
// This one brings joy: 3, 5, 11
// This one does not bring joy: 15, 8, 99
// Please notice: the number has to be bigger than 0.
// */
//



//
// // Happy numbers: Print all the happy numbers between 1 to the given number.
// // Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
// /* Examples:
// Happy :) : 7, 10
// Not Happy :( : 5, 9
// Please notice: the number has to be bigger than 0.
// */
//

int main() {
	int choice;
	do {
		printf("Choose an option:\n");
		printf("	1. Happy Face\n");
		printf("	2. Balanced Number\n");
		printf("	3. Generous Number\n");
		printf("	4. Circle Of Joy\n");
		printf("	5. Happy Numbers\n");
		printf("	6. Festival Of Laughter\n");
		printf("	7. Exit\n");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				int size;
				char eye, nose, mouth;
				printf("Enter symbols for the eyes, nose, and mouth\n");
				scanf (" %c %c %c",&eye,&nose,&mouth);
				printf("Enter face size\n");
				scanf(" %d", &size);
				while (size <=0 || size%2==0)
				{
					printf("The face’s size must be an odd and positive number, please try again:\n");
					scanf("%d", &size);
				}
				printf("%c",eye);
				for (int i=0; i<size; i++) {
					printf(" ");
				}
				printf("%c\n",eye);
				for (int i=0; i<size/2+1; i++) {
					printf(" ");
				}
				printf("%c\n", nose);
				printf("\\");
				for (int i=0; i<size; i++) {
					printf("%c", mouth);
				}
				printf("/\n");
				break;
			}
			case 2: {
				int num;
				printf("Enter a number\n");
				scanf("%d", &num);
				while (num<=0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &num);
				}
				int temp=num, sumleft=0, sumright=0;
				int count=0;
				int a=num;
				while (a!=0) {
					a=a/10;
					count++;
				}
				for (int i=0; i<count/2; i++) {
					sumleft+=temp%10;
					temp=temp/10;
				}
				if (count%2!=0)
				{
					temp=temp/10;
				}
				while (temp!=0) {
					sumright+=temp%10;
					temp=temp/10;
				}

				if (sumright==sumleft) printf("This number is balanced and brings harmony!\n");
				else  printf("This number isn't balanced and destroys harmony.\n");
				break;
			}
			case 3: {
				int num;
				printf("Enter a number:\n");
				scanf("%d", &num);
				while (num<=0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &num);
				}
				int sum=0;
				int temp=num;
				for (int i=1; i<temp; i++) {
					if (temp%i==0)
						sum+=i;
				}
				if (sum>num)
					printf("This number is generous\n");
				else printf("This number does not share\n");
				break;
			}
			case 4: {
				int num;
				printf("Enter a number:\n");
				scanf("%d", &num);
				while (num<=0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &num);
				}
				int count=0;
				int temp=num;
				bool prime;
				for (int i=1; i<=temp; i++) {
					if (temp%i==0) count++;
				}
				if ((count==2) && (temp>1))  prime=true;
				else prime=false;
				if (prime) {
					printf("This number completes the circle of joy!\n");
				}
				else printf("The circle remains incomplete.\n");
				break;
			}
			case 5:
				// int num;
				// printf("Enter a smile and cheer number::\n");
				// scanf()
				// printf("Enter a number:\n");
				// scanf("%d", &num);
				// while (num<=0) {
				// 	printf("Only positive maximum number is allowed, please try again:\n");
				// 	scanf("%d", &num);
				// }
				break;
			case 6:
				// 	printf("You chose Festival Of Laughter!\n\n");
					break;
		case 7:
			printf("Thank you for your journey through Numeria!\n");
		break;
		default:
			printf("This option is not available, please try again.\n\n");
	}
	} while (choice != 7);

	return 0;
}

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	//return 0;
	//}