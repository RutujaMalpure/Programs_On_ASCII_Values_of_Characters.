/*
    Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Alphabet(char Letter)
{
    if((Letter>='A' && Letter<='Z') ||(Letter>='a' && Letter<='z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char ch='\0';
    BOOL iRet=FALSE;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=Alphabet(ch);
    if(iRet==TRUE)
    {
        printf("it is an alphabet");
    }
    else
    {
        printf("It is not an alphabet");
    }
}
