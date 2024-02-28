from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

def Main():
    car1 = Car("B2121XD", "Toyota", "2019", "Biru", 5, 4, 4, "Sedan")
    motor1 = Motorcycle("D2755PQ", "Honda", 2018, "Hitam", "Sport", 500)
    
    parkingLot_A = ParkingLot(6)
    garageA = Garage("Garasi Aku", 125)
    garageA.add_vehicle(car1, parkingLot_A)
    garageA.add_vehicle(motor1, parkingLot_A)
    
    car2 = Car("B2111XD", "Suzuki", "2019", "Biru", 2, 2,6, "Truk")
    car3 = Car("F5432IZ", "Toyota", "2022", "Biru", 6, 4,4, "CamperVan")
    car4 = Car("T2200XP", "Gatau", "2017", "Biru", 20, 3,6, "Bus")
    
    garageA.add_vehicle(car2, parkingLot_A)
    garageA.add_vehicle(car3, parkingLot_A)
    garageA.add_vehicle(car4, parkingLot_A)

    garageA.display_vehicle()
    
    parkingLot_A.display_vehicle()
    
if __name__ == "__main__":
    Main()