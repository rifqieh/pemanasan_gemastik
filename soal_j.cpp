#include<bits/stdc++.h>
using namespace std;

int main(){
	int j = 0;
	int kondisi = true;
	int a, b, n;
	while(cin>>n){
		if(j == 0) a = n;
		if(j == 1) b = n;
		if(j >= 2){
			if(n != (a + b)) kondisi = false;
			a = b;
			b = n;
		}
		j++;
	}
	if(kondisi) {
		cout<<"BENAR"<<endl;
	} else{
		cout<<"SALAH"<<endl;
	}
}
