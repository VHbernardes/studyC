#include<stdio.h>
int main( )
{
  FILE *fp;
  char ch;
  char sp;
  int qntdchar = 0, qntdspace = 0, qntdtabs = 0, qndtlines = 0;
  fp = fopen ("helloworld.c", "r" );
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    qntdchar++;
    
    sp = fgetc(fp);
    if(sp==EOF)
        break;
    if (sp == ' ' || sp == '\n' || sp == '\t')
    {
        qntdspace++;
    }

  }
  fclose ( fp );
  printf("Quantidade de caracteres: %d\n", qntdchar);
  printf("Quantidade de espacos: %d\n", qntdspace);
  return 0;
}
