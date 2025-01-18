#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int count=0;
        int name[10];
        int a;
        scanf("%d",&a);
        int j=0;
            int i=0,k=0;
            while(a!=0)
            {
            int rem=a%10;
            a=a/10;
            int out=rem*(pow(10,i));
            name[k]=out;
            if(out>0)
                k++;
            i++;
        }
        printf("%d",k);
        for(int i=0;i<k;i++)
            printf("%d ",name[i]);
        printf("\n");
    }

}
