#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char** setVoidMatrix()
{
  char** m;

  m=malloc(sizeof(char*)*8);
  for(int i=0; i<8; i++)
    *(m+i)=malloc(sizeof(char)*8);
  for(int i=0; i<8; i++)
    for(int j=0; j<8; j++)
      m[i][j]=' ';

  return m;
}

char** generateMatrix(char c)
{
  char** m=setVoidMatrix();

  switch(tolower(c))
  {
    case 'a':
      m[0][3]='#';
      m[1][2]='#';
      m[1][4]='#';
      for(int i=2; i<8; i++)
      {
        m[i][1]='#';
        m[i][5]='#';
      }
      m[4][2]='#';
      m[4][3]='#';
      m[4][4]='#';
    break;
    case 'b':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      m[0][2]='#';
      m[0][3]='#';
      m[0][4]='#';
      m[1][5]='#';
      m[2][5]='#';
      m[3][4]='#';
      m[4][2]='#';
      m[4][3]='#';
      m[5][4]='#';
      m[6][5]='#';
      m[7][2]='#';
      m[7][3]='#';
      m[7][4]='#';
    break;
    case 'c':
      for(int i=2; i<6; i++)
        m[i][1]='#';
      m[0][3]='#';
      m[0][4]='#';
      m[0][5]='#';
      m[1][2]='#';
      m[6][2]='#';
      m[7][3]='#';
      m[7][4]='#';
      m[7][5]='#';
    break;
    case 'd':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      m[0][2]='#';
      m[0][3]='#';
      m[1][4]='#';
      m[2][5]='#';
      m[3][5]='#';
      m[4][5]='#';
      m[5][5]='#';
      m[6][4]='#';
      m[7][2]='#';
      m[7][3]='#';
    break;
    case 'e':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=2; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
      }
      for(int i=2; i<5; i++)
        m[4][i]='#';
    break;
    case 'f':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=2; i<6; i++)
        m[0][i]='#';
      for(int i=2; i<5; i++)
        m[4][i]='#';
    break;
    case 'g':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=2; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
      }
      m[1][5]='#';
      m[6][5]='#';
      m[5][5]='#';
      m[4][5]='#';
      m[4][4]='#';
    break;
    case 'h':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=0; i<8; i++)
        m[i][5]='#';
      for(int i=2; i<5; i++)
        m[4][i]='#';
    break;
    case 'i':
      for(int i=0; i<8; i++)
        m[i][3]='#';
      m[0][2]='#';
      m[0][4]='#';
      m[7][2]='#';
      m[7][4]='#';
    break;
    case 'j':
      for(int i=0; i<7; i++)
        m[i][4]='#';
      for(int i=1; i<4; i++)
        m[7][i]='#';
      for(int i=1; i<7; i++)
        m[0][i]='#';
    break;
    case 'k':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      m[4][2]='#';
      m[3][3]='#';
      m[2][4]='#';
      m[1][5]='#';
      m[0][6]='#';
      m[5][3]='#';
      m[6][4]='#';
      m[7][5]='#';
    break;
    case 'l':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=2; i<6; i++)
        m[7][i]='#';
    break;
    case 'm':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      for(int i=0; i<8; i++)
        m[i][7]='#';
      m[1][2]='#';
      m[2][3]='#';
      m[3][4]='#';
      m[1][6]='#';
      m[2][5]='#';
    break;
    case 'n':
      for(int i=0; i<8; i++)
      {
        m[i][1]='#';
        m[i][6]='#';
      }
      m[2][2]='#';
      m[3][3]='#';
      m[4][4]='#';
      m[5][5]='#';
    break;
    case 'o':
      for(int i=2; i<6; i++)
      {
        m[i][1]='#';
        m[i][7]='#';
      }
      for(int i=3; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
      }
      m[1][2]='#';
      m[6][2]='#';
      m[1][6]='#';
      m[6][6]='#';
    break;
    case 'p':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      m[0][2]='#';
      m[1][3]='#';
      m[2][3]='#';
      m[3][3]='#';
      m[4][2]='#';
    break;
    case 'q':
      for(int i=2; i<6; i++)
      {
        m[i][1]='#';
        m[i][7]='#';
      }
      for(int i=3; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
      }
      m[1][2]='#';
      m[6][2]='#';
      m[1][6]='#';
      m[6][6]='#';
      m[7][7]='#';
      m[5][5]='#';
    break;
    case 'r':
      for(int i=0; i<8; i++)
        m[i][1]='#';
      m[0][2]='#';
      m[1][3]='#';
      m[2][3]='#';
      m[3][3]='#';
      m[4][2]='#';
      m[5][3]='#';
      m[6][3]='#';
      m[7][3]='#';
    break;
    case 's':
      for(int i=3; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
        m[4][i]='#';
      }
      m[1][6]='#';
      m[1][2]='#';
      m[2][2]='#';
      m[3][2]='#';
      m[6][2]='#';
      m[5][6]='#';
      m[6][6]='#';
    break;
    case 't':
      for(int i=0; i<8; i++)
        m[i][4]='#';
      for(int i=1; i<8; i++)
        m[0][i]='#';
    break;
    case 'u':
      for(int i=2; i<6; i++)
      {
        m[i][1]='#';
        m[i][7]='#';
      }
      for(int i=3; i<6; i++)
        m[7][i]='#';
      m[1][1]='#';
      m[6][2]='#';
      m[1][7]='#';
      m[6][6]='#';
    break;
    case 'v':
      for(int i=0; i<5; i++)
      {
        m[i][1]='#';
        m[i][7]='#';
      }
      m[5][2]='#';
      m[6][3]='#';
      m[7][4]='#';
      m[6][5]='#';
      m[5][6]='#';
    break;
    case 'w':
      m[0][1]='#';
      m[1][2]='#';
      m[2][3]='#';
      m[3][3]='#';
      m[4][4]='#';
      m[5][4]='#';
      m[6][5]='#';
      m[7][6]='#';

      m[0][6]='#';
      m[1][5]='#';
      m[2][4]='#';
      m[3][4]='#';
      m[4][3]='#';
      m[5][3]='#';
      m[6][2]='#';
      m[7][1]='#';
    break;
    case 'z':
      for(int i=1; i<6; i++)
      {
        m[0][i]='#';
        m[7][i]='#';
      }
      m[2][5]='#';
      m[3][4]='#';
      m[4][3]='#';
      m[5][3]='#';
      m[6][2]='#';
    break;
    default:
    break;
  }

  return m;
}

void traslateMatrixIntoAnotherMatrix(char** to, char** from, int fromIndex, int toIndex)
{
  for(int i=fromIndex, k=0; i<8 && k<=toIndex; i++, k++)
    for(int j=0; j<8; j++)
      to[j][i]=from[j][k];
}

void printMatrix(char** m)
{
  for(int i=0; i<8; i++)
  {
    for(int j=0; j<8; j++)
      printf("%c ", m[i][j]);
    printf("\n");
  }
}

void traslateMatrix(char** m, int n)
{
  for(int i=0; i<8; i++)
    for(int j=0; j<8; j++)
      m[i][j]=m[i][j+1];
}
