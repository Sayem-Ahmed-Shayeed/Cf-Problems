#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    double delta, root1,root2;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b - 4*a*c;
    if(delta >= 0)
    {
        root1 = (- b + sqrt(delta))/(2 * a);
        root2 = (- b - sqrt(delta))/(2 * a);

    printf("R1 = %.5lf\n",root1);
    printf("R2 = %.5lf\n",root2);
    }
    else
    {
        printf("Impossivel calcular");
    }
}
