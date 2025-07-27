#include <unistd.h>
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size){
int i;
int j;
int temp;
    i=0;
   while(i<size-1){
   j=0;
  while(j<size-i-1){
if (tab[j]>tab[j+1]){

  temp=tab[j];
  tab[j]=tab[j+1];
 tab[j+1]=temp;
}
  j++;
   }
  i++;
   }
        }
int main(){
 int t[]={4,3,2,1,4,8,76,6,3,9};
  int size=sizeof(t)/sizeof(t[0]);
 int i=0;
  ft_sort_int_tab(t,size);
 while(i<size){
 printf(" %d\t",t[i]);
 i++;
}
printf("\n");

return 0;
}
