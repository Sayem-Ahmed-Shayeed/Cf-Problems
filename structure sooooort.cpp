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
    return s1.mark >= s2.mark;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name:";
        getline(cin, s[i].name);
        cout << "Marks: ";
        cin >> s[i].mark;
        cin.ignore();
        cout << "id:";
        getline(cin,s[i].id);
    }
    sort(s, s + n, comparemark);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << ' ' << s[i].mark << ' ' << s[i].id << endl;
    }
}