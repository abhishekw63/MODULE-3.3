#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
}
int main()

{   int n;
    printf("PROGRAMME TO DISPLAY FACTORIAL OF NUMBER");
    printf("\nenter the number:");
    scanf("%d",&n);

    int result=factorial(n);
    printf("\nfactorial of number is:%d",result);

}