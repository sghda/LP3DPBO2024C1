#pragma once

#include <string>
#include <iostream>

using namespace std;

class Vehicle {
private:
    string NoPlat;
    string Merk;
    int TahunProduksi;
    string Warna;

public:
    Vehicle(string NoPlat, string Merk, int TahunProduksi, string Warna)
        : NoPlat(NoPlat), Merk(Merk), TahunProduksi(TahunProduksi), Warna(Warna) {}

    void setNoPlat(string NoPlat) {
        this->NoPlat = NoPlat;
    }

    string getNoPlat() const {
        return NoPlat;
    }

    void setMerk(string Merk) {
        this->Merk = Merk;
    }

    string getMerk() const {
        return Merk;
    }

    void setTahunProduksi(int TahunProduksi) {
        this->TahunProduksi = TahunProduksi;
    }

    int getTahunProduksi() const {
        return TahunProduksi;
    }

    void setWarna(string Warna) {
        this->Warna = Warna;
    }

    string getWarna() const {
        return Warna;
    }

    virtual void printDetails() const = 0;
};