
#include <unistd.h>
#include <math.h>
void ft(void){
char i,j,k;
 i='0';
while(i<= '9'){
j=i+1;
while(j<= '9'){
k=j+1;
while(k<= '9'){
write(1,&i,1);
write(1,&j,1);
write(1,&k,1);
write(1,", ",2);
   k++;
  }
 j++;
}
i++;
     }

}
int main (){
 
ft();
return 0;
}
