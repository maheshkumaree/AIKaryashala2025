/*
Algorithm: To print natural numbers upto N.
step-1: start
step-2: print "Upto which number you want to print natural numbers? "
step-3: read Count
step-4: Counter = 0
step-5: print "The natural numbers upto " + Count + " are "
step-6: if Counter < Count:
			Counter = Count + 1
			print Counter + ", "
			goto step-6
step-7: print Count + ".\n"
step-8: stop
*/

#include<stdio.h>

int main()
{
	int count, counter;

	printf("Upto which number you want to print the natural numbers? ");
	scanf("%i", &count);
	printf("The natural numbers upto %i are ", count);
	counter = 1;
	while (counter < count)
	{
		printf("%i, ", counter);
		counter = counter + 1;
	}
	printf("%i.\n", counter);

	return 0;
}