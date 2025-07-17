#include <unistd.h>
void ft_putnbr(int n){
char c;
if (n == -2147483648){
  write(1,"-2147483648",11);
}
if (n<0){
 write(1,"-",1);
   n=-n;
 }
if(n>0){
 ft_putnbr(n/10);
c=(n%10)+'0';
 write(1,&c,1);
   }
     }

int main (){

      ft_putnbr(42);
      write (1,"\n",2);          // Output: 42
      ft_putnbr(-123);    // Output: -123
      write (1,"\n",2);
return 0;
}
