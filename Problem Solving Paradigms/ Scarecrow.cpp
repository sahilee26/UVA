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
    ll t;
    cin >> t;
    ll n;
    for(ll i=0; i<t; i++){
        cin >> n;
        string s;
        cin >> s;
        vector<pair<ll, ll> > v;
        for(ll i=0; i<s.length(); i++){
            if(s[i]=='.'){
                ll a=i;
                while(s[i+1]=='.' && i+1<s.length())i++;
                    v.pb(make_pair(a,i));
            }
        }
        ll count1=0;
        for(ll i=0; i<v.size(); i++){
            if((v[i].second-v[i].first+1)%3==0)
                count1+=((v[i].second-v[i].first+1)/3);
            else if((v[i].second-v[i].first+1)%3==2)
                count1+=((v[i].second-v[i].first)/3)+1;
             if((v[i].second-v[i].first+1)%3==1){
                count1+=(v[i].second-v[i].first+1)/3+1;
                if(i+1<v.size() && v[i+1].first==v[i].second+2 && s[v[i+1].first]=='.')
                    v[i+1].first++;
             }
            //  cout<<count1<<endl;
        }
        cout<<"Case "<<i+1<<": "<<count1<<endl;
    }
    return 0;
}
