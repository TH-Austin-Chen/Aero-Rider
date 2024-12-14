# Aero-Rider

## *Introduction*
This project focuses on designing and building a track vehicle capable of tackling various challenges, including straight-line motion, turning, climbing slopes, and stabilizing on smooth surfaces. The design prioritizes stability, lightweight structure, and optimal downforce to enhance performance.

---

## *Game Setup*
- **Track Platform**:
  - Dimensions: **310 cm x 100 cm**.
  - Sections:
    - **150 cm rough track** (light gray).
    - **160 cm smooth track**.
  - Markings:
    - **Centerline** (solid line).
    - **Boundary lines** (dashed lines).
  - Stop zone:
    - Quarter-circle with a **50 cm radius**, divided into **scoring zones**: A (10), B (7), C (5), D (3).

- **Wind Tunnel**:
  - Positioned **35 cm above the track**.
  - Dimensions: **120 cm x 5 cm**.
  - Wind speed: **14.5 m/s**.

- **Load Sensors**:
  - Measure vehicle weight \( M_0 \) and real-time force \( M(t) \).
  - Calculate downforce \( F(t) = M(t) - M_0 \).

---

## *Aims*
- **Stability**: Achieve repeatable performance over an extended 8-minute test.
- **Steering Precision**: Navigate curves for maximum scores.
- **Climbing Capability**: Overcome both rough and smooth slopes.
- **Downforce Optimization**: Enhance grip while minimizing weight.

---

## *Design Overview*
### **Core Systems**
1. **Steering System**:
   - Two **MG996R servo motors** control front wheels.
   - Steering via speed differences between left and right wheels.

2. **Power System**:
   - Three **MG996R motors**:
     - Two for front wheels.
     - One for rear wheels, driving bevel gears and axles.

3. **Chassis**:
   - Materials: Lightweight with **hexagonal cutouts** for weight reduction.
   - Custom motor brackets secure the MG996R motors.

4. **Expandable Wing**:
   - **Deployment**: Wings lift horizontally to maximize wind-facing area.
   - **Lift Mechanism**: Uses a patented three-rod system for linear motion.

5. **Drive Mechanism**:
   - Servo-driven fork applies force to the connecting rod of lift mechanisms.
   - Design allows for sliding and rotational movement.

---

## *Electronics*

### **Components**
- **MG996R servo motors** for driving and steering.
- **Arduino Uno** microcontroller for signal control.
- **XL4005 step-down module** for power regulation.
- Three **18650 batteries** for power supply.
- Breadboard for prototyping circuits.

### **Controls**
- Arduino Uno delivers control signals to six MG996R motors.
- Power is regulated to ensure reliable operation while reducing complexity and weight.

---

## *Features*
1. **Straight-Line Stability**:
   - Combines lightweight materials and balanced power output.

2. **Precision Steering**:
   - Achieves tight turns with minimal deviation.

3. **Climbing Performance**:
   - Ensures smooth navigation over varied slopes using optimized motor load.

4. **Enhanced Downforce**:
   - Expandable Wing increases tire grip on smooth surfaces.
   - Maximizes the weight-to-downforce ratio for higher scores.

5. **Weight Reduction**:
   - Hexagonal cutouts in the base and top plates minimize unnecessary weight.

6. **Efficient Power Management**:
   - Compact design with minimal wiring for reduced complexity.
