//  测试计算机采用的是 "Big Endian" or "Little Endian"

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=0x1234;
    char b=*(char*)&a;
    if(b==0x12)
        printf("big end\n");
    else
        printf("little end\n");

    printf("sizeof(int) = %ld Byte(s)\n", sizeof(int));
    printf("sizeof(char) = %ld Byte(s)\n", sizeof(char));
    printf("sizeof(unsigned char) = %ld Byte(s)\n", sizeof(unsigned char));


    return 0;
}
