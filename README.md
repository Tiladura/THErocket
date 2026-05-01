# THE rocket

A personal model rocket engineering project focused on designing, building, and documenting a custom rocket with thrust vector control, onboard electronics, and a servo-based recovery mechanism.

## Motivation

I have always wanted to build something that can fly high, remain controllable, and recover safely after flight. This project is my attempt to combine mechanical design, electronics, control systems, and rocketry into one complete engineering build.

As a personal detail, I also plan to place my LEGO Mandalorian figure inside the rocket as its first passenger.

## Project Overview

THErocket is designed as a compact custom rocket platform that includes:

- cardboard body
- a thrust vector control system
- a servo-driven recovery mechanism
- onboard sensors for flight data
- a custom PCB for electronics integration
- an ESP32-based control system

The goal of the project is to study how guidance, actuation, sensing, and recovery systems can be integrated into a single rocket design.

## Main Features

### Thrust Vector Control

The rocket uses a TVC system based on Yukon’s open-source design:

[Yukon TVC System on GrabCAD](https://grabcad.com/library/k-9-model-rocket-thrust-vector-control-system-v7-1)

![TVC system](https://github.com/user-attachments/assets/bf38bc44-4d27-4c3c-8f04-3b318db6b18d)

The TVC mechanism allows the rocket motor direction to be adjusted during flight using servos. This gives the rocket a way to influence its orientation instead of relying only on passive stabilization.

### Servo-Based Recovery System

The rocket includes a servo-powered recovery mechanism designed to deploy the recovery system during descent.

![Recovery system](https://github.com/user-attachments/assets/bbe313fc-a07d-4afc-abf7-e05668722a24)

This system is intended to improve recovery reliability by using controlled mechanical deployment instead of relying only on passive separation.

### Full Rocket Assembly

Below is the current overall rocket design.

![Overall rocket design](https://github.com/user-attachments/assets/d11ac5f2-45d2-4cfc-93e3-8f96ef815555)

## Electronics and PCB

The electronics are built around an ESP32 microcontroller, which handles sensor readings, control logic, and servo output. The PCB is designed to connect the main components into one compact onboard system.

| Schematic | PCB Layout | 3D Render |
|----------|------------|-----------|
| <img width="820" height="790" alt="Schematic" src="https://github.com/user-attachments/assets/36ee5b82-a565-44b6-810b-d0dc6b299e04" /> | <img width="829" height="790" alt="PCB layout" src="https://github.com/user-attachments/assets/a67f90a4-6002-4b17-8b16-7a8ff7722644" /> | <img width="946" height="752" alt="PCB 3D render" src="https://github.com/user-attachments/assets/045a8e83-6705-43f9-9edb-bf12653fbb98" /> |

## Main Components

- **ESP32-WROOM-32E** — main microcontroller for control logic and sensor processing
- **MPU-6050** — motion and orientation sensing
- **BMP sensor** — pressure and altitude measurement
- **SG90 servos** — actuation for TVC and recovery mechanisms
- **Custom PCB** — connects and organizes the onboard electronics
- **RD1-20-5 rocket motor** — hobby model rocket motor
- **Parachute D200** — recovery system component

## Current Status

The project is currently in the design and development stage. The mechanical structure, recovery system, electronics layout, and PCB design are being refined before physical assembly and testing.

Completed or in progress:

- Rocket body CAD design
- TVC mechanism selection
- Recovery mechanism design
- Component research
- Custom PCB schematic
- PCB layout and 3D render
- BOM preparation

## Notes

This repository documents the full development process of THE rocket, including design decisions, component choices, electronics integration, and project progress.

## BOM List

| Name | Purpose | Qty | Total (USD) | Link | Distributor |
|---|---|---:|---:|---|---|
| 03EC0575 (C2831775) | Large servo rail capacitor to reduce voltage dips during servo movement. | 10 | 0.47 | [Link](https://www.lcsc.com/product-detail/C2831775.html) | LCSC |
| DB128L-5.08-2P-GN-S (C395868) | Power input terminals for logic and servo power connections. | 5 | 0.99 | [Link](https://www.lcsc.com/product-detail/C395868.html) | LCSC |
| 2.54-1*3P (C49257) | 3-pin servo headers for servo power, ground, and PWM signal. | 50 | 1.06 | [Link](https://www.lcsc.com/product-detail/C49257.html) | LCSC |
| 2.54-1x6P (C37208) | UART programming header for flashing/debugging ESP32. | 20 | 0.88 | [Link](https://www.lcsc.com/product-detail/C37208.html) | LCSC |
| 1206B106K500NT (C303950) | Bulk/decoupling capacitors for stable 3.3V regulator input/output and logic power. | 5 | 0.43 | [Link](https://www.lcsc.com/product-detail/C303950.html) | LCSC |
| 0805W8F4701T5E (C17673) | I2C pull-up resistors for SDA and SCL lines. | 100 | 0.22 | [Link](https://www.lcsc.com/product-detail/C17673.html) | LCSC |
| 0805W8F1002T5E (C17414) | Pull-up/pull-down resistors for ESP32 boot/reset and sensor address configuration. | 100 | 0.30 | [Link](https://www.lcsc.com/product-detail/C17414.html) | LCSC |
| ESP32-WROOM-32E-N8 (C701342) | Main microcontroller module for sensor reading, servo control, and wireless debugging. | 1 | 4.42 | [Link](https://www.lcsc.com/product-detail/C701342.html) | LCSC |
| MPU-6050 (C24112) | IMU sensor for acceleration and angular velocity measurement during rocket flight. | 1 | 9.99 | [Link](https://www.lcsc.com/product-detail/C24112.html) | LCSC |
| BMP280 (C83291) | Barometric pressure sensor for altitude/pressure measurement. | 1 | 6.03 | [Link](https://www.lcsc.com/product-detail/C83291.html) | LCSC |
| CC0805KRX7R9BB104 (C49678) | Decoupling capacitors for ESP32, MPU6050, BMP280, and power rail noise filtering. | 100 | 0.53 | [Link](https://www.lcsc.com/product-detail/C49678.html) | LCSC |
| AMS1117-3.3 (C6186) | 3.3V voltage regulator for ESP32 and sensors. | 5 | 1.07 | [Link](https://www.lcsc.com/product-detail/C6186.html) | LCSC |
| TL1105AF160Q (C273465) | Reset and boot tactile buttons for programming and manual restart. | 5 | 0.48 | [Link](https://www.lcsc.com/product-detail/C273465.html) | LCSC |
| Parachute d200 | Parachute for rocket recovery. | 1 | 4.00 | [Link](https://podarini.ru/zapasnye-chasti/obtekateli-nosovye-golovnaya-chast_1/parashyut-d200-chyornyy/) | podarini |
| Rocket motors RD1-20-5 | Small solid-fuel model rocket motor with ignition element, delay, and ejection charge for recovery deployment. | 1 | 4.93 | [Link](https://podarini.ru/modelnye-raketnye-dvigateli/modelnyy-raketnyy-dvigatel-rd1-20-5/) | podarini |
| Servo SG90 | Operates TVC and opens the recovery mechanism in the cone. | 4 | 5.24 | [Link](https://aliexpress.ru/item/1005008707927948.html?sku_id=12000048410686232) | aliexpress |

