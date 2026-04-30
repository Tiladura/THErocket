# THErocket

A personal rocket engineering project focused on designing and building a custom rocket with a thrust vector control system and a servo-based recovery mechanism.
## Why did i want to make this project?
I have always wanted to build something that can fly really high and land gracefully. I also plan to place my LEGO Mandalorian figure inside the rocket so it can be my first astronaut.
## Project Overview

This project explores the development of my own rocket architecture, including:

- a custom-built rocket body
- an implemented **TVC (Thrust Vector Control)** system
- a **servo-powered recovery system**
- integration of electronics and mechanical components into a single structure

The goal of the project is to study how guidance, actuation, and recovery can be combined in one compact rocket design.

## TVC System

The rocket uses a TVC system based on Yukon’s design:

[Yukon TVC System on GrabCAD](https://grabcad.com/library/k-9-model-rocket-thrust-vector-control-system-v7-1)

![TVC system](https://github.com/user-attachments/assets/bf38bc44-4d27-4c3c-8f04-3b318db6b18d)

## Recovery System

The rocket also includes a servo-powered recovery mechanism designed to deploy the recovery system during descent.

![Recovery system](https://github.com/user-attachments/assets/bbe313fc-a07d-4afc-abf7-e05668722a24)

## Full Rocket Assembly

Below is the current overall design of the rocket.

![Overall rocket design](https://github.com/user-attachments/assets/d11ac5f2-45d2-4cfc-93e3-8f96ef815555)

### Wiring/PCB
| **Schematic** | **PCB** | **3D Render** |
|---------------|---------|---------------|
|<img width="1177" height="850" alt="image" src="https://github.com/user-attachments/assets/681b73d7-62b1-41f9-a985-d52325bb519a" />|<img width="829" height="790" alt="image" src="https://github.com/user-attachments/assets/a67f90a4-6002-4b17-8b16-7a8ff7722644" />|<img width="946" height="752" alt="image" src="https://github.com/user-attachments/assets/045a8e83-6705-43f9-9edb-bf12653fbb98" />



## Main Components

- **ESP32** — main microcontroller used for control logic
- **BMP388** — barometric sensor for altitude and pressure tracking
- **MPU-6050** — used for motion and orientation sensing
- **SG90 servos** — used for actuation in the control and recovery systems
- **RD1-20-5 rocket motor** — solid-fuel hobby rocket motor

## Status

The project is currently in the design and development stage. Mechanical systems, control layout, and internal structure are being refined before full testing.

## Notes

This repository documents the design process, component choices, and development progress of the rocket.


## BOM LIST

| Name | Purpose | Quantity | Total Cost (USD) | Distributor | Link |
|---|---:|---:|---:|---|---|
| Custom PCB | PCB which will connect every part | 5 | $10.52 | JLCPCB | — |
| And Another Capacitor | 470uF 25V Aluminum Electrolytic Capacitor, Through Hole, D8xL12mm, 8000hrs @ 105℃ | 10 | $0.47 | LCSC | [Product](https://www.lcsc.com/product-detail/C2831775.html?spm=wm.gwc.xh.12.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Another Header Pin | Pin Header, 6 Position, 2.54mm Pitch, Single Row, Through Hole, -40℃~+105℃ | 20 | $0.88 | LCSC | [Product](https://www.lcsc.com/product-detail/C37208.html?spm=wm.gwc.xh.11.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Pin Header | Pin Header, 3 Position, 2.54mm Pitch, Single Row, Through Hole, -40℃~+105℃ | 50 | $1.06 | LCSC | [Product](https://www.lcsc.com/product-detail/C49257.html?spm=wm.gwc.xh.10.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| DORABO Board Terminal Block | 2 Position Wire-to-Board Terminal Block, Through Hole, 5.08mm | 5 | $0.88 | LCSC | [Product](https://www.lcsc.com/product-detail/C395868.html?spm=wm.gwc.xh.9.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Switch | Tactile Switch, SPST, 160gf, 1.4mm PC Pin, 6mm x 6mm, Through Hole | 5 | $0.50 | LCSC | [Product](https://www.lcsc.com/product-detail/C273465.html?spm=wm.gwc.dh.8.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Regulator | 3.3V Positive Fixed SOT-223 Linear Low Dropout Voltage Regulator | 5 | $1.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C6186.html?spm=wm.gwc.xh.7.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| MPU-6050 | QFN-24-EP(4x4) Accelerometer | 1 | $10.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C24112.html?spm=wm.gwc.dh.5.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| ESP32-WROOM-32E | 2.4GHz ESP32-DOWD-V3 RF Transceiver Module with On-board PCB Antenna | 1 | $4.42 | LCSC | [Product](https://www.lcsc.com/product-detail/C701342.html?spm=wm.gwc.xh.4.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Another Resistor | 10kΩ ±1% 125mW 0805 Thick Film Resistor | 100 | $0.30 | LCSC | [Product](https://www.lcsc.com/product-detail/C17414.html?spm=wm.gwc.xh.3.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Resistor | 4.7kΩ ±1% 125mW 0805 Thick Film Resistor | 100 | $0.22 | LCSC | [Product](https://www.lcsc.com/product-detail/C17673.html?spm=wm.gwc.xh.2.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Another Capacitor | 10uF ±10% 50V Ceramic Capacitor, X7R, 1206 | 5 | $0.43 | LCSC | [Product](https://www.lcsc.com/product-detail/C303950.html?spm=wm.gwc.xh.1.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Capacitor | 100nF ±10% 50V Ceramic Capacitor, X7R, 0805 | 100 | $0.51 | LCSC | [Product](https://www.lcsc.com/product-detail/C49678.html?spm=wm.gwc.xh.0.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| BMP Sensor | Pressure sensor mounted directly on the PCB plate | 1 | $6.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C83291.html?spm=wm.gwc.xh.6.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Parachute D200 | Parachute for recovery system | 1 | $4.00 | Podarini | [Product](https://podarini.ru/zapasnye-chasti/obtekateli-nosovye-golovnaya-chast_1/parashyut-d200-chyornyy/) |
| Rocket Motor RD1-20-5 | Small solid-fuel model rocket motor with ignition element, built-in delay, and ejection charge for recovery deployment | 1 | $4.93 | Podarini | [Product](https://podarini.ru/modelnye-raketnye-dvigateli/modelnyy-raketnyy-dvigatel-rd1-20-5/) |
| Servo SG90 | Operates TVC and opens the recovery mechanism in the cone | 4 | $5.24 | AliExpress | [Product](https://aliexpress.ru/item/1005008707927948.html?sku_id=12000048410686232) |

**Total Cost:** $51.36
**Shipping** $25.31
