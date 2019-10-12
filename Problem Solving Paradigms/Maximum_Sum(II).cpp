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


// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<string, int> &a,
              const pair<string, int> &b)
{
    return (a.second < b.second);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin >> n){
        if(n==0)
            break;
        vector<ll> v(n);
        vector<ll> ans;
        for(ll i=0; i<n; i++) cin >> v[i];
        ll sum=0, countz=0;
        for(ll i=0; i<n; i++){
            if(v[i]==0)
                countz++;
            if(sum + v[i] > sum){
                ans.pb(v[i]);
                sum+=v[i];
            }
        }
        if(n==countz)
           cout<<"0";
         else{
            for(ll i=0; i<ans.size(); i++){
              if(i!=ans.size()-1)
                cout<<ans[i]<<" ";
            else
                cout<<ans[i];
            }
         }
        cout<<endl;
    }
    return 0;
}
