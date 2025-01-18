#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    string color_str[3]; // Array of strings
    char color_char[3][10]; // Array of character arrays
    const char *color_ptr[3]; // Array of pointers to const char
    array<string, 3> arr_str; // Array of strings with size 3

    // Example usage:
    v.push_back("Red");
    color_str[0] = "Blue";
    strcpy(color_char[0], "Green");
    color_ptr[0] = "Yellow";
    arr_str[0] = "Orange";

    // Displaying values (just for demonstration)
    cout << "Vector:" << endl;
    for (const auto &color : v)
        cout << color << endl;

    cout << "String array:" << endl;
    for (const auto &color : color_str)
        cout << color << endl;

    cout << "Character array:" << endl;
    for (const auto &color : color_char)
        cout << color << endl;

    cout << "Pointer array:" << endl;
    for (const auto &color : color_ptr)
        cout << color << endl;

    cout << "Array of strings:" << endl;
    for (const auto &color : arr_str)
        cout << color << endl;

    return 0;
}
