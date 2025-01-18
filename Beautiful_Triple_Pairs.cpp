#include <bits/stdc++.h>
//_____________________

#define i64 long long
#define i32 int
#define pb push_back
#define eb emplace_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define endl '\n'
//______________________

// find in a string s.find("it")!=string::npos
#define PI 3.14159265359
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (i < high and v[i] <= pivot)
        {
            i++;
        }
        while (j > low and v[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[low], v[j]);
    return j;
}
void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pindex = partition(v, low, high);
        quicksort(v, low, pindex - 1);
        quicksort(v, pindex + 1, high);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        for (auto it : s)
        {
            if (it == 'S')
                y--;
            else if (it == 'N')
                y++;
            else if (it == 'E')
                x++;
            else
                x--;
        }
        cout << x << ' ' << y << nl;
    }
}
