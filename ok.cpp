#include <bits/stdc++.h>
using namespace std;
vector<int> applyOperations(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }
    int left = -1;
    int zero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            if (left == -1)
            {
                left = i;
            }
            zero++;
        }
        else
        {
            if (zero > 0)
            {
                swap(nums[left], nums[i]);
                zero--;
                if (nums[i + 1] == 0)
                {
                    zero++;
                }
                if (zero == 0)
                {
                    left = -1;
                }
                else
                {
                    left++;
                }
            }
        }
    }
    return nums;
}
int main()
{
    vector<int> v = {1,2,2,1,1,0};
    vector<int>res=applyOperations(v);
    for(auto it:res){
        cout<<it<<' ';
    }
}