#include "MyStruct.h"

#include <iostream>

using namespace std;

int main()
{
    MyStruct structure;

    cout << "Integer : " << structure.a << " With size : " << sizeof(structure.a) << endl;
    cout << "Double : " << structure.b << " With size : " << sizeof(structure.b) << endl;
    cout << "Float : " << structure.c << " With size : " << sizeof(structure.c) << endl;
    cout << "Character : " << structure.d << " With size : " << sizeof(structure.d) << endl;
    cout << "Boolean : " << (structure.e ? "True" : "False") << " With size : " << sizeof(structure.e) << endl;

    // Size of the structure
    cout << "Size of the structure : " << sizeof(structure) << " Bytes" << endl;

    // Address of the structure
    cout << "Address of thr structure : " << &structure << endl;

    // Type caste the structure address into char*
    char* sturct_ptr = (char*)(&structure);
    cout << "Address of the structure as (char*) : " << &sturct_ptr << endl;
    return 0;
}
