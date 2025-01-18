// TIME COMPLEXITY   : O(n)
// SPACE COMPLEXITY  : O(n)
#include <bits/stdc++.h>
#define i32 int
#define i64 long long int
#define endl "\n"
using namespace std;
int main()
{
    i32 size; // SIZE OF THE ARRAY
    cin >> size;

    i32 arr[size];
    // Taking input from keyboard

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // FINDING THE MAGIC INDEX
    bool magic_fnd = false; // this variable will be converted to true if magic index is found
    for (i32 index = 0; index < size; index++)
    {
        int value = arr[index];
        if (value == index)
        {
            magic_fnd= true;
            cout << "The Magic Index is : " << index << endl;
        }
    }
    // IN case no magic index is found
    if (!magic_fnd)
    {
        cout << "\aNO Magic Index Found 404!";
    }
}
