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
    void showDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Toyota : public Car {
public:
    double price;
    
    Toyota(string model, int year, double price) : Car("Toyota", model, year) {
        this->price = price;
    }

    void showDetails() const {
        Car::showDetails();
        cout << "Price: " << price << endl;
    }
};

int main() {
    Toyota corolla("Corolla", 2010, 25000);
    corolla.showDetails();

    return 0;
}
