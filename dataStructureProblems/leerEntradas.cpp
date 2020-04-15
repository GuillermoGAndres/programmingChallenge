#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream file;
    file.open("input.txt");
    //Para un archivo
    //getline(cin,line);
    //getline(file,line);
    
    string line;
    int number;
    string nombre;
    int num2;
    while( getline(file, line) ){
	cout << line << endl;
	/*Esto para poder extraer datos de una cadena que contenga
	  int's, float's, string's.*/
	istringstream iss(line);
	iss >> number;
	//iss >> nombre;
	iss >> num2;
	cout << number << endl;
	//cout << nombre << endl;
	cout << num2 << endl;
    }
    return 0;
}
