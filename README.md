# LP4DPBO2024C1
# Janji
Saya Salma Ghaida dengan NIM 2207186 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

<img width="408" alt="image" src="https://github.com/sghda/LP4DPBO2024C1/assets/123555756/83a34587-75a4-423e-9021-f506ecc65038">

# Hubungan antar Kelas:
Terdapat hirarki kelas di mana Car dan Motorcycle adalah kelas turunan dari kelas Vehicle. Ini mewakili hubungan "is a", yang mengindikasikan bahwa sebuah mobil "is a" vehicle, dan sebuah sepeda motor "is a" vehicle.

Kelas ParkingLot memiliki hubungan komposisi dengan kelas Vehicle, yang berarti ia berisi objek-objek dari kelas Vehicle. Ini terlihat pada atribut __vehicles.

Kelas Garage juga memiliki hubungan komposisi dengan kelas Vehicle, dengan cara yang sama mengandung objek-objek dari kelas Vehicle.

# Alur Program:
Fungsi Main() dalam kode Anda berfungsi sebagai titik masuk program. Ini membuat instansi dari Car, Motorcycle, ParkingLot, dan Garage, dan menunjukkan bagaimana kendaraan dapat ditambahkan ke garasi atau tempat parkir.

Objek car1 dan motor1 dibuat dari kelas Car dan Motorcycle.
Instansi dari ParkingLot dan Garage dibuat (parkingLot_A dan garageA).
Kendaraan ditambahkan ke garasi menggunakan metode add_vehicle().
Metode display_vehicle() dipanggil pada objek Garage dan ParkingLot untuk menampilkan detail kendaraan.
