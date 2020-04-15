#include <bits/stdc++.h>
using namespace std;
/*
You can simulate EOF with CTRL+D (for *nix) or CTRL+Z (for Windows) from command line.
c-x-y and M-y para list king killers
*/
/*Podria mejorar mi respuesta poniendo un vector global
asi no tendria que crear uno para cada caso, pero tendria 
que configurar sus todos a ceros*/
//vector<char> visit(3001);

void vervector(vector<int> a){
    for( auto x : a){
	cout << x << ", ";
    }
    cout << endl;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int ant,suce,dif,n;
    string aux;
    bool flag = false;
    int contador = 0;
    while(cin >> n){
	//cout << ": " << n << '\n';
	if(n > 1){
	    flag = true;
	    cin >> ant;
	    vector<int> visit(n-1,0);
	    while(cin >> suce){ // Para necesitar salir de ciclo necesita un terminador de archivo EOF sino no sale, esto ya no me deja leer mas entradas
		/*Entonces tenemos que corregirlo, ya se como con un contador*/
		//cout << "n:" << n << endl;
		//cout << "ant :" << ant << endl;
		//cout << "suce:" <<suce << endl;
		//Crea un nuevo vector cada vez que entra, esto esta mal
		//vector<int> visit(n-1,0);
		dif = abs(ant-suce);
		//cout << "dif:" << dif << endl;
		if(dif == 0 || dif > n-1 ||visit[dif-1]){ //RESTRICCIONES
		    flag = false;
		    getline(cin,aux);
		    contador = 0;
		    break;
		}
		visit[dif-1] = 1;
		//Acualizar antecesor que ahora sera sucesor
		ant = suce;
		contador++;
		//vervector(visit);
		//cout << "contador: " << contador << endl;
		if(contador == n-1){
		    contador = 0;
		    break;
		}
	    }
	    
	    //if(flag)
	    //	cout << "Jolly" << '\n';
	    //else{
	    //	cout << "Not jolly" << '\n';
		//Tenemos que borrar el buffer
		//cin.ignore();
		//getline(cin,aux);
		//}
	    
	  
	}else if( n == 1){
	    cin >> ant;
	    flag = ant == 1;
	}else
	    flag = false;
	
	cout << (flag ? "Jolly" : "Not jolly") << '\n';
	flag = false;
	
    }
    
    return 0;
}
