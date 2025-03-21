#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

// Dywang - Take the dream away //

void tong(string x, string y){
	int nho = 0;
	for(int i = x.size(); i>= 0; i--){
		int sum = x[i] - '0' + y[i] - '0' + nho;
		if(sum > 9){
			sum -= 10;
			nho = 1;
		}
		else nho = 0;
		x[i] = sum + '0';
	}
	if(nho == 1) x = "1" + x;
	cout << x << "\n";
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string x, y;
		cin >> x >> y;
		while(x.size() < y.size()) x = "0" + x;
		while(x.size() > y.size()) y = "0" + y;
		if(x < y){
			string tmp = x;
			x = y; 
			y = tmp;
		}
		tong(x, y);
	}
	return 0;
}
