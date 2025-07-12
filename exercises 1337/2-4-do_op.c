#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main ( int p , char**str){
  if (p!=4){
 write(1,"\n",1);
return 0;
}
int a = atoi(str[1]);
char op = str[2][0];
int b = atoi(str[3]);
 int result = 0;
   switch(op){
      case '+': result = a+b; break;
      case '-': result = a-b; break;
      case '/': result = a/b; break;
      case '*': result = a*b; break;
      case '%': result = a%b; break;
      default: return 0;

         }
   printf("%d\n" , result);
return 0;
}
