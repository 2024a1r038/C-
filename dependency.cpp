#include <iostream>
using namespace std;

class Passenger {
private:
    int pid;
    string name;
    int age;

public:
    void getPassenger() {
        cin >> pid >> name >> age;
    }

    void showPassenger() {
        cout << "Passenger Details\n";
        cout << "ID: " << pid << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Car {
private:
    int carNo;
    string model;

public:
    void getCar() {
        cin >> carNo >> model;
    }

    
    void showCarDetails(Passenger p) {
        p.showPassenger();

        cout << "Car Details\n";
        cout << "Car Number: " << carNo << endl;
        cout << "Model: " << model << endl;
        
    }
};

int main() {
    const int n = 4;

    Passenger p[n]; 
    Car c[n];

    for(int i = 0; i < n; i++) {
        p[i].getPassenger();
        c[i].getCar();
    }

    cout << "\nOutput:\n";

    for(int i = 0; i < n; i++) {
        c[i].showCarDetails(p[i]);   
    }

    return 0;
}
