#include <stdio.h>
int main()
{
    int num;
    long int sum=0;
    scanf("%d",&num);
    sum=(num*(num+1))/2;
    printf("%ld",sum);
    return 0;
}
