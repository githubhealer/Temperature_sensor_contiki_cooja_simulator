# Temperature Sensor - Contiki-NG Cooja Simulator

This project simulates a temperature sensing IoT system using the **Contiki-NG** operating system and the **Cooja network simulator**.

## 🚀 Overview

The goal of this project is to simulate a basic sensor node that periodically reads and transmits temperature data over a network. It demonstrates IoT concepts like wireless communication, sensor data generation, and power-aware embedded development.

## 🔧 Technologies Used

- **Contiki-NG**: Open-source OS for IoT devices
- **Cooja Simulator**: Network simulator bundled with Contiki-NG
- **C programming**: For sensor node logic
- **Ubuntu / WSL / Linux**: Recommended environment for Contiki-NG

## 📂 Project Structure
Temperature_sensor_contiki_cooja_simulator/
├── README.md
├── temperature-sensor.c # Main source file
├── temperature-simulation.csc # Cooja simulation configuration
└── Makefile # Build instructions

## 🛠️ How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/githubhealer/Temperature_sensor_contiki_cooja_simulator.git
2. Type the following commands in the terminal

cd Temperature_sensor_contiki_cooja_simulator
cd ~/contiki/tools/cooja
ant run

## OUTPUT

![image](https://github.com/user-attachments/assets/db62c2d0-5a41-403d-90ba-42c2adcd6389)

