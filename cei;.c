#include<math.h>
#include<stdio.h>
int main()
{
    int n ;
    int four=0,three=0,two=0,one=0;
    int count=0;
    scanf("%d",&n);
    int name[n];
    for(int j =0; j<n ; j++)
        scanf("%d",&name[j]);
    for( int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(name[i]>name[j])
            {
                int temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    for(int j =0; j<n ; j++)
    {
        if(name[j]==4)
            four++;
        else if(name[j]==3)
            three++;
        else if(name[j]==2)
            two++;
        else
            one++;
    }
    count=count+four;
    if(three==one)
        count=count+three;
    else
    {
        if(three>one)
        {
            count=count+one;
             three=three-one;
             count=count+three;
             count=count+two;
        }
        else
        {
               count=count+three;
               one=one-three;
        }
    }
    count=count+two/2;
    two=two-two/2;
    if(two==1 && one<=2)
        count++;
    else if(one>2)
    {
        count=count+(ceil(one/4));
    }

   printf("%d",count);

    return 0;
}
