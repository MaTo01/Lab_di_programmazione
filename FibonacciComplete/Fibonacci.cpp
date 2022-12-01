#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> v, string s){
	cout << s << "{ ";
	for(int i = 0; i < v.size(); ++i){
		cout << v[i];
		if(i != v.size()-1){
			cout << ", ";
		}
	} 
	cout << " }";
}

vector<int> fibonacciOverKill(int x, int y, vector<int> v, int n){
	
	if(v.size() != 0){
		v.clear();
	}
	
	if(x + y < 0 || x < 0 || y < 0){
		throw invalid_argument("I dati inseriti non sono validi\n");
	}
	
	v.push_back(x);
	v.push_back(y);
	
	for(int i = 2; i < n; ++i){
		v.push_back(v[i-2] + v[i-1]);
	}
	return v;
}

int main()
{
	string s = "Serie di fibonacci: ";
	int x, y, n;
	cout << "\nSeleziona la prima cifra della serie: ";
	cin >> x;
	cout << "\n";
	cout << "Seleziona la seconda cifra della serie: ";
	cin >> y;
	cout << "\n";
	cout << "Quanti numeri vuoi visualizzare della serie? ";
	cin >> n;
	cout << "\n";
	vector<int> v;
	try{
		v = fibonacciOverKill(x,y,v,n);
	}catch(invalid_argument& e){
		cerr<< e.what() << "I primi numeri inseriti devono essere positivi!"<< endl;
		return -1;
	}
	print(v, s);
	return 0;
}

