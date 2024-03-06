#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"

using namespace std;

class Garage {
private:
    string namaGarasi;
    int luas;
    vector<Vehicle*> vehicles;

public:
    Garage(string namaGarasi, int luas) : namaGarasi(namaGarasi), luas(luas) {}

    void moveToParkingLot(Vehicle* vehicle, ParkingLot* parkingLot) {
        parkingLot->park_vehicle(vehicle);
    }

    void add_vehicle(Vehicle* vehicle, ParkingLot* parkingLot) {
        if (vehicles.size() < 2) {
            vehicles.push_back(vehicle);
            cout << "Berhasil menambahkan kendaraan dengan Plat " << vehicle->getNoPlat() << " ke garasi\n";
        } else {
            cout << "Garasi Penuh, Kendaraan dengan Plat " << vehicle->getNoPlat() << " dipindahkan ke Parking Lot\n";
            moveToParkingLot(vehicle, parkingLot);
        }
    }

    void display_vehicle() {
        cout << ">>>> List Kendaraan di " << namaGarasi << ":\n";
        for (Vehicle* vehicle : vehicles) {
            cout << "Plat Nomor : " << vehicle->getNoPlat() << "\n";
            cout << "Merk : " << vehicle->getMerk() << "\n";
            cout << "Tahun Produksi : " << vehicle->getTahunProduksi() << "\n";
            cout << "Warna : " << vehicle->getWarna() << "\n";
            if (dynamic_cast<Car*>(vehicle)) {
                Car* car = dynamic_cast<Car*>(vehicle);
                cout << "Banyak Kursi : " << car->getJumlahKursi() << "\n";
                cout << "Banyak Pintu : " << car->getJumlahPintu() << "\n";
                cout << "Banyak Roda : " << car->getJumlahRoda() << "\n";
                cout << "Tipe : " << car->getTipe() << "\n";
            } else if (dynamic_cast<Motorcycle*>(vehicle)) {
                Motorcycle* motor = dynamic_cast<Motorcycle*>(vehicle);
                cout << "Tipe : " << motor->getTipe() << "\n";
                cout << "Kapasitas Tangki : " << motor->getKapasitasTangki() << "\n";
            }
            cout << "\n";
        }
    }
};