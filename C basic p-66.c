/*
Write a C program that generates 50 random numbers between -0.5 and 0.5 and writes them in a file rand.dat.
The first line of ran.dat contains the number of data and the next 50 lines contains the 50 random numbers.
50
-0.4215
0.2620
0.3065
-0.0485
.... 0.3980
0.1750
0.4780
-0.2915
0.0715
0.3565
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50
int main() {
  int i;
  char str;
  FILE * fptr;
  fptr = fopen("rand.dat", "w");
  if (fptr == NULL) {
    printf("Error in creating output.dat\n");
    return 0;
  }
  srand(time(NULL));
  fprintf(fptr, "%d\n", N);
  for (i = 1; i <= N; i++) {
    fprintf(fptr, "%0.4lf\n", (rand() % 2001 - 1000) / 2.e3);
  }
  fclose(fptr);
  fptr = fopen ("rand.dat", "r");
  str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
  fclose(fptr);
  return 0;
}
