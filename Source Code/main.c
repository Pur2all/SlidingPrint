#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "matrix.h"

int main(int argc, char** argv)
{
  if(argc==1)
  {
    fprintf(stderr, "Invalid arguments\nUsage: %s <string>\n", *argv);
    exit(EXIT_FAILURE);
  }

  char c;
  char** app=setVoidMatrix();
  char* str=malloc(sizeof(char));

  for(int i=1; i<argc; i++)
  {
    str=realloc(str, strlen(str)+strlen(*(argv+i)));
    str=strcat(str, *(argv+i));
    *(str+strlen(str))=' ';
  }
  *(str+strlen(str)-1)='\0';

  int len=strlen(str);

  for(int i=0; i<len; i++)
  {
    c=*(str+i);
    char** m=generateMatrix(c);
    int n=7;

    for(int i=0; i<8; i++, n--)
    {
      traslateMatrixIntoAnotherMatrix(app, m, n, i);
      printMatrix(app);
      traslateMatrix(app, 0);
      usleep(100000);
      system("clear");
    }

    if(i==len-1)
    {
      n=7;
      m=setVoidMatrix();
      for(int i=0; i<8; i++, n--)
      {
        traslateMatrixIntoAnotherMatrix(app, m, n, i);
        printMatrix(app);
        traslateMatrix(app, 0);
        usleep(100000);
        system("clear");
      }
    }
  }

  return 0;
}
