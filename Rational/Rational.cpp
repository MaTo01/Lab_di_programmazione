#include <iostream>

using namespace std;

int MCD(int a, int b){
	
	//precondizioni
	a = abs(a);
	b = abs(b);
	
	//swap delle variabili se in ordine sbagliato
	if(a < b){
		int temp = a;
		a = b;
		b = temp;
	}
	
	//algoritmo euclideo per MCD
	while(b != 0){
		int temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}

class Rational{
	
public:
	
	//costruttore di default con rational = 0
	Rational() :num{0}, den{1} {};
	
	//costruttore con inizializzazione
	Rational(int a, int b) :num{a}, den{b} {normalize();}
	
	void normalize(){
		if(den == 0) {throw invalid_argument("non puoi dividere per 0 un numero!");}
		if(den < 0) {
			den = -den;
			num = -num;
		}
		
		int n = MCD(num,den);
		
		if(n > 1){
			num = num/n;
			den = den/n;
		}
	}
	
	void operator=(Rational r1);
	
	double toDouble() {return double(num)/den;}
	
	int getNum() {return num;}
	int getDen() {return den;}
	
private:

	int num, den;

};

void Rational::operator=(Rational r1){
	num = r1.getNum();
	den = r1.getDen();
}

Rational operator+(Rational r1,Rational r2){
	int a = r1.getNum()*r2.getDen() + r1.getDen()*r2.getNum();
	int b = r1.getDen()*r2.getDen();
	Rational r(a,b);
	r.normalize();
	return r;
}

Rational operator-(Rational r1,Rational r2){
	int a = r1.getNum()*r2.getDen() - r1.getDen()*r2.getNum();
	int b = r1.getDen()*r2.getDen();
	Rational r(a,b);
	r.normalize();
	return r;
}

Rational operator*(Rational r1,Rational r2){
	int a = r1.getNum()*r2.getNum();
	int b = r1.getDen()*r2.getDen();
	Rational r(a,b);
	r.normalize();
	return r;
}

Rational operator/(Rational r1,Rational r2){
	int a = r1.getNum()*r2.getDen();
	int b = r1.getDen()*r2.getNum();
	Rational r(a,b);
	r.normalize();
	return r;
}

bool operator==(Rational r1, Rational r2){
	int a = r1.getNum() == r2.getNum();
	int b = r1.getDen() == r2.getDen();
	
	if(a && b) {return true;}
	else {return false;}
}

bool operator>(Rational r1, Rational r2){
	double a = r1.getNum()/r1.getDen();
	double b = r2.getNum()/r2.getDen();
	
	if(a > b) {return true;}
	else {return false;}
}

bool operator<(Rational r1, Rational r2){
	double a = r1.getNum()/r1.getDen();
	double b = r2.getNum()/r2.getDen();
	
	if(a < b) {return true;}
	else {return false;}
}

ostream& operator<<(ostream& op, Rational r1){
	return op << r1.getNum() << "/" << r1.getDen();
}


int main(void){
	
	int a, b, c, d;
	
	cout << "inserisci il numeratore del primo razionale: ";
	cin >> a;
	cout << "inserisci il denominatore del primo razionale: ";
	cin >> b;
	cout << "inserisci il numeratore del secondo razionale: ";
	cin >> c;
	cout << "inserisci il denominatore del secondo razionale: ";
	cin >> d;
	try{
		Rational rational1(a,b);
		Rational rational2(c,d);
	
		cout << "primo numero razionale: " << rational1 
	     	     << " = " << rational1.toDouble() << endl;
		cout << "secondo numero razionale: " << rational2 
	     	     << " = " << rational2.toDouble() << endl;
	
		Rational rationalOperatorPlus = rational1 + rational2;
		Rational rationalOperatorMinus = rational1 - rational2;
		Rational rationalOperatorMul = rational1 * rational2;
		Rational rationalOperatorDivide = rational1/rational2;
	
		//stampa r1 + r2
		cout << "\nSomma: " << rationalOperatorPlus 
	    	     << " = " << rationalOperatorPlus.toDouble() << endl;
		
		//stampa r1 - r2
		cout << "Sottrazione: " << rationalOperatorMinus 
	     	     << " = " << rationalOperatorMinus.toDouble() << endl;
	
		//stampa r1 * r2
		cout << "Moltiplicazione: " << rationalOperatorMul 
	     	     << " = " << rationalOperatorMul.toDouble() << endl;
	
		//stampa r1 / r2
		cout << "Divisione: " << rationalOperatorDivide 
	     	     << " = " << rationalOperatorDivide.toDouble() << endl;
	
		if(rational1 == rational2){
			cout << "\nI due numeri sono uguali" << endl;
		}else if(rational1 > rational2){
			cout << "\nil primo numero inserito e' maggiore del secondo" << endl;
		}else if(rational1 < rational2){
			cout << "\nil secondo numero inserito e' maggiore del primo" << endl;
		}
	
	}catch(invalid_argument& e){
		cerr<<e.what()<<endl;
		return -1;
	}
	return 0;
	
}
