#include <unistd.h>
#include <stdlib.h>
 void search_and_replace(char*str,char find,char replace){
  while(*str){
 if (*str == find)
  *str  = replace;
  write(1,str,1);
str++;
}
           }
int main(int a, char**b)
{
if (a != 4){
write(1,"\n",1);
return 0;
}
  char *strl = b[1];
  char find = b[2][0];
  char replace = b[3][0];
  search_and_replace(strl,find,replace);
write(1,"\n",1);

return 0;
}
