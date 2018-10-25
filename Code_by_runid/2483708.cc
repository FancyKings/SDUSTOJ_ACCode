#include <bits/stdc++.h>

using namespace std;

class Car{
public:
    static int cntOfCars;
    static int getCntOfCars(){
        return cntOfCars;
    }
    double c;
    int id;
    Car(double t = 0):c(t),id(getCntOfCars()){
        cntOfCars++;
        cout << "The " << id  << "th car is created." << endl;
    }
    ~Car(){
        cout << "The " << id << "th car is erased." << endl;
    }
};

class  OilCar:public Car{
public:
    static int cntOfOilCars;
    static int getCntOfOilCars(){
        return cntOfOilCars;
    }
    int id;
    double o;
    OilCar(double a = 0,double b = 0):Car(a),o(b),id(getCntOfOilCars()){
        cntOfOilCars++;
        cout << "The " << id << "th oil-car is created." << endl;
    }
    void show(){
        cout << "An oil-car at speed of " <<  Car::c
        << "km/s, with " << OilCar::o << "L/100km." << endl;
    }
    ~OilCar(){
        cout << "The " << OilCar::id << "th oil-car is erased." << endl;
    }
};

class  ElecCar:public Car{
public:
    double p;
    int id;
    static int cntOfElecCar;
    static int getCntOfElecCars(){
        return cntOfElecCar;
    }
    ElecCar(double a = 0,double b = 0):Car(a),p(b),id(getCntOfElecCars()){
        cntOfElecCar++;
        cout << "The " << id << "th electrical car is created." << endl;
    }
    ~ElecCar(){
        cout << "The " << id << "th electrical car is erased." << endl;
    }
    void show(){
        cout << "An electrical car at speed of " << Car::c
        << "km/s, with " << p << "KW/100km." << endl;
    }
};

int Car::cntOfCars = 1;
int OilCar::cntOfOilCars = 1;
int ElecCar::cntOfElecCar = 1;

int main()
{
    double power, oil, speed;
    cin>>speed>>oil;
    OilCar one(speed, oil);
    one.show();
    cin>>speed>>power;
    ElecCar two(speed, power);
    two.show();
    return 0;
}
/**************************************************************
	Problem: 2199
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

