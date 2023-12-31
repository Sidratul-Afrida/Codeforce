#include<stdio.h>
int main()
{
    int w;
    printf("Enter a value: ");
    scanf("%d",&w);
    if(w % 2==0 && w>2)
    printf("yes\n");
    else
    printf("No");
    return 0;
}