#include<stdio.h>
void main()
{
    char s[100];
    char n;
    int count =0,l=0,p=0;
    
    printf("enter your name");
    scanf("%[^\n]%*c",s);
    fflush(stdin);
    printf("frequency\n");
    scanf("%c",&n);
    printf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
    count =count+1;
    if (n==s[i])
    l++;
    }
    printf("length of string %d\n",count);
    printf("fequency of %c=%d \n",n,l);
    for(int i=0;i<count/2;i++){
    if(s[i]==s[count-i-1])
    p++;
    }
    if (p==count/2)
    printf("palindrome");
    else 
    printf("not palindrome");


}