#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    double theta,lamda,d;

    printf("Enter wavelength in nanometer: ");
    scanf("%lf",&lamda);

    printf("Enter slit separation in micrometer: ");
    scanf("%lf",&d);

    printf("Enter angle in degree: ");
    scanf("%lf",&theta);


    if(lamda<380 || lamda>750)
    {
        printf("Out of Range Please enter a valid number\n ");
    }

    else
    {
    //from degree to radian
    theta = theta*(M_PI / 180.0);

    //calculating order
    m = (int)(d*sin(theta)*1000/lamda);

    printf("%d th order maxima\n",m);
    }
    return 0;
}

/// Group 5
/// Assignment Number 2
/// ID no.232-115-227
///       232-115-226
///       232-115-240
///       232-115-214
