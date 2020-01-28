#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,count=0,l,r,k;
    scanf("%d %d %d",&l,&r,&k);
    if(l>r)
    {
        for(i=r;i<=l;i++)
        {
            if(i%k==0)
                count++;
        }
    }
    else if(r>l)
    {
        for(int j=l;j<=r;j++)
        {
            if(j%k==0)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
