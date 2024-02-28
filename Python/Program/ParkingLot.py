from Car import Car
from Motorcycle import Motorcycle

class ParkingLot:
    __kapasitas = 0
    __KendaraanSaatIni = 0
    __vehicles = []
        
    def __init__(self, kapasitas):
        self.__kapasitas = kapasitas
        ParkingLot.__KendaraanSaatIni=0
        self.__vehicles = []
        
    def park_vehicle(self, vehicle):
        if self.__KendaraanSaatIni < self.__kapasitas:
            self.__vehicles.append(vehicle)
            self.__KendaraanSaatIni +=1
        
    # setter getter
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
        
    def getKapasitas(self):
        return self.__kapasitas
    
    def setKendaraanSaatIni(self, KendaraanSaatIni):
        self.__KendaraanSaatIni = KendaraanSaatIni
        
    def getKendaraanSaatIni(self):
        return self.__KendaraanSaatIni
    
    def display_vehicle(self):
        print(">>>> List Kendaraan di Parking Lot :")
        for vehicle in self.__vehicles:
            print("Plat Nomor :", vehicle.getNoPlat())
            print("Merk :", vehicle.getMerk())
            print("Tahun Produksi :", vehicle.getTahunProduksi())
            print("Warna :", vehicle.getWarna())
            if isinstance(vehicle, Car):
                print("Banyak Kursi :", vehicle.getJumlahKursi())
                print("Banyak Pintu :", vehicle.getJumlahPintu())
                print("Banyak Roda :", vehicle.getJumlahRoda())
                print("Tipe :", vehicle.getTipe())
            elif isinstance(vehicle, Motorcycle):
                print("Tipe :", vehicle.getTipe())
                print("Kapasitas Tangki :", vehicle.getKapasitasTangki())
            print()    
        print("Kapasitas Tersedia =", self.__kapasitas-self.__KendaraanSaatIni, "dari", self.__kapasitas)