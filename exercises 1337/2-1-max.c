#include <stdio.h>
int max (int *tab ,int len){
 if(len == 0){
return 0;
}
int f = tab[0];
unsigned int  i = 1;
 while(i<len){
 if (tab[i] > f)
 f=tab[i];
i++;
}
return f ;
    }
 int main(){
  int arr[]={36,63,3,6,8};
  int result = max(arr,5);
   printf("the larger number :%d \n",result );
  return 0;
}
