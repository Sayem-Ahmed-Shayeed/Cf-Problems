#include <bits/stdc++.h>
#include <string>
using namespace std;

struct student
{
    string name;
    int mark;
    string id;
};
bool comparemark(student s1, student s2)
{
    if (s1.mark >= s2.mark)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "How many students: ";
    cin >> n;
    cin.ignore(); // Clear the input buffer

    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Student no " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, s[i].name);
        cout << "Mark: ";
        cin >> s[i].mark;
        cin.ignore(); // Clear the newline character left in the buffer
        cout << "ID: ";
        getline(cin, s[i].id);
    }

    sort(s, s + n, comparemark);
    cout << "Student details:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << ' ' << s[i].mark << ' ' << s[i].id << endl;
    }
    return 0;
}
