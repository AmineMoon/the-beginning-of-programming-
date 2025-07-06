#include <stdio.h>
#include <unistd.h>
void first_word(char*str)
{  char *end = str;            // point to str
   while(*end) end++;          // storing value in 'str' into 'end'
while(end-- > str)             // reverse the value within 'end'
write(1,end,1);
   }

int main(int a , char **b)
{
if (a !=2){
write(1,"\n",1);
return 0;
}
   first_word(b[1]);
write(1,"\n",1);

       return 0;
}
