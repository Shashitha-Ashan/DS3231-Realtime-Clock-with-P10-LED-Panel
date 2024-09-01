# DMD Display Clock with DS3231 RTC

This project utilizes a Dot Matrix Display (DMD) and the DS3231 RTC module to create a clock that displays the current time, date, and day of the week on an LED matrix. The clock also includes a scrolling marquee feature to display custom messages.

## Table of Contents

- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
- [Contributing](#contributing)
- [License](#license)

## Features

- Displays the current time in HH:MM format on a Dot Matrix Display (DMD).
- Shows the current date and day of the week.
- Includes a scrolling marquee for custom messages.
- Uses the DS3231 RTC for accurate timekeeping.

## Hardware Requirements

- **Arduino** (e.g., Arduino Uno)
- **DS3231 RTC Module**
- **Dot Matrix Display (DMD)** (1x1 panel)
- **SPI Interface**
- **Resistors, Wires, and Breadboard**
- **Power Supply** (suitable for your DMD and Arduino setup)

## Software Requirements

- **Arduino IDE** with the following libraries:
  - `SPI`
  - `DMD`
  - `TimerOne`
  - `RTClib`

## Circuit Diagram

Connect the DMD and DS3231 RTC module to the Arduino according to the following pin connections:

| Component      | Arduino Pin |
|----------------|-------------|
| DMD            | SPI Pins    |
| DS3231 SDA     | A4          |
| DS3231 SCL     | A5          |

## Installation

1. Clone this repository or download the source code.
   ```sh
   git clone https://github.com/Shashitha-Ashan/DS3231-Realtime-Clock-with-P10-LED-Panel.git

