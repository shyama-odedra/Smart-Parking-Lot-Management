#include <iostream>
#include <string>
using namespace std;

struct Car {
    string number;
    Car* next;
};

class ParkingLot {
    Car* head;
    int capacity;
    int count;
public:
    ParkingLot(int cap) {
        head = NULL;
        capacity = cap;
        count = 0;
    }

    void parkCar(string number) {
        if (count >= capacity) {
            cout << "Parking Full!\n";
            return;
        }
        Car* newCar = new Car{number, head};
        head = newCar;
        count++;
        cout << "Car " << number << " parked. Slots left: " << capacity - count << endl;
    }

    void removeCar(string number) {
        Car* temp = head;
        Car* prev = NULL;
        while (temp != NULL && temp->number != number) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Car not found!\n";
            return;
        }
        if (prev == NULL) head = temp->next;
        else prev->next = temp->next;
        delete temp;
        count--;
        cout << "Car " << number << " exited. Slots left: " << capacity - count << endl;
    }

    void displayCars() {
        Car* temp = head;
        cout << "Cars currently parked: ";
        while (temp != NULL) {
            cout << temp->number << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    ParkingLot lot(3);
    lot.parkCar("GJ06AA1111");
    lot.parkCar("GJ06BB2222");
    lot.parkCar("GJ06CC3333");
    lot.displayCars();
    lot.removeCar("GJ06BB2222");
    lot.displayCars();
    lot.parkCar("GJ06DD4444");
    lot.parkCar("GJ06EE5555"); // Overflow
    return 0;
}
