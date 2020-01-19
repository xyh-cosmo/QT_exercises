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

//    char s = 'a';
//    printf("s = %s\n", &s);
//    printf("s = %d\n", s);

//    char ss = s - 26;
//    printf("s = %s\n", &ss);
//    printf("s = %d\n", ss);
////    printf("s-26 = %s\n", (char *)(&s-26));

//    ss = ss + 26;
//    printf("s = %s\n", &ss);
//    printf("s = %d\n", ss);

//    int n = 26;
//    short m = 26;

//    printf("sizeof(s) = %ld\n", sizeof(s));
//    printf("sizeof(n) = %ld\n", sizeof(n));
//    printf("sizeof(m) = %ld\n", sizeof(m));

// ######################################
    char s[] = "abcdef";

    printf("s0 = %s\n", &s[0]);
    printf("s1 = %s\n", &s[1]);
    printf("s2 = %s\n", &s[2]);
    printf("s3 = %s\n", &s[3]);
    printf("s4 = %s\n", &s[4]);

    char ss0 = s[0]-26;
    char ss1 = s[1]-26;
    char ss2 = s[2]-26;
    char ss3 = s[3]-26;
    char ss4 = s[4]-26;

    printf("ss0 = %s\n", &ss0);
    printf("ss1 = %s\n", &ss1);
    printf("ss2 = %s\n", &ss2);
    printf("ss3 = %s\n", &ss3);
    printf("ss4 = %s\n", &ss4);

//    char sss4 = s[4]-26;
//    char sss3 = s[3]-26;
//    char sss2 = s[2]-26;
//    char sss1 = s[1]-26;
//    char sss0 = s[0]-26;

//    printf("sss0 = %s\n", &sss0);
//    printf("sss1 = %s\n", &sss1);
//    printf("sss2 = %s\n", &sss2);
//    printf("sss3 = %s\n", &sss3);
//    printf("sss4 = %s\n", &sss4);

    int a=0x1234;
    char b=*(char*)&a;
    if(b==0x12)
        printf("big end\n");
    else
        printf("little end\n");

    return 0;
}
