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
ll n;
vector<ll> v;
bool isStrength(ll minStr){
    for(ll i=0; i<n; i++){
        if(v[i+1]-v[i]>minStr)
            return false;
        else if(v[i+1]-v[i]==minStr)
            minStr--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(ll j=0; j<t; j++){
        v.clear();
        cin >> n;
        v.pb(0);
        for(ll i=0; i<n; i++){
            ll a; cin >> a; v.pb(a);
        }
        ll low=1, high=10000000, mid;
        ll ans=10000000;
        while(low<=high){
            mid=(low+high)/2;
            if(isStrength(mid)){
                high=mid-1;
                ans=mid;
            }
            else
                low=mid+1;
        }
        cout<<"Case "<<j+1<<": "<<ans<<endl;
    }
    return 0;

}
