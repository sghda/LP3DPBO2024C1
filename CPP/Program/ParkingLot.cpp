#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

class ParkingLot {
private:
    int kapasitas;
    int KendaraanSaatIni;
    vector<Vehicle*> vehicles;

public:
    ParkingLot(int kapasitas) : kapasitas(kapasitas), KendaraanSaatIni(0) {}

    void park_vehicle(Vehicle* vehicle) {
        if (KendaraanSaatIni < kapasitas) {
            vehicles.push_back(vehicle);
            KendaraanSaatIni++;
        }
    }

    int getKapasitas() {
        return kapasitas;
    }

    int getKendaraanSaatIni() {
        return KendaraanSaatIni;
    }

    void display_vehicle() {
        cout << ">>>> List Kendaraan di Parking Lot :\n";
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
        cout << "Kapasitas Tersedia = " << kapasitas - KendaraanSaatIni << " dari " << kapasitas << "\n";
    }
};