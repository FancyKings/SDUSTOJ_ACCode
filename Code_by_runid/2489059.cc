#include <bits/stdc++.h>

using namespace std;

class Car {
public:
	static int cntOfCars;
	static int getCntOfCars() {
		return cntOfCars;
	}
	double c;
	int id;
	Car(double t = 0) :c(t), id(getCntOfCars()) {
		cntOfCars++;
		cout << "The " << id << "th car is created." << endl;
	}
	~Car() {
		// cout << "The " << id << "th car is erased." << endl;
	}
};

class  OilCar :public Car {
public:
	static int cntOfOilCars;
	static int getCntOfOilCars() {
		return cntOfOilCars;
	}
	int id;
	double o;
	double p;
	OilCar(double a = 0, double b = 0) :Car(a), o(b), id(getCntOfOilCars()) {
		cntOfOilCars++;
		p = a;
		cout << "The " << id << "th oil-car is created." << endl;
	}
	void set(double pp,double q) {
		p = pp;
		o = q;
	}
	void show() {
		cout << "An oil-car at speed of " << OilCar::p
			<< "km/s, with " << OilCar::o << "L/100km." << endl;
	}
	~OilCar() {
		// cout << "The " << OilCar::id << "th oil-car is erased." << endl;
	}
};

class  ElecCar :public Car {
public:
	double p;
	int id;
	double q;
	static int cntOfElecCar;
	static int getCntOfElecCars() {
		return cntOfElecCar;
	}
	ElecCar(double a = 0, double b = 0) :Car(a), p(b), id(getCntOfElecCars()) {
		cntOfElecCar++;
		q = a;
		cout << "The " << id << "th electrical car is created." << endl;
	}
	~ElecCar() {
		// cout << "The " << id << "th electrical car is erased." << endl;
	}
	void show() {
		cout << "An electrical car at speed of " << q
			<< "km/s, with " << p << "KW/100km." << endl;
	}
	void set(double pp, double qq) {
		q = pp;
		p = qq;
	}
};

class CarHall {
public:
	OilCar* veco;
	ElecCar* vece;
	int b, e;
	void getInfo() {
		b = e = 0;
		cin >> b;
		veco = new OilCar[b];
		double p, q;
		for (int i = 0; i < b; i++) {
			cin >> p >> q;
			veco[i].set(p, q);
		}
		cin >> e;
		vece = new ElecCar[e];
		for (int i = 0; i < e; i++) {
			cin >> p >> q;
			vece[i].set(p, q);
		}
		return;
	}
	void showInfo() {
		cout << "We have " << b << " oil-cars, which are:" << endl;
		for (unsigned int i = 0; i < b ; i++) {
			veco[i].show();
		}
		cout << "We have " << e << " electrical cars, which are:" << endl;
		for (unsigned int i = 0; i < e; i++) {
			vece[i].show();
		}
		return;
	}
};

int Car::cntOfCars = 1;
int OilCar::cntOfOilCars = 1;
int ElecCar::cntOfElecCar = 1;

int main()
{
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}
/**************************************************************
	Problem: 2201
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

