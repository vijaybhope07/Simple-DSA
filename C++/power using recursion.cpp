typedef long long ll;
long long find_pow(ll n,ll x){
    if(x==0){
        return 1;
    }
    ll ans=find_pow(n,x/2);
    if(x%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*n;
    }
}