#include <iostream>

using namespace std;

int main()
{

    unsigned char a[4]="";
//    int a[4];
    a[0] = 0xfe;
    a[1] = 0xff;
    a[2] = 0x7f;
    a[3] = 0x00;

    for( int i=0; i<4; ++i ){
        cout << "a[" << i << "] = " << int(a[i]) << endl;
    }

    char32_t b = 12345555;

    cout << " b = " << b << endl;

    return 0;
}
