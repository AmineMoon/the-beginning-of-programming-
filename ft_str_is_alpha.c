#include <unistd.h>
#include <stdio.h>
int ft_str_is_alpha(char *str){
 int i='0';
 if(str[0]=='\0'){
 return 1;
}
  while(str[i]!='\0'){
 if(!(str[i]>='a' && str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
 return 0;
   }
i++;
return 1;
          }
   }
int main(){
 char t[]={"hel664lo world "};
  char l[]={"world"};
   char k[]={""};

 int n=ft_str_is_alpha(t);
 int m=ft_str_is_alpha(l);
 int b=ft_str_is_alpha(k);

  printf("  %d\n",n);
  printf("  %d\n",m);
  printf("  %d\n",b);
printf("\n");

return 0;
}
