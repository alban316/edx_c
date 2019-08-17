#include <stdio.h>

int main(void) {
  int N = 10;
  FILE *ofile;

  char[] filename = "my_output_file.txt";

  ofile = fopen(filename, "w"); /*creates if not exists; overwrites if exists */

  fprintf(ofile, "%d", N);

  fclose(ofile);

/*
  ofile = fopen(filename, "a"); // append
  fprintf(ofile, "%d", 777);

  fclose(ofile);
*/

  return 0;
}
