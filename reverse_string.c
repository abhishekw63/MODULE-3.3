#include<stdio.h>
#include<string.h>

void recursive(char *char_array,int i,int n)
{
    if(i==n)
    {
        return;
    }
    else
    {
        recursive(char_array,i+1,n);
        printf("%c",char_array[i]);
    }
}
int main()
{
    char char_array[]="HELLO";
    int n=strlen(char_array);
    
    recursive(char_array,0,n);
}