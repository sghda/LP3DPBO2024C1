from Vehicle import Vehicle

class Car(Vehicle):
    __JumlahKursi = 0
    __JumlahPintu = 0
    __JumlahRoda = 0
    __Tipe = ""
    
    def __init__(self, NoPlat, Merk, TahunProduksi, Warna, JumlahKursi, JumlahPintu, JumlahRoda, Tipe):
        super().__init__(NoPlat, Merk, TahunProduksi, Warna)
        self.__JumlahKursi = JumlahKursi
        self.__JumlahPintu = JumlahPintu
        self.__JumlahRoda = JumlahRoda
        self.__Tipe = Tipe
        
    # setter getter
    
    def setJumlahKursi(self, JumlahKursi):
        self.__JumlahKursi = JumlahKursi
        
    def getJumlahKursi(self):
        return self.__JumlahKursi
    
    def setJumlahPintu(self, JumlahPintu):
        self.__JumlahPintu = JumlahPintu
        
    def getJumlahPintu(self):
        return self.__JumlahPintu
    
    def setJumlahRoda(self, JumlahRoda):
        self.__JumlahRoda = JumlahRoda
        
    def getJumlahRoda(self):
        return self.__JumlahRoda
    
    def setTipe(self, Tipe):
        self.__Tipe = Tipe
    
    def getTipe(self):
        return self.__Tipe