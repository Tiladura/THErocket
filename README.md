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

| Name | Purpose | Quantity | Total Cost (USD) | Distributor | Link |
|---|---:|---:|---:|---|---|
| Custom PCB | PCB used to connect and organize the onboard electronics | 5 | $10.52 | JLCPCB | — |
| 470uF Capacitor | 470uF 25V aluminum electrolytic capacitor, through-hole, D8xL12mm, 8000hrs @ 105℃ | 10 | $0.47 | LCSC | [Product](https://www.lcsc.com/product-detail/C2831775.html?spm=wm.gwc.xh.12.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 6-Pin Header | 6-position, 2.54mm pitch, single-row through-hole pin header | 20 | $0.88 | LCSC | [Product](https://www.lcsc.com/product-detail/C37208.html?spm=wm.gwc.xh.11.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 3-Pin Header | 3-position, 2.54mm pitch, single-row through-hole pin header | 50 | $1.06 | LCSC | [Product](https://www.lcsc.com/product-detail/C49257.html?spm=wm.gwc.xh.10.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Terminal Block | 2-position wire-to-board terminal block, through-hole, 5.08mm | 5 | $0.88 | LCSC | [Product](https://www.lcsc.com/product-detail/C395868.html?spm=wm.gwc.xh.9.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Tactile Switch | SPST tactile switch, 160gf, 1.4mm PC pin, 6mm x 6mm, through-hole | 5 | $0.50 | LCSC | [Product](https://www.lcsc.com/product-detail/C273465.html?spm=wm.gwc.dh.8.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 3.3V Regulator | 3.3V fixed SOT-223 linear low-dropout voltage regulator | 5 | $1.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C6186.html?spm=wm.gwc.xh.7.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| MPU-6050 | Motion and orientation sensor | 1 | $10.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C24112.html?spm=wm.gwc.dh.5.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| ESP32-WROOM-32E | Main microcontroller module with onboard PCB antenna | 1 | $4.42 | LCSC | [Product](https://www.lcsc.com/product-detail/C701342.html?spm=wm.gwc.xh.4.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 10kΩ Resistor | 10kΩ ±1% 125mW 0805 thick-film resistor | 100 | $0.30 | LCSC | [Product](https://www.lcsc.com/product-detail/C17414.html?spm=wm.gwc.xh.3.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 4.7kΩ Resistor | 4.7kΩ ±1% 125mW 0805 thick-film resistor | 100 | $0.22 | LCSC | [Product](https://www.lcsc.com/product-detail/C17673.html?spm=wm.gwc.xh.2.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 10uF Capacitor | 10uF ±10% 50V X7R ceramic capacitor, 1206 | 5 | $0.43 | LCSC | [Product](https://www.lcsc.com/product-detail/C303950.html?spm=wm.gwc.xh.1.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| 100nF Capacitor | 100nF ±10% 50V X7R ceramic capacitor, 0805 | 100 | $0.51 | LCSC | [Product](https://www.lcsc.com/product-detail/C49678.html?spm=wm.gwc.xh.0.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| BMP Sensor | Pressure sensor mounted directly on the PCB for altitude tracking | 1 | $6.00 | LCSC | [Product](https://www.lcsc.com/product-detail/C83291.html?spm=wm.gwc.xh.6.cbm___wm.mxq.ssl.gwc&lcsc_vid=RwRZVVAAQFQLXlFXQ1gIBVADEgAIVlQEQ1lXBV1QRgUxVlNRQFNYUFZXRFZeUjsOAxUeFF5JWBYZEEoKFBINSQcJGk4NEhcSGAwLFUsPGQcBJAsKGwQNEw%3D%3D) |
| Parachute D200 | Parachute for the recovery system | 1 | $4.00 | Podarini | [Product](https://podarini.ru/zapasnye-chasti/obtekateli-nosovye-golovnaya-chast_1/parashyut-d200-chyornyy/) |
| Rocket Motor RD1-20-5 | Hobby model rocket motor | 1 | $4.93 | Podarini | [Product](https://podarini.ru/modelnye-raketnye-dvigateli/modelnyy-raketnyy-dvigatel-rd1-20-5/) |
| SG90 Servo | Used for TVC actuation and recovery mechanism control | 4 | $5.24 | AliExpress | [Product](https://aliexpress.ru/item/1005008707927948.html?sku_id=12000048410686232) |

**Parts Total:** $51.36  
**Shipping:** $25.31  
**Estimated Total:** $76.67
