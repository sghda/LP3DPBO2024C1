from Car import Car 
from Motorcycle import Motorcycle
from ParkingLot import ParkingLot

class Garage:
    __namaGarasi = ""
    __luas = 0
    __vehicles = []
    
    def __init__(self,namaGarasi,luas):
        self.__namaGarasi = namaGarasi
        self.__luas = luas
        self.__vehicles = []
        
    def setNamaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi
        
    def getNamaGarasi(self):
        return self.__namaGarasi
    
    def setLuasGarasi(self, luasGarasi):
        self.__luas = luasGarasi
        
    def getNamaGarasi(self):
        return self.__luas
    
    def setVehicles(self, vehicle):
        self.__vehicles = vehicle
        
    def getVehicles(self):
        return self.__vehicles
    
    def moveToParkingLot(self, vehicle, parkingLot):
        parkingLot.park_vehicle(vehicle) 
        
    def add_vehicle(self, vehicle, parkingLot):
        if len(self.__vehicles) < 2:
            self.__vehicles.append(vehicle) 
            print("Berhasil menambahkan kendaraan dengan Plat", vehicle.getNoPlat(), "ke garasi")
        else:
            print("Garasi Penuh, Kendaraan dengan Plat", vehicle.getNoPlat(), "dipindahkan ke Praking Lot")
            self.moveToParkingLot(vehicle, parkingLot)
        
    def display_vehicle(self):
        print(">>>> List Kendaraan di", self.__namaGarasi + ":")
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
            
    