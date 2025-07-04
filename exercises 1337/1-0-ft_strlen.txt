#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
 int     ft_strlen(char *str){
 int len=0;
  while(str[len]){
    len++;
}
return len;
       }
int main(){
char a[]="Hello World";
ft_strlen(a);
int result = ft_strlen(a);
 printf("the length : %d \n ",result);
return 0;
}
