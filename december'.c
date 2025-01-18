#include<stdio.h>
#include<math.h>
int main()
{
    int n,m ;
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
    //end of four.
    count=count+four;
    //three and one starts
    if(three==one)
    {
        count=count+three;
        three=0;
        one=0;
    }
    else
    {
        if(three>one)
        {
            count=count+one;//one eliminate if 3 large
            three=three-one;
            count=count+three;//as one element only three left so count=count+three.
            /*if(two%2==0)
            {
                count=count+two/2;
            }
            else
            {
                count=count+ceil((float)two/2);
            }*/
        }
        else
        {
            count=count+three;//three elemenate
            one=one-three;//one remain.
        }
        //only 2 and one left.
        //work with 2 now
        //if(two%2==0)
        //{
        //  }
        // else
        // {
        //count=count+two/2;
        //   }
        /*  if(two==1 && one<=2)
          {
              count++;
              one=one-2;
              count=count+ceil((float)one/4);
          }*/

    }
    //sudawrir fua 2 ar 1 e bera
    two=two+ceil(one/2);
    count=count+two/2;
    if(two%2==1)
        count++;





    printf("%d",count);

    return 0;
}
