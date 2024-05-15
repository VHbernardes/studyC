#include<stdio.h>
main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0;
  fp = fopen ( "arquivo1.txt", "r" );
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    pqtdecar++;
  }
  fclose ( fp );
  printf("Quantidade de Caracteres: %d",pqtdecar);
  return 0;
}