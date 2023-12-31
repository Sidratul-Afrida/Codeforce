    #include<stdio.h>
    int main()
    {
        float n,r=0;
        float i;
        scanf("%f",&n);
        for(i=1;i<=n;i++)
        {
     
            r+=(1/i);
        }
        printf("%.12f\n",r);
        return 0;
    }