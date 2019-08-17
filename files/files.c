#include <stdio.h>

int main(void) {
  FILE *ifile;
  int num, N, sum;

  ifile = fopen("my_only_file.txt", "r");
  N = 0;
  sum = 0;


  while (fscanf(ifile, "%d", &num) != EOF) {
    printf("I read %d from the file. \n", num);
    N++;
    sum += num;
  }

  printf("There are %d numbers in the file. \n", N);
  printf("The sum of the numbers is %d. \n", sum);
  printf("The avg of the numbers is %.2lf. \n", (double) sum / N);

}
