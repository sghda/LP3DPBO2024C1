from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __Tipe = ""
    __KapasitasTangki = 0
    
    def __init__(self, NoPlat, Merk, TahunProduksi, Warna, Tipe, KapasitasTangki):
        super().__init__(NoPlat, Merk, TahunProduksi, Warna)
        self.__Tipe = Tipe
        self.__KapasitasTangki = KapasitasTangki
        
    # setter getter
    
    def setTipe(self, Tipe):
        self.__Tipe = Tipe
        
    def getTipe(self):
        return self.__Tipe
    
    def setKapasitasTangki(self, KapasitasTangki):
        self.__KapasitasTangki = KapasitasTangki
        
    def getKapasitasTangki(self):
        return self.__KapasitasTangki