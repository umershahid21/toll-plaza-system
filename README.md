# Toll Plaza Simulation Program

## Overview
This C++ program simulates a toll plaza system. It allows users to log in, select their vehicle type, and receive a toll receipt.

## Features
- **Login Authentication**: 
  - Access the system with the username `UMER` and password `123`.
- **Vehicle Toll Calculation**: 
  - Supports five vehicle types: Car, Jeep, Truck, Bus, and Van.
  - Automatically calculates the toll based on vehicle type.
- **Instant Receipt Generation**: 
  - Displays a detailed transaction receipt, including vehicle type, plaza number, and toll amount.

## Key Functions
- **`tollPlaza(int &amount, int vehicleType, int plazaNumber)`**: 
  - Calculates the toll based on the selected vehicle type.
- **`printTransactionReceipt(int amount, int vehicleType, int plazaNumber)`**: 
  - Prints a formatted receipt with all necessary details.

## How to Use
1. **Login**: Start by entering the username `UMER` and password `123`.
2. **Choose Vehicle**: Select your vehicle type from the options provided.
3. **Get Receipt**: The system calculates the toll and displays a receipt.

## Example Interaction
```plaintext
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

**Summary**
This program is a simple, efficient toll plaza simulator designed to make toll calculation and receipt generation quick and easy.
