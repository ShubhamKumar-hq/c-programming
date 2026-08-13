#include <stdio.h>
int main(){
    //divisor*quotient +rem = dividend
    int a,b;

    printf("Enter a First No.");
    scanf("%d", &a);
    printf("Enter a Second No.");
    scanf("%d", &b);
    int q = a/b;
    int r= a-(b*q);
    printf("The Remainder when %d is divided by %d is %d:",a,b,r);
    return 0;


}
