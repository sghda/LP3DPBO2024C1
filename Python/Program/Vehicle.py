class Vehicle:
    __NoPlat = ""
    __Merk = ""
    __TahunProduksi = 0
    __Warna = ""
        
    def __init__(self, NoPlat, Merk, TahunProduksi, Warna):
        self.__NoPlat = NoPlat
        self.__Merk = Merk
        self.__TahunProduksi = TahunProduksi
        self.__Warna = Warna
    
    # setter getter
    def setNoPlat(self, NoPlat):
        self.__NoPlat = NoPlat
        
    def getNoPlat(self):
        return self.__NoPlat
    
    def setMerk(self, Merk):
        self.__Merk = Merk
        
    def getMerk(self):
        return self.__Merk
    
    def setTahunProduksi(self, TahunProduksi):
        self.__TahunProduksi = TahunProduksi
        
    def getTahunProduksi(self):
        return self.__TahunProduksi
    
    def setWarna(self, Warna):
        self.__Warna = Warna
        
    def getWarna(self):
        return self.__Warna
    
    