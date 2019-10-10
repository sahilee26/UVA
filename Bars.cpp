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
bool isInt(char a){
    if(a-'0'>=0 && a-'0'<=9)
        return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
       ll n, p;
       cin >> n >> p;
       ll arr[p];
       for(ll i=0; i<p; i++) cin>> arr[i];
       int flag=0;
       for (int i = 0; i < (1 << p); i++) { // for each subset, O(2^n)
            int sum = 0;
            for (int j = 0; j < p; j++){ // check membership, O(n)
                if (i & (1 << j)) // test if bit ‘j’ is turned on in subset ‘i’?
                     sum += arr[j]; // if yes, process ‘j’
            }
            if (sum == n) {
                flag=1;
                break;// the answer is found: bitmask ‘i’
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
