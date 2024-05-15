#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    double price;

public:
    Car(string brand, string model, int year, double price) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    void showDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    
    double getPrice() const {
        return price;
    }
    void setPrice(double price) {
        this->price = price;
    }
};

int main() {
    Car toyota("Toyota", "Corolla", 2010, 10000.00);
    toyota.showDetails();

    cout << "Price: " << toyota.getPrice() << endl;

    toyota.setPrice(15000);
    cout << "new price: " << toyota.getPrice() << endl;

    return 0;
}
