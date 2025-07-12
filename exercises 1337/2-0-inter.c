#include <unistd.h>
char inter(char *s1 , char *s2){
  char print[256]={0}; // all initialized to 0
  int i=0;
while(s1[i]){
 unsigned char c = s1[i];  //// Ensure 0 ≤ c ≤ 255
  if (!print[c]){       // If not printed yet
  int f=0;
 while(s2[f]){
 if (c == s2[f]){
 write(1,&c,1);
 print[c]=1;          // Mark as printed
 break;
      }
  f++;
    }
      }
i++;
  }
   }
int main(int a, char**b){
if (a!=3){
write(1,"\n",1);
 return 0;
}
 inter(b[1],b[2]); // 1 first string and 2 secod string
write(1,"\n",1);
return 0;
}
