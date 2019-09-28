#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
	cin>>n;
	if(n == 1 || n == 3) cout<<"MUSTAHIL"<<endl;
	else if(n<=8 && n%2 == 0) cout<<n/2<<" "<<0<<endl;
	else if(n %5 == 0) cout<<0<<" "<<n/5<<endl;
	else{
		if((n-1) % 5 == 0){
			cout<<3<<" "<<(n/5)-1<<endl;
		} else if((n-2) % 5 == 0){
			cout<<1<<" "<<(n/5)<<endl;
		} else if((n-3) % 5 == 0){
			cout<<4<<" "<<(n/5)-1<<endl;
		} else if((n-4) % 5 == 0){
			cout<<2<<" "<<(n/5)<<endl;
		}
	}
}
