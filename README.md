**Toll Plaza Simulation Program - Quick Guide**
Overview:
This C++ program mimics a toll plaza system, where users log in, select their vehicle type, and receive a toll receipt.
**Features**
•	_Login Authentication_: Enter username UMER and password 123 to access the system.
•	_Vehicle Toll Calculation_: Choose from five vehicle types (Car, Jeep, Truck, Bus, Van) to calculate the toll.
•	_Instant Receipt_: Receive a detailed transaction receipt with vehicle type, plaza number, and toll amount.
**Key Functions**
•	_tollPlaza(int &amount, int vehicleType, int plazaNumber)_: Determines the toll based on vehicle type.
•	_printTransactionReceipt(int amount, int vehicleType, int plazaNumber)_: Prints the toll receipt.
**How It Works**
1.	Login: Authenticate using UMER and 123.
2.	Choose Vehicle: Select the type of vehicle.
3.	Get Receipt: The system calculates and displays the toll.
Example Interaction:

Copy code
Enter username: UMER
Enter password: 123
Login authenticated
Select vehicle type (1: Car, 2: Jeep, 3: Truck, 4: Bus, 5: Van): 3
Transaction Receipt
-------------------
Vehicle Type: Truck
Plaza Number: 5
Toll Amount: $800
-------------------
Press -1 to exit, or any other key for another entry:
**Summary:**
This program is a streamlined toll plaza simulator that emphasizes simplicity and efficiency in toll calculation and receipt generation.

