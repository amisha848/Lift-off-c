#include<stdio.h>

int main()
{
    int a , b , op;
    float r;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a , &b);
    r=(float) a/b;

    printf("1:additon\n");
    printf("2:subtraction\n");
    printf("3:multiplication\n");
    printf("4:divison\n");

    printf("Enter the operation you want to perform : \n");
    scanf("%d" , &op);

    switch(op)
    {
        case 1 :
           printf(" Addition  : %d + %d = %d\n" , a , b , a + b);
           break;
        case 2 :
           printf(" Subtraction  : %d - %d = %d\n" , a , b , a - b);
           break;
        case 3 :
           printf(" Multiplication  : %d * %d = %d\n" , a , b , a * b);
           break;
        case 4 :
           printf(" Division  : %d / %d = %f\n" , a , b , r);
           break; 
        default :
           printf("This operation doesn't exist\n");
           break;

    }
    

    return 0 ;

}
