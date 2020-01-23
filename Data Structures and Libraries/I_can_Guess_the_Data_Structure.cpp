#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace __gnu_pbds;
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
// a new data structure defined. Please refer below
// GNU link : https://goo.gl/WVDL6g
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;
 
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
 
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
 
ll exp(ll x, ll p){
  if(p==0)
    return 1;
  else if(p%2==0)
    return exp(x, p/2)*exp(x, p/2);
  else
    return x*exp(x, p/2)*exp(x, p/2);
}
 
// /* Iterative Function to calculate (x^y)%p in O(log y) */
// ll power(ll x, ll y, ll p)
// {
//     ll res = 1;      // Initialize result
 
//     x = x % p;  // Update x if it is more than or 
//     // equal to p
//     while (y > 0){
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }
 
// ll arr[N];
// vector<ll> tree1(N, 0), c(N, 0) ;
 
// void build(ll node, ll start, ll end)
// {
//     if(start == end)
//     {
//         // Leaf node will have a single element
//         tree1[node]=arr[start];
//     }
//     else
//     {
//         ll mid = (start + end) / 2;
//         // Recurse on the left child
//         build(2*node, start, mid);
//         // Recurse on the right child
//         build(2*node+1, mid+1, end);
//         // Internal node will have the sum of both of its children
//         if(tree1[2*node] + tree1[2*node+1]>=10)
//         tree1[node] = (tree1[2*node] + tree1[2*node+1] )% 10;
//     }
// }
 
// ll query(ll node, ll start, ll end, ll l, ll r)
// {
//     if(r < start or end < l)
//     {    
//         // range represented by a node is completely outside the given range
//         return 0;
//     }
//     if(l <= start and end <= r)
//     {
//         // range represented by a node is completely inside the given range
//         return tree1[node];
//     }
//     // range represented by a node is partially inside and partially outside the given range
//     ll mid = (start + end) / 2;
//     ll p1 = query(2*node, start, mid, l, r);
//     ll p2 = query(2*node+1, mid+1, end, l, r);
//     return (p1 + p2);
// }
#define M 1000000007
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>> n){
        stack<ll> st;
        queue<ll> q;
        priority_queue<ll> pq;
        ll x, a;
        bool imp=false;
        int ss=1, qq=1, pqq=1;
        for(int i=0; i<n; i++){
            cin >> x >> a;
            if(x==1){
                st.push(a); q.push(a); pq.push(a);
            }
            else if(x==2){
                if(st.empty() && q.empty() && pq.empty()){
                    imp=true;
                }
                else{
                    ll elem=st.top();
                    st.pop();
                    if(elem!=a){
                        ss=0;
                        }
                    elem=q.front();
                    q.pop();
                    if(elem!=a){
                        qq=0;
                        }
                    elem=pq.top();
                    pq.pop();
                    if(elem!=a){
                        pqq=0;
                        }
                }
            }
        }
        // cout<<ss<<" "<<qq<<" "<<pqq<<endl;
        if(imp)
            cout<<"impossible"<<endl;
        else if(ss+qq+pqq>1)
            cout<<"not sure"<<endl;
        else if(ss)
            cout<<"stack"<<endl;
        else if(qq)
            cout<<"queue"<<endl;
        else if(pqq)
            cout<<"priority queue"<<endl;
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
