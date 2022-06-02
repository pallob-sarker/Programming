#include<stdio.h>
int sumDigits(int num){
    if(num==0)
        return 0;
    else
        return num%10 + sumDigits(num/10);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("Sum=%d", sumDigits(num));
    return 0;
}
