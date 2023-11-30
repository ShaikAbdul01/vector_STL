#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};
    vector<int> a = {1, 2, 3, 4};
    // v.insert(v.begin()+2,25);
    // v.insert(v.begin()+4,35);
    v.insert(v.begin() + 3, a.begin(), a.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}