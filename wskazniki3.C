#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char inputs[BUFSIZ];
  int ile = atoi(argv[2]);

 for(int i=0;i<ile;i++){
   fgets(&inputs[i],BUFSIZ,stdin);
   
 }
  for(int i=0;i<ile;i++){
    printf("%s",&inputs[i]);
   
 }


}