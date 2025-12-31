# Analog Heart Rate Monitor

## Overview
This project is an ECG (Electrocardiogram) waveform output and display heart monitor developed by a team of students from the Department of Electronic & Telecommunication Engineering, University of Moratuwa, Sri Lanka. The device is designed to amplify and display the small ECG voltage signal (0.1 mV to 10mV) while effectively managing noise interference.
[Video](https://www.linkedin.com/posts/chathura-weerasinghe-9a08bb213_ecg-biomedicalengineering-analogelectronics-activity-7230936167209189376-2sdM?utm_source=share&utm_medium=member_desktop)
## Features
- Right Leg Drive circuit for common-mode signal cancellation
- Instrumentation Amplifier for signal amplification and common noise elimination
- 1st order active Butterworth high pass filter
- 5th order active Bessel Thompson low pass filter
- Twin-T style notch filter for power line interference removal
- Analog components used throughout (except for the display unit)
- Adjustable gains and cutoff frequencies via variable resistors
- Custom-designed PCB and 3D-printed enclosure

## System Architecture
The system consists of the following main components:
1. Right Leg Drive Circuit
2. Instrumentation Amplifier
3. High Pass Filter
4. Low Pass Filter
5. Notch Filter
6. Power Supply Circuit
7. Display Circuit

## Key Components
- Operational Amplifier: TL072CP

## PCB Design
- Designed using Altium Designer
- Three separate PCBs: power circuit, heart monitor circuit, and display circuit
- Multi-layer design with ground pour and power routing

## Enclosure
- Designed using Solidworks
- Features removable top cover and detachable front for easy maintenance
- Includes power switch, tuning knob, and strategically placed connectorsi

## Contributors
- Kumarasinghe R.D (210321X)
- Rajapakshe N.N (210504L)
- Weerasinghe C.N (210687X)
- Withanawasam I.A (210732H)

## Acknowledgements
This project was submitted in partial fulfillment of the requirements for the module EN 2091 Laboratory Practice and Projects at the University of Moratuwa, Sri Lanka.

## License
GNU GENERAL PUBLIC LICENSE
