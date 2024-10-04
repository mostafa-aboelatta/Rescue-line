# Rescue Line Robot

## 1. Overview
The Rescue Line Robot is an autonomous robotic system designed to navigate along an undefined path while actively avoiding obstacles. Its mission is to follow a line based on real-time sensor readings, enabling it to adapt to various environments and conditions.

Equipped with IR sensors, the robot intelligently adjusts its motion according to sensor readings to maintain its course. The core functionality is managed by an Arduino Mega microcontroller, which processes the sensor data and directs the robot’s actions.

## 2. Construction

### 2.1 Hardware Requirements
- **Microcontroller**: Arduino Mega
- **Motors**: 2 DC POLOLU motors
- **Motor Driver**: POLOLU Dual VNH5019 Motor Driver Shield
- **IR Sensors**: Auto-Calibrating CYTRON Line Sensor LSS05 module (5 reflective sensors) & additional 2 IR sensor module
- **Object Detection**: ULTRASONIC sensor
- **Power Source**: 12V, 3300mAh Battery
- **Motion**: Rubber tracks for the wheels

### 2.2 Software Requirements
- **Arduino IDE**: Open-source software.
  - Installation: [Arduino Software](https://www.arduino.cc/en/software)
- **Language**: C++

## 3. Code Structure

### 3.1 Obstacle Avoidance
The robot continuously checks the distance to obstacles using the ultrasonic sensor. In the `reading` function, it measures the distance and updates its position. If the distance falls below a defined threshold, the robot executes avoidance maneuvers.

### 3.2 Line Following Logic
The robot relies on multiple infrared sensors to determine its position relative to the line:
- The robot reads the outputs from the infrared sensors to adjust its movement.
- If the robot drifts off the line, it uses the `Left(int M1Speed, int M2Speed)` or `Right(int M1Speed, int M2Speed)` functions to realign itself.

### Key Functions
- `FWD(speed)`: Move forward at the specified speed.
- `Left(Motor1Speed, Motor2Speed)`: Turn left with varying wheel speeds.
- `Right(speed1, speed2)`: Turn right with varying wheel speeds.
- `reading()`: Update sensor values for real-time decision making.

## 4. Integration with Hardware
The integration of hardware components is crucial for the robot's functionality:
- **Motors**: The two DC motors drive the wheels, while the rubber tracks enhance mobility over uneven surfaces.
- **Motor Driver**: The POLOLU Dual VNH5019 motor driver controls the motors based on commands from the Arduino.
- **Sensors**: The reflective sensors detect the line and help the robot navigate, while the ultrasonic sensor is used for obstacle avoidance.

## 5. Testing and Validation


## 6. Conclusion
The Rescue Line Following Robot successfully combines hardware and software to navigate autonomously, following a path while avoiding obstacles. This project showcases the application of robotics principles and sensor integration, providing a solid foundation for further enhancements and exploration in robotics.
