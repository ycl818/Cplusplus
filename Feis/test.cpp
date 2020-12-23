#include <stdio.h>
#include <iostream>
int main()
{
    int a, c;
    double b, d;
    a = b = c = d = 3 + 7 / 2.;
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%d\n", c);
    printf("%f\n", d);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    return 0;
}
