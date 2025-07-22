#include<unistd.h>
#include<stdio.h>
void ft_rev_int_tab(int *tab, int size){
int i=-1;
while(++i<--size){
int temp=tab[i];
tab[i]=tab[size];
tab[size]=temp;

   }

}

int main (){
 int arr[]={12,2,3,4,2};
int size = sizeof(arr)/sizeof(arr[0]);
 ft_rev_int_tab(arr,size);
int a=0;
while(a<size){
printf("%d\t",arr[a]);
a++;
}

write(1,"\n",1);
return 0;
}
