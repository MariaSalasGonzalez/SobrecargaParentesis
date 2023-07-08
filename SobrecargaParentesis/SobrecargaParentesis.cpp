#include <iostream>
using namespace std;

class Pareja { //aca iria un struct

private:
	int x, y;

public:
	Pareja(int a=0, int b=0):x(a), y(b) {

	}

	void operator()() {
		cout << "Pareja: {" << x << "," << y << "}" << endl;
	}

	int operator()(int z) { //Este operador toma ese onjeto 
		return x + y - z;   //y se puede jugar con los atributos
	}

	//como nada retorna estoy impirmiendo algo
	//aca entra un 5 y un 6
	void operator()(int a, int b) { 
		x = x + a; //x =10;
		y = b - 10; //y = -4;
	}
};

int main() {
	//Pareja V = { 2,3 }; //esto se carga asi porque todo esta public
	Pareja V(2,3);//Creando un onjeto V con parametros 2 y 3.
	cout << "---------Sobrecarga (1)----------" << endl;
	V();
	cout << endl << endl << endl << endl;
	cout << "---------Sobrecarga (2)----------" << endl;
	cout<<"El resultado de la sobrecarga (2) es: "<< V(8)<<endl; 
	cout << endl;
	cout << "---------Sobrecarga (3)----------" << endl;
	cout << "El resultado de la sobrecarga (3) es: " <<endl;
	V(5, 6);
	V();
	cout << endl;
	cout << endl << endl << endl << endl;
	system ("pause");
	return 0;
}
