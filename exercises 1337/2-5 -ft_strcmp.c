#include <stdio.h>
 int ft_strcmp(char*s1,char*s2){
   int i=0;
while(s1[i] && s1[i] == s2[i]){
i++;
}
return (unsigned char) s1[i]-(unsigned char) s2[i];
 }
int main () {
   printf("%d\n" ,ft_strcmp("hi","hi"));
   printf("%d\n" ,ft_strcmp("he","hi"));
    printf("%d\n" ,ft_strcmp("him","hi"));
return 0;
}
