#include<bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<< " : " <<x<<"\n"

using ll = long long;

const int N = 1e5;
const ll INF = 1e9;
const int MOD = 1e9+7;


void solve(int t=1){

int n,m;
cin>>n>>m;

string s;
cin>>s;

for(int i=0;i<m;i++){


	int l,r;
	char c1,c2;
	cin>>l>>r>>c1>>c2;
	l--;
	r--;
	for(int j=l;i<=r;j++) {
		if(s[i]==c1) s[i] = c2;
	}

}
cout<<s<<"\n";
}





int main(){
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++) solve();
	return 0;

}
