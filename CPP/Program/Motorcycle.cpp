#pragma once

#include <string>
#include <iostream>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle {
private:
    string Tipe;
    int KapasitasTangki;

public:
    Motorcycle(string NoPlat, string Merk, int TahunProduksi, string Warna,
               string Tipe, int KapasitasTangki)
        : Vehicle(NoPlat, Merk, TahunProduksi, Warna), Tipe(Tipe), KapasitasTangki(KapasitasTangki) {}

    void setTipe(string Tipe) {
        this->Tipe = Tipe;
    }

    string getTipe() {
        return Tipe;
    }

    void setKapasitasTangki(int KapasitasTangki) {
        this->KapasitasTangki = KapasitasTangki;
    }

    int getKapasitasTangki() {
        return KapasitasTangki;
    }

    void printDetails() const override {
        cout << "Motorcycle details:\n";
        cout << "Plat Nomor : " << getNoPlat() << "\n";
        cout << "Merk : " << getMerk() << "\n";
        cout << "Tahun Produksi : " << getTahunProduksi() << "\n";
        cout << "Warna : " << getWarna() << "\n";
        cout << "Tipe : " << Tipe << "\n";
        cout << "Kapasitas Tangki : " << KapasitasTangki << "\n";
        
    }
};