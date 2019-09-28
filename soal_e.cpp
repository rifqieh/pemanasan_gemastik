#include<bits/stdc++.h>
using namespace std;

int main(){
	long long mins = 1000000000;
	long long bg = -1;
	long long bp = -1;
	long long n;
	
	cin>>n;
	for(long long i=0 ; i<=n/5 ; i++){
		long long gold = 0;
		long long platinum = 0;
		long long banyak_platinum = 0;
		long long banyak_gold = 0;
		long long sisa = n;
		
		banyak_platinum = i;
		platinum = banyak_platinum*5;
		
		sisa -= platinum;
		
		if(sisa % 2 == 0){
			banyak_gold = sisa / 2;
		} else banyak_gold = 0;
		
		gold = banyak_gold*2;
		
		sisa = sisa - gold;
		
		if(sisa == 0 && banyak_gold + banyak_platinum <= mins && (banyak_platinum != 0 && banyak_gold != 0)){
			mins = banyak_gold + banyak_platinum;
			bg = banyak_gold;
			bp = banyak_platinum;
		}
	}
	if(bg == -1 && bp == -1) cout<<"MUSTAHIL"<<endl;
	else{
		cout<<bg<<" "<<bp<<endl;
	}
}
