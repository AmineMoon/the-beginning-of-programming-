#include <unistd.h>
#include <stdlib.h>
void print_bits(unsigned char octer ){
 int i=8;
  while(i--){
 if (octer &  (1<<i))
  write(1,"1",1);
 else
  write(1,"0",1);
          }

    }
int main (int p , char**str){
 if (p!=2){
 write(1,"\n",1);
return 0;
}
   // Convert first character of argument to byte
    unsigned char input = (unsigned char)str[1][0];
  // convert string to number
 // unsigned char input =(unsigned char) atoi (str[1]);
 write(1,"binany :",8);

print_bits(input);
 write(1,"\n",1);
 return 0;
}
