 #include <stdio.h>
#include <unistd.h>
#include <math.h>
 int is_power_of_2(unsigned int n){
if(n == 0)
return 0;
while(n%2==0)
n/=2;
return (n==1);
    }
int main (){
 unsigned int a=4;
is_power_of_2(a);
printf("%u\n",is_power_of_2(a));



return 0;
}
