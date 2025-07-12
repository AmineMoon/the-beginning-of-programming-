include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *s1, char *s2){
char*dest = s1;
  while((*s1++ = *s2++));
  return dest;
}
int main(){
char a[]="Hello World";
char b[11];
ft_strcpy(b,a);
 printf("the copy version : %s \n ",b);
return 0;
}
