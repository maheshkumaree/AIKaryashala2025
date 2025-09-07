/*
Algorithm : To print odd numbers upto N.
step-1: start
step-2: print "Upto which number you want to print the odd natural numbers? "
step-3: read Count
step-4: Counter = 1
step-5: print "The odd numbers upto " + Count + " are "
step-6: if Counter < Count - 1:
			print Counter + ", "
			Counter = Counter + 2
			goto step-6
step-7: print Counter + ".\n"
step-8: stop
*/

#include<stdio.h>

int main()
{
	int count, counter;

	printf("Upto which number you want to print the odd natural numbers? ");
	scanf("%i", &count);
	printf("The odd numbers upto %i are ", count);
	counter = 1;
	while (counter < count - 1 )
	{
		printf("%i, ", counter);
		counter = counter + 2;
	}
	printf("%i.\n", counter);

	return 0;
}