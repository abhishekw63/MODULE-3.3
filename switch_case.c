#include<stdio.h>
int main()
{
    printf("**PROGRAMME TO DISPLAY ARITHMATIC OPERATION BASED ON USER'S INPUT**");
    int num1,num2;
    printf("\nenter the two values:");
    scanf("%d %d",&num1,&num2);
    int choice;
    printf("\n");
    printf("enter your choice:\n");
    printf("1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    scanf("%d",&choice);
    

    switch(choice)
    {
        case 1:
        printf("\nsum is %d",num1+num2);
        break;

        case 2:
    
        printf("\nsubstraction is %d",num1-num2);
        break;

        case 3:
        
        printf("multiplication is %d",num1*num2);
        break;
        
        case 4:
            if(num2!=0)
            {
                 printf("division is %f",(float)num1/num2);
            }
            else
            {
                printf("\ndivision is not possible");
        break;

        default:
        printf("invalid input");
        break;

    }
        return 0;
}
}
