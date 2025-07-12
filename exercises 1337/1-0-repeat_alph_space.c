
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
 void repeat_alphabet(char*str)
{  while(*str){
 int count=1;
if(*str>='a'&& *str<='z')
count = *str - 'a'+1;
 else if(*str>='A'&& *str<='Z')
count =  *str - 'A'+1;

  while(count--)
write(1,&str,1);
 str++;
     }
          }
int main(int a, char**b){
if (a == 2){
  repeat_alphabet(b[1]);
}

write(1,"\n",1);

return 0;
}
