  GNU nano 7.2                                                         test.c                                                                   #include <unistd.h>
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size){
 int i=0;
 int j=size-1;
 int temp;
 while(i<j){

temp=tab[i];
tab[i]=tab[j];
tab[j]=temp;

i++;
j--;
   }
  }
int main(){
 int t[]={1,2,3,4};
  int size=sizeof(t)/sizeof(t[0]);
 int i=0;
  ft_rev_int_tab(t,size);
 while(i<size){
 printf(" %d\t",t[i]);
 i++;
}

write(1,"\n",1);

return 0;
}
