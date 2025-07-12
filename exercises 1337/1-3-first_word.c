#include <stdio.h>
#include <unistd.h>
void first_word(char*str)
{
while(*str == ' '|| *str == '\t')                     // for skips the space
str++;
  while(*str !='\0' &&*str != ' ' && *str != '\t'){    // print characters until the end of the characters 
 write(1,str,1);
str++;
}
   }
int main(int a , char **b)                       //  b[0] = "./first_word"  // Program name
                                                   // b[1] = "Hello World"   // First argument
                                                   // b[2] = NULL            // Marks end of arguments                                                
{
if (a != 2){
write(1,"\n",1);
return 0;
}
   first_word(b[1]);
write(1,"\n",1);

       return 0;
}
