#include <iostream>

using namespace std;

struct MyStruct {
    int a = -15;
    double b = 3.14159;
    float c = 1.123f;
    char d = 'F';
    bool e = true;
};

int main()
{
    // MyStruct structure;

    // cout << "Integer : " << structure.a << " With size : " << sizeof(structure.a) << endl;
    // cout << "Double : " << structure.b << " With size : " << sizeof(structure.b) << endl;
    // cout << "Float : " << structure.c << " With size : " << sizeof(structure.c) << endl;
    // cout << "Character : " << structure.d << " With size : " << sizeof(structure.d) << endl;
    // cout << "Boolean : " << (structure.e ? "True" : "False") << " With size : " << sizeof(structure.e) << endl;

    MyStruct *ptr = nullptr;

    // Size of the structure
    cout << "Size of the structure : " << sizeof(*ptr) << " Bytes" << endl;

    // Address of the structure
    cout << "Address of thr structure : " << ptr << endl;

    // Type caste the structure address into char*
    char* sturct_ptr = (char*)(ptr);
    cout << "Address of the structure as (char*) : " << &sturct_ptr << endl;
    return 0;
}
