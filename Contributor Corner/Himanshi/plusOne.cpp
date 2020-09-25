# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class solution
{
public:
    vector<int> plusOne(vector<int>& arr)
    {
       int n = arr.size();

       arr[n-1] += 1;
       int hand = arr[n-1]/10;
       arr[n-1] = arr[n-1] % 10;

        for (int i=n-2; i>=0; i--)
        {
            if (hand == 1)
            {
               arr[i] += 1;
               hand = arr[i]/10;
               arr[i] = arr[i] % 10;
            }
        }

        if (hand == 1)
          arr.insert(arr.begin(), 1);
            return arr;
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
    vector<int> arr2;
    arr2 = sol.plusOne(arr);
    for(int i=0;i<arr2.size();i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
