#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
int main(int a , char*b[]){
if(a!=2){
 write(1,"z\n",2);
return 0;
 }
char*str=b[1];
while(*str){
if (*str == 'z'){
 write(1,"z\n",2);
}
str++;
}
 write(1,"z\n",2);
return 0;
}
