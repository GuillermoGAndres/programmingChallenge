#include <bits/stdc++.h>
using namespace std;
/*
You can simulate EOF with CTRL+D (for *nix) or CTRL+Z (for Windows) from command line.
*/

int main(){
    int ant,suce,dif,n;
    bool flag = true;
    while(cin >> n){
	if(n > 0){
	    cin >> ant;
	    while(cin >> suce){
		cout << suce << endl;
		vector<char> visit(n-1);
		dif = abs(ant-suce);
		if(dif == 0 || dif >= n-1 ||visit[dif]){ //RESTRICCIONES
		    flag = false;
		    break;
		}
		visit[dif] = 1;
	    }
	    
	    if(flag)
		cout << "Jolly" << '\n';
	    else
		cout << "Not Jolly" << '\n';
	    flag = true;
	  
	}else
	    cout << "Not Jolly"<< '\n';
	
	
    }
    
    return 0;
}
