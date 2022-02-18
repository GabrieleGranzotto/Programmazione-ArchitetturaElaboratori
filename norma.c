#include<stdio.h>
#include<math.h>

double distanza(double x, double y , double x1, double y1)
{
    return sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
}

int main(void)
{
    double p,p1,q,q1, dist;
    printf("x_1: ");
    scanf("%lf",&p);

    printf("y_1: ");
    scanf("%lf",&q);

    printf("x_2: ");
    scanf("%lf",&p1);

    printf("y_2: ");
    scanf("%lf",&q1);

    dist = distanza(p, q, p1, q1);
    printf("\ndistanza(p_1,p_2): %.3lf\n\n", dist);

    return 0;
}