#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    printf("1-Arithmetic operators\n2-Increment and Decrement operators\n3-Assignment operators\n4-Relational operators\n5-Logical operators\n6-Conditional operators\n\n\n");
    scanf("%d",&c);
    int a1,a2;
    a1=a;
    a2=b;
    int r=0;
    switch (c){
        case 1:
        printf("a = %d ,b = %d\n",a,b);
        printf("Addition: %d",a+b);
        printf("\nSubstraction: %d",a-b);
        printf("\nMultiplication: %d",a*b);
        printf("\nDivision: %d",a/b);
        printf("\nRemainder division: %d",a%b);
        break;
        case 2:
        printf("Increment operator:a = %d b = %d\n",++a,++b);
        printf("Decrement operator: a = %d b = %d",--a,--b);
        break;
        case 3:
        printf("=:  a1= %d a2=%d\n",a1,a2);
        printf("+=: a1= %d a2= %d\n",a1+=a,a2+=b);
        printf("-=: a1= %d a2= %d\n",a1-=a,a2-=b);
        break;
        case 4:
        
        printf("%d==%d is %d\n",a,b,a==b);
        printf("%d>=%d is %d\n",a,b,a>=b);
        printf("%d<=%d is %d\n",a,b,a<=b);
        printf("%d!=%d is %d\n",a,b,a!=b);
        printf("%d>%d  is %d\n",a,b,a>b);
        printf("%d<%d  is %d\n",a,b,a<b);
        break;
        case 5:
        printf("A is equal to b is and a greater than b is %d \n",(a==b) && (a>b));
        printf("a is equal to b or a less than b is %d \n", (a==b) || (a<b));
        printf("a not equal to b or a less than b is %d \n", (a!=b) || (a<b));
        break;
        case 6:
        a>b?printf("a is greater than b"):printf("b is greater than a");
        break;

        default:
        printf("Enter valid choice");
    }
    return 0;
}