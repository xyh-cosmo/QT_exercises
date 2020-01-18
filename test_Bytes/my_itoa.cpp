#include <iostream>
#include <sstream>
#include <bitset>
#include <cstdlib>

#include "test_Bytes.h"

using namespace std;

void my_itoa( int num, char str[], unsigned int radix){

    switch (radix) {
    case 16:
        sprintf(str,"%x",num);
        break;
    case 8:
        sprintf(str,"%o",num);
        break;
    case 2:
        int2bin( num, str );
        break;
    default:
        cout << " Wrong radix: " << radix << endl;
        break;
    }
}

void int2bin( int num, char str[] ){
    std::bitset<32> b(num);
    string bb = b.to_string();
//    cout << "binary format of " << num << " is: " << bb << endl;
    sprintf(str,"%s",bb.c_str());
}
