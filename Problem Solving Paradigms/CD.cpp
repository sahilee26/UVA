#include<bits/stdc++.h>
using namespace std;
 
typedef vector< int> vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
 
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(v,n) for(ll i=0; i<n; i++) cin>>v[i]
#define output(v,n) for(ll i=0; i<n; i++) cout<<v[i]<<" "
#define ll long long
 
// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
// Driver function to sort the vector elements by
// first element of pair in descending order
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
 
// Driver function to sort the vector elements by
// second element of pair in descending order
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
 
 
#define MOD 1000000007
ll n, m, ans, lartotal; 
vector<ll> v; 

void backtrack(ll total, ll mask, ll p){
    if(total> n){
        return;
    }
    if(total > lartotal){
        ans=mask;
        lartotal=total; 
    }
    if(p>=n)
        return;
    // backtrack(total+v[p], mask | (1<<p), p+1);
    // backtrack(total, mask, p+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> n >> m){
        lartotal=-1, ans=-1;
        v.clear();
        ll tracklen;
        for(ll i=0; i<m; i++){
            cin >> tracklen;
            v.pb(tracklen);
        }
        backtrack(0, 0, 0);
    
        for(ll i=0; i<m; i++){
            if(ans & (1<<i))
                cout<<v[i]<<" ";
        }
        cout<<"sum: "<<lartotal<<endl;
    }
}
