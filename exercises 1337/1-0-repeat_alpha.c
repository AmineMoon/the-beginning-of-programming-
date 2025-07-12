#include <unistd.h>

 void repeat_alphabet(char str){
 int count;
if(str>='a'&& str<='z')
count = str - 'a'+1;
 else if(str>='A'&& str<='Z')
count =  str - 'A'+1;

  while(count--)
write(1,&str,1);

     }
int main(int a, char**b){
if (a == 2){
char*strl=b[1];
while(*strl)
  repeat_alphabet(*strl++);
}

write(1,"\n",1);

return 0;
}
