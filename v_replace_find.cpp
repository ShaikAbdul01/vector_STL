#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    /* vector<int> v = {1, 3, 23, 4, 2, 4, 5, 3, 2, 3, 4, 6, 3, 1,2};
    // replace(v.begin(),v.end(),2,1000);
    replace(v.begin(),v.end()-1,2,1000);
    for (int x : v)
    {
        cout << x << " ";
    } */

    // find

    vector<int> v = {1, 3, 23, 4, 2, 4, 5, 3, 2, 3, 4, 6, 3, 1, 2};

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 100);

    if (it != v.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    // cout << *it << " ";
    return 0;
}