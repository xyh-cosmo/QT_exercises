#include <iostream>
#include <cstdlib>

#include "test_Bytes.h"

using namespace std;

int main( ){

//  ###############################################################################
//  输出二进制，需调用char*itoa(int value,char*string,int radix)将数字转换成字符串
//  拓展：不同进制的数如何显式地表示，例如16进制的前缀为“0X”
//    int a = 0x7fffffe;
////    int a = 1024;
//    char s16[128]="";
//    char s8[128]="";
//    char s2[128]="";

//    my_itoa(a,s16,16);
//    my_itoa(a,s8,8);
//    my_itoa(a,s2,2);

//    printf("10进制数值： %d\n", a);
//    printf("== 直接输出数值结果 ==\n");
//    printf("16进制数值： %x\n", a);
//    printf("8进制数值：  %o\n", a);

//    printf("== 输出转换后的字符 ==\n");
//    printf("16进制数值:   %s\n",s16);
//    printf("8进制数值:    %s\n",s8);
//    printf("2进制数值:    %s\n",s2);
//  ###############################################################################

    char s = 'a';
    printf("s = %s\n", &s);
    printf("s = %d\n", s);

    char ss = s - 26;
    printf("s = %s\n", &ss);
    printf("s = %d\n", ss);
    printf("s-26 = %s\n", (char *)(&s-26));

    ss = ss + 26;
    printf("s = %s\n", &ss);
    printf("s = %d\n", ss);

    return 0;
}
