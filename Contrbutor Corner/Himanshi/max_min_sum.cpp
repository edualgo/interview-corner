# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class solution
{
public:
    int find_sum(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        return arr[0] + arr[arr.size()-1];
    }

};
int main()
{
    vector<int> arr;
    int key,size;
    cin >> size;
    while(size--)
    {
        cin >> key;
        arr.push_back(key);
    }
    solution sol;
    cout << sol.find_sum(arr) << endl;
    return 0;
}
