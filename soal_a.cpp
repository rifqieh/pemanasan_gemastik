#include<bits/stdc++.h>
using namespace std;

int main(){
	double x, y, z, besar, bil1, bil2;
	bool kondisi1, kondisi2, kondisi3;
	cin>>x;
	cin>>y;
	cin>>z;
	if((x + y) > z) kondisi1 = true;
	else kondisi1 = false;
	if((x + z) > y) kondisi2 = true;
	else kondisi2 = false;
	if((y + z) > x) kondisi3 = true;
	else kondisi3 = false;
	
	if(kondisi1 == true && kondisi2 == true && kondisi3 == true) cout<<"TRUE"<<endl;
	else cout<<"FALSE"<<endl; 
}
