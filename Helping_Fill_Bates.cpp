#include<bits/stdc++.h>
using namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;

#define ff first
#define ss second
#define ll long long
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(v,n) for(ll i=0; i<n; i++) cin>>v[i]
#define output(v,n) for(ll i=0; i<n; i++) cout<<v[i]<<" "
#define MOD 1000000007
#define N 2005
#define deb(x) cout<<#x <<" "<<x<<endl;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string ss;
    cin >> ss;
    map<char, vector<ll> > mp1;
    for(ll i=0; i<ss.length(); i++){
        mp1[ss[i]].pb(i);
    }
    int q ;
    cin >> q;
    string s;
    while(q--){
        cin >> s;
        int ind =-1, a=0;
        bool fin = true;
        for(int j=0; j<s.size(); j++) {
            auto low = upper_bound(mp1[s[j]].begin(), mp1[s[j]].end(), ind);

            if(low == mp1[s[j]].end()){
                fin = false;
                break;
            }
            // cout<<*low<<endl;
            ind=(*low);
            if(j==0)
                a=ind;

        }
        if(fin)
            cout<<"Matched "<<a<<" "<<ind<<endl;
        else
            cout<<"Not matched\n";
    }
    return 0;
}
