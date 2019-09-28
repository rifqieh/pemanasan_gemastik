#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 0;
	cin>>n;
	cout<<"tek kotek kotek kotek, anak ayam turun berkotek"<<endl;
	for(int i = n ; i>0 ; i--){
		if(i > 1){
			cout<<"anak ayam turunlah "<<i<<", mati satu tinggallah "<<i-1<<endl;
		} else{
			cout<<"anak ayam turunlah "<<i<<", mati satu tinggallah induknya"<<endl;
		}
	}
}
