#include <bits/stdc++.h>
using namespace std;
int n;
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (v[i] <= pivot and i < high)
        {
            i++;
        }
        while (v[j] > pivot and j > low)
        {
            j--;
        }
        if (i < j) //
            swap(v[i], v[j]);
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
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    quicksort(v, 0, n - 1);
    void quicksort(vector<int> & v, int low, int high)
    {
        if (low < high)
        {
            int pindex = partition(v, low, high);
            quicksort(v, low, pindex - 1);
            quicksort(v, pindex + 1, high);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
}