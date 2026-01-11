#include <stdio.h>
int main ()
{
int A[5];
int B[5];

int i; /* array index */

/* input elements of array A */

for (i=0; i<5; i++){
	printf ("Input value of element %d: ", i);
	scanf ("%d", &A[i]);
}

/* copy elements of A to B */

for (i=0; i< 5; i++)
B[i] = A[i];

/*output elements of B */

for (i=0; i< 5; i++)
	printf ("Value of element %d is %d. \n", i, B[i]);
	
return 0;
}
