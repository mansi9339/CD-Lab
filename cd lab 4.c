

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int con=o, var=0, op=0;
void check(char c)
{
    if(isalpha(c))
    var++;
    
    if(c==47||c==42||c==43||c==45||c==61||c==94)
    op++;
}
/* ASCII values:
/ -> 47
* -> 42
+ -> 43
- -> 45
= -> 94
*/

void main()
{
    char = str[13];
    char c;
    printf("Enter string: ");
    scanf("%s",&str);
    
    for(int i=0;i<13;i++)
    {
        c=str[i];
        check(c);
        
    }
    for(i=0;i<13;i++)
    {
        if(isdigit(str[i])&&isdigit(str[i+1]))
        {
            i=i+2;
            con++;
        }
        else if(isdigit(str[i]))
        con++;
    }
    printf("\n operator: %d \n variable: %d \nconstants:%d",op,var,con);
    printf("\nTotal tokens=%d",op+var+con);
    getch();
    
    
    
    
    
    
    
    
    
    
    
    
    
}