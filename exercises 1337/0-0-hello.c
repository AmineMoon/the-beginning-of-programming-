 #include <unistd.h>
#include <stdio.h>
void print_str(char*str){
while(str!= '/0'){
write(1,str,1);
str++;
}  
  }
int main(void){
print_str("HELLO WORLD"):
return 0:
}
