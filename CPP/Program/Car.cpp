#pragma once

#include <string>
#include <iostream>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle {
private:
    int JumlahKursi;
    int JumlahPintu;
    int JumlahRoda;
    string Tipe;

public:
    Car(string NoPlat, string Merk, int TahunProduksi, string Warna,
        int JumlahKursi, int JumlahPintu, int JumlahRoda, string Tipe)
        : Vehicle(NoPlat, Merk, TahunProduksi, Warna), JumlahKursi(JumlahKursi),
        JumlahPintu(JumlahPintu), JumlahRoda(JumlahRoda), Tipe(Tipe) {}

    void setJumlahKursi(int JumlahKursi) {
        this->JumlahKursi = JumlahKursi;
    }

    int getJumlahKursi() {
        return JumlahKursi;
    }

    void setJumlahPintu(int JumlahPintu) {
        this->JumlahPintu = JumlahPintu;
    }

    int getJumlahPintu() {
        return JumlahPintu;
    }

    void setJumlahRoda(int JumlahRoda) {
        this->JumlahRoda = JumlahRoda;
    }

    int getJumlahRoda() {
        return JumlahRoda;
    }

    void setTipe(string Tipe) {
        this->Tipe = Tipe;
    }

    void printDetails() const override {
        cout << "Car details:\n";
        cout << "Plat Nomor : " << getNoPlat() << "\n";
        cout << "Merk : " << getMerk() << "\n";
        cout << "Tahun Produksi : " << getTahunProduksi() << "\n";
        cout << "Warna : " << getWarna() << "\n";
        cout << "Banyak Kursi : " << JumlahKursi << "\n";
        cout << "Banyak Pintu : " << JumlahPintu << "\n";
        cout << "Banyak Roda : " << JumlahRoda << "\n";
        cout << "Tipe : " << Tipe << "\n";
    }

    string getTipe() {
        return Tipe;
    }
};