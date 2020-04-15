#include <iostream>
#include <gsl/gsl_math.h>

using namespace std;

int main()
{
    std::cout << "Hello World!" << std::endl;

    double pi = M_PI;

    std::cout << ">\tpi = " << pi << std::endl;

    double sum = 0;
    for( int i=0; i<5; ++i ){
        std::cout << ">\ti = " << i << std::endl;
        sum += i;
    }

    std::cout << ">\tsum = " << sum << std::endl;

    return 0;
}
