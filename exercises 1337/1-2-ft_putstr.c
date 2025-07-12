#include <string.h>
 void    ft_putstr(char *str){
 while (*str){
  write(1,str,1);
  str++;
 }
     }
int main(int a, char**b)
{
if (a != 2){
write(1,"\n",1);
return 0;
}
 ft_putstr(b[1]);
write(1,"\n",1);

return 0;
}
