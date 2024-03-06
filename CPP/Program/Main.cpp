#include <string>
#include <iostream>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Garage.cpp"

using namespace std;


int main() {
    Car car1("B2121XD", "Toyota", 2019, "Biru", 5, 4, 4, "Sedan");
    Motorcycle motor1("D2755PQ", "Honda", 2018, "Hitam", "Sport", 500);

    ParkingLot parkingLot_A(6);
    Garage garageA("Garasi Aku", 125);
    garageA.add_vehicle(&car1, &parkingLot_A);
    garageA.add_vehicle(&motor1, &parkingLot_A);

    Car car2("B2111XD", "Suzuki", 2019, "Biru", 2, 2, 6, "Truk");
    Car car3("F5432IZ", "Toyota", 2022, "Biru", 6, 4, 4, "CamperVan");
    Car car4("T2200XP", "Gatau", 2017, "Biru", 20, 3, 6, "Bus");

    garageA.add_vehicle(&car2, &parkingLot_A);
    garageA.add_vehicle(&car3, &parkingLot_A);
    garageA.add_vehicle(&car4, &parkingLot_A);

    garageA.display_vehicle();
    parkingLot_A.display_vehicle();

    return 0;
}