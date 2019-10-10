#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i=0,n;
    vector<long long > v;
    while(cin >>n)
    {
        v.push_back(n);
        i++;
        long long z=v.size();
        if(z%2==0)
        {
            nth_element(v.begin(),v.begin()+(z/2)-1,v.end());
            nth_element(v.begin(),v.begin()+(z/2),v.end());
            cout<<(v[(z/2)]+v[(z/2)-1])/2<<endl;
        }
        else
        {
            nth_element(v.begin(),v.begin()+(z/2),v.end());
            cout<<v[z/2]<<endl;
        }
    }
    return 0;
}
