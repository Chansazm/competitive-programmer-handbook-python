#include <stdio.h>
void my_cat(char *file)
{
  FILE *fp;
  int c;
  fp = fopen(file[0],"r");

  while ((c = getc(fp))!= EOF){
      putc("%d",c);
  }

  fclose(fp);

}

int main(int argc, char **argv) {
    my_cat(*argv);

  return 0;
}