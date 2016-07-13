#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int ismultiple(int n);

int main()
{
int n,i;
scanf("%d",&n);
if(n>0)
{
for(i=0;i<n;i++)
{
    int t=i;
    int x=1;
    while(t)
    {
        x=x*(t%10);
        t=t/10;
    }
    if((x*i)==n)
        printf("%d",i);
}
}
else{
    printf("0");
}
return 0;
}
