#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
    int choice,i,a,b;
    float x,y,result;
    
    do{
        printf("\nSelect your opeation (0 to exit):\n");
        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
        printf("5.Square root\n6.X ^ Y\n7. X ^ 2\n");
        printf("8.1/X\n9.X^(1/Y)\n");
        printf("10.10 ^ X\n11.X!\n");
        printf("12.log10(x)\n13.Modulus\n");
        printf("14.Sinx(x)\n15.Cos(X)\n16.Tan(X)\n");
        printf("Choice: ");
        scanf("%d",&choice);
        if(choice==0)exit(0);
        switch(choice){
            case 1:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= x+y;
            printf("\nResult:%f",result);
            break;

            case 2:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= x-y;
            printf("\nResult:%f",result);
            break;

            case 3:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= x*y;
            printf("\nResult:%f",result);
            break;

            case 4:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= x/y;
            printf("\nResult:%f",result);
            break;

            case 5:
            printf("Enter X:");
            scanf("%f",&x);
            result= sqrt(x);
            printf("\nResult:%f",result);
            break;

            case 6:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= pow(x,y);
             printf("\nResult:%f",result);
            break;

            case 7:
            printf("Enter X:");
            scanf("%f",&x);
            result= pow(x,2);
            printf("\nResult:%f",result);
            break;
           
           
            case 8:
            printf("Enter X:");
            scanf("%f",&x);
            result= pow(x,-1);
            printf("\nResult:%f",result);
            break;

            case 9:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= pow(x,(1/y));
            printf("\nResult:%f",result);
            break;

            case 10:
            printf("Enter X:");
            scanf("%f",&x);
            result= pow(10,x);
            printf("\nResult:%f",result);
            break;

            case 11:
            printf("Enter X:");
            scanf("%f",&x);
            result= 1;
            for(i=1;i<=x;i++){
            result = result*i;
            }
            printf("\nResult:%f",result);
            break;

            case 12:
            printf("Enter X:");
            scanf("%f",&x);
            result= log10(x);
            printf("\nResult:%.2f",result);
            break;

            case 13:
            printf("Enter X:");
            scanf("%f",&x);
            printf("\nEnter Y:");
            scanf("%f",&y);
            result= a%b;
            printf("\nResult:%.d",result);
            break;

            case 14:
            printf("Enter X:");
            scanf("%f",&x);
            result= sin(x*3.14159/180);
            printf("\nResult:%.2f",result);
            break;

            case 15:
            printf("Enter X:");
            scanf("%f",&x);
            result= cos(x*3.14159/180);
            printf("\nResult:%.2f",result);
            break;

            case 16:
            printf("Enter X:");
            scanf("%f",&x);
             result= tan(x*3.14159/180);
            printf("\nResult:%.2f",result);
            break;
            default:
            printf("\nInvalid Choice");
        }
    }while(choice);
    return 0;
}
        
























           




            

         

        
        
    
