# THErocket

A personal rocket engineering project focused on designing and building a custom rocket with a thrust vector control system and a servo-based recovery mechanism.

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

## Main Components

- **ESP32** — main microcontroller used for control logic
- **BMP388** — barometric sensor for altitude and pressure tracking
- **IMU** — used for motion and orientation sensing
- **SG90 servos** — used for actuation in the control and recovery systems
- **RD1-20-5 rocket motor** — solid-fuel hobby rocket motor

## Status

The project is currently in the design and development stage. Mechanical systems, control layout, and internal structure are being refined before full testing.

## Notes

This repository documents the design process, component choices, and development progress of the rocket.
[overengineered rocket-bom.csv](https://github.com/user-attachments/files/27089181/overengineered.rocket-bom.csv)

## BOM LIST

## Components

| Name                     | Purpose                                                                 | Qty | Total Cost (USD) | Link | Distributor |
|--------------------------|-------------------------------------------------------------------------|-----|------------------|------|-------------|
| Parachute D200           | Parachute used for recovery system                                      | 1   | 4.00             | [Link](https://podarini.ru/zapasnye-chasti/obtekateli-nosovye-golovnaya-chast_1/parashyut-d200-chyornyy/) | podarini |
| RD1-20-5 Rocket Motor    | Small solid-fuel motor with ignition and delay ejection charge         | 1   | 4.93             | [Link](https://podarini.ru/modelnye-raketnye-dvigateli/modelnyy-raketnyy-dvigatel-rd1-20-5/) | podarini |
| SG90 Servo               | Controls TVC and opens recovery mechanism                               | 4   | 5.24             | [Link](https://aliexpress.ru/item/1005008707927948.html?sku_id=12000048410686232) | aliexpress |
| ESP32                    | Main microcontroller for control and sensor processing                  | 1   | 3.54             | [Link](https://aliexpress.ru/item/1005008889768599.html?sku_id=12000047095028657) | aliexpress |
| Protoboard               | Platform for soldering and organizing electronics                       | 1   | 3.51             | [Link](https://aliexpress.ru/item/1005008463998977.html?sku_id=12000056485241734) | aliexpress |
| BMP580                   | Barometric sensor for altitude and pressure measurement                 | 1   | 1.52             | [Link](https://aliexpress.ru/item/1005009166860350.html?sku_id=12000056153127416) | aliexpress |

