#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

//    unsigned char a[4]="";
////    int a[4];
//    a[0] = 0xfe;
//    a[1] = 0xff;
//    a[2] = 0x7f;
//    a[3] = 0x00;

//    for( int i=0; i<4; ++i ){
//        cout << "a[" << i << "] = " << int(a[i]) << endl;
//    }

//    char32_t b = 12345555;

//    cout << " b = " << b << endl;


    char s = 'a';

    printf("==> Before operation:\n");
    printf("s   = %s\n",&s);
    printf("s   = %d\n",s);


    char s0 = s;
    char ss = s0-26;
    printf("==> After operation:\n");
    printf("ss  = %s\n",&ss);
    printf("ss  = %d\n",s-26);

    printf("s   = %s\n",&s);
    printf("s   = %s\n",&s);
    printf("s   = %d\n",s);
    cout << "s  = " << s << endl;
    cout << "s  = " << int(s) << endl;

    return 0;
}
