// PROBLEM NO.1
#include <stdio.h>

    int main()
{
    int a;
    printf("entre your number\n");
    scanf("%d", &a);

    int b;
    printf("entre your 2nd number\n");
    scanf("%d", &b);

    printf("this is the addition of your number %d", a + b);
}

// PROBLEM NO.2
#include <stdio.h>
    int main()
{
    int r, h;
    printf("entre radius of cylinder: ");
    scanf("%d", &r);
    printf("entre height of cylinder: ");
    scanf("%d", &h);

    printf("area of circle is %f", 3.14 * r * r * h);

    return 0;
}

// PROBLEM NO. 3
#include <stdio.h>

int main()
{
    int a;
    printf("entre c° degree: ");
    scanf("%d", &a);

    printf("c° in °F is %d", a * 9 / 5 + 32);

    return 0;
}

// PROBLEM NO.4
#include <stdio.h>

    int main()
{
    int p = 69;
    int r = 7;
    int t = 5;

    printf("this is simple intrest of your given values: %f", (p * r * t) / 100);
}