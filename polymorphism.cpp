#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void show_details() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void fun(){
        cout << "Car can run" << endl;
    }
};

class Toyota : public Car {
public:
    double price;
    
    Toyota(string model, int year, double price) : Car("Toyota", model, year) {
        this->price = price;
    }

    void fun(){
        cout << "Toyota can run" << endl;
    }
};

int main() {
    Toyota car1("Corolla", 2010, 25000);
    car1.show_details();
    car1.fun();

    return 0;
}
