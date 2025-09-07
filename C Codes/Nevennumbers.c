/*
Algorithm : To print first N even numbers.
step-1: start
step-2: print "How many even numbers you want to print? "
step-3: read Count
step-4: Counter = 1
step-5: EvenCounter = 0
step-6: print "The first " + Count + " even numbers are "
step-7: if Counter < Count:
		print EvenCounter + ", "
		Counter + Counter + 1
		EvenCounter = EvenCounter +2
		goto step-7
step-8: print EvenCounter + ".\n"
step-9: stop
*/

#include<stdio.h>

int main()
{
	int count, counter, even_number;

	printf("How many even numbers you want to print? ");
	scanf("%i", &count);
	printf("The first %i even numbers are ", count);
	even_number = 0;
	counter = 1;
	while (counter < count )
	{
		printf("%i, ", even_number);
		counter = counter + 1;
		even_number = even_number + 2;
	}
	printf("%i.\n", even_number);

	return 0;
}