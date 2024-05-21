#include "MyStruct.h"

#include <iostream>

using namespace std;

int main()
{
    MyStruct structure;

    // cout << "Integer : " << structure.a << " With size : " << sizeof(structure.a) << endl;
    // cout << "Double : " << structure.b << " With size : " << sizeof(structure.b) << endl;
    // cout << "Float : " << structure.c << " With size : " << sizeof(structure.c) << endl;
    // cout << "Character : " << structure.d << " With size : " << sizeof(structure.d) << endl;
    // cout << "Boolean : " << (structure.e ? "True" : "False") << " With size : " << sizeof(structure.e) << endl;

    // Size of the structure
    cout << "Size of the structure : " << sizeof(structure) << " Bytes" << endl;

    // Address of the structure
    cout << "Address of thr structure : " << &structure << endl;

    char* struct_char_ptr = reinterpret_cast<char*>(&structure);

    // int* intPtr = reinterpret_cast<int*>(struct_char_ptr);
    // double* doublePtr = reinterpret_cast<double*>(struct_char_ptr + sizeof(int));
    // float* floatPtr = reinterpret_cast<float*>(struct_char_ptr + sizeof(int) + sizeof(double));
    // char* charPtr = reinterpret_cast<char*>(struct_char_ptr + sizeof(int) + sizeof(double) + sizeof(float));
    // bool* boolPtr = reinterpret_cast<bool*>(struct_char_ptr + sizeof(int) + sizeof(double) + sizeof(float) + sizeof(char));

    // cout << "Size of int : " << sizeof(int) << endl;
    // cout << "Size of double : " << sizeof(double) << endl;
    // cout << "Size of float : " << sizeof(float) << endl;
    // cout << "Size of char : " << sizeof(char) << endl;
    // cout << "Size of bool : " << sizeof(bool) << endl;

    // cout << "a : " << *intPtr << endl;
    // cout << "b : " << *doublePtr << endl;
    // cout << "c : " << *floatPtr << endl;
    // cout << "d : " << *charPtr << endl;
    // cout << "e : " << *boolPtr << endl;

    // Type caste the structure address into char*
    cout << "Address of the structure as (char*) : " << static_cast<void*>(struct_char_ptr) << endl;
    return 0;
}
