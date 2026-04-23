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
