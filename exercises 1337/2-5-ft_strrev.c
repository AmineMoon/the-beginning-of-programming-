#include <stdio.h>
char*ft_strrev(char*str){
  char*end=str;
  char temp;
while(*end){
end++;
end--;      // Point to last character (before '\0')
}
   // Swap characters from both ends
while(str<end){
temp=*str;
*str++=*end;
*end--=temp;
}
return str;
}
int main()
{
    char s1[] = "hello";
    char s2[] = "a";
    char s3[] = "";

    printf("%s\n", ft_strrev(s1));  // "olleh"
    printf("%s\n", ft_strrev(s2));  // "a"
    printf("%s\n", ft_strrev(s3));  // ""
    return 0;
}












