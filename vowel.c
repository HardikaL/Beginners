#include<stdio.h>
 int main()
{
    char i;
    scanf("%c",&i);
    if((i>='a' && i<='z') || (i>='A' && i<='z'))
    {
    if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U')
    {
        printf("Vowels");
    }
    else
    {
        printf("Consonant");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
