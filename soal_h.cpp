#include<bits/stdc++.h>
using namespace std;

int euclid_gcd(int x, int y){
	
	if(y == 0){
		return x;
	} else{
		return euclid_gcd(y, x % y);
	}
}

int main(){
	vector<int> number;
	int n;
	int gcd = 1;
	while(cin>>n){
		number.push_back(n);
	}
	if(number.size() == 1){
		gcd = number[0];
	} else{
		for(std::vector<int>::size_type i = 0 ; i<number.size()-1 ; i++){
			gcd = euclid_gcd(number[i], number[i+1]);
		}
	}

	cout<<gcd<<endl;
	for(std::vector<int>::size_type i = 0 ; i<number.size() ; i++){
		if(i == 0) cout<<number[i]/gcd;
		else cout<<" "<<number[i]/gcd;
	} cout<<endl;
}
