//该程序的目的是搞清楚“用整数给char/unsigned char变量赋值是否合法、意义是什么”。
//经过测试之后确认，首先用整数给这些变量赋值是合法的；其次，在用printf输出结果时，
//可以通过格式控制符输出不同的结果，可以是整数自身，也可以是这些整数在ascii表中所
//对应的字符（当然，如果整数值超出ascii表的范围另说）。

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

    int length = 4;
//    unsigned char *buffer = new unsigned char[length+1];
    char *buffer = new char[length+1];

//    buffer[0] = 0xfe;
//    buffer[1] = 0xff;
//    buffer[2] = 0xff;
//    buffer[3] = 0x7f;

    buffer[0] = 0x21;
    buffer[1] = 0x22;
    buffer[2] = 0x23;
    buffer[3] = 0x24;

    for( int i=0; i<4; ++i ){
        printf("buffer[%2d] = %c, int_value = %3d\n", i, buffer[i], buffer[i]);
    }

    return 0;
}
