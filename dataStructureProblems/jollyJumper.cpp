#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    stack<int> s;
    int n = 0;
    int num;
    while(cin >> num){
	s.push(num);
	n++;
    }
    int ant=0;
    int diference;
    while(!s.empty()){
	diference = abs(ant-s.top());
	//cout << diference << endl;
	//cout << n-1 << endl;
	if(!( diference <= n-1)){
		cout << "Not jolly" << "\n";
		return 1;
		//break;
	    }
	ant = s.top(); s.pop();
	diference = 0;
    }
    cout << "Jolly" << '\n';
    return 0;
}
