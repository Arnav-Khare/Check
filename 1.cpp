#include<bits/stdc++.h>
using namespace std;

#define HASHIRA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) x.begin(),x.end()
#define ub upper_bound
#define lb lower_bound
#define pb push_back
typedef long long ll;
string nline = "\n";
const ll mod = 1e9 + 7;
typedef vector<ll> vi;
typedef pair<int,int> pi;


//Binary Exponentation
ll bpow(ll a, ll b){ if (b == 0) return 1; ll res = bpow(a, b / 2) % mod; if (b & 1) return ((1ll*res * res) % mod * a) % mod; else return (res * 1ll * res) % mod; }
//gcd
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
//Inverse
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
//long long multiplication
ll mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
// long long addition
ll add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

//--------------------------------------------------------------------------------------------------//

void solution(){

    ll n;
    cin>>n;
    cout<<"Hello world";
}
//---------------------------------------------------------------------------------------------------//

int main(){
    HASHIRA
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}