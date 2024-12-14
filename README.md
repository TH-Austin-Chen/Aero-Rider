# Aero-Rider

## *Introduction*
This project focuses on designing and building a vehicle capable of climbing slippery slopes and making precise turns by harnessing lateral wind for increased traction through an innovative **Expandable Wing mechanism**.

---

## *Game Setup*
- **Track Platform**:
  - Dimensions: **330 cm x 100 cm**.
  - Sections:
    - **170 cm rough track**.
    - **160 cm slippery track**.
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
- **Stability**: Ensure consistent, repeatable performance over an 8-minute test.
- **Climbing Ability**: Overcome slippery slopes with steady upward movement.
- **Precision Steering**: Execute accurate turns for maximum scoring in the stop zone.
- **Traction Optimization**: Use the **Expandable Wing** to harness wind for enhanced tire grip.
- **Weight Reduction**: Minimize vehicle weight without compromising structural integrity.

---

## *Design Overview*
### **Core Systems**
1. **Steering System**:
   - Two **MG996R servo motors** control the front wheels.
   - Precise turns achieved via speed differences between left and right wheels.

2. **Power System**:
   - Three **MG996R motors**:
     - Two for the front wheels.
     - One for the rear wheels, driving bevel gears and axles.

3. **Chassis**:
   - Made from lightweight materials with **hexagonal cutouts** for weight reduction.
   - Custom motor brackets securely mount the MG996R motors.

4. **Expandable Wing**:
   - **Deployment**: Wings lift horizontally to increase wind-facing area.
   - **Lift Mechanism**: Based on Tenfold Engineering’s patented three-rod system, enabling stable, linear motion.
   - Harnesses wind energy to improve traction on slippery surfaces and slopes.

5. **Drive Mechanism for Lifting Wings**:
   - A servo motor drives a fork-shaped component that pushes the connecting rod of the lift mechanism.
   - The connecting rod transfers the force to the three-rod system, causing the rods to move in parallel and lift the wings upward in a controlled, stable motion.
   - The design leverages sliding and rotational movements in the fork-shaped component to accommodate slight misalignments, ensuring smooth operation of the lifting mechanism.
---

## *Electronics*

### **Components**
- **MG996R servo motors** for driving, steering, and wing mechanisms.
- **Arduino Uno** microcontroller for signal control.
- **XL4005 step-down module** for stable power regulation.
- Three **18650 batteries** for power supply.
- Breadboard for prototyping and wiring.

### **Controls**
- The **Arduino Uno** controls six MG996R motors.
- The **XL4005 module** provides efficient power regulation to simplify wiring and reduce weight.

---

## *Features*
1. **Slippery Slope Climbing**:
   - Optimized motor output and lightweight design ensure smooth uphill performance.
   - Tire-road interaction enhanced by the Expandable Wing’s downforce.

2. **Precision Turns**:
   - High torque from MG996R motors ensures accurate turning in the stop zone for high scores.

3. **Innovative Expandable Wing**:
   - Increases downforce by harnessing wind from the side wind tunnel.
   - Enhances traction and stability, especially on slippery surfaces.

4. **Stability**:
   - Balanced weight distribution and power tuning ensure smooth, stable performance during straight-line travel and climbing.

5. **Weight Reduction**:
   - Hexagonal cutouts in the chassis minimize unnecessary weight while maintaining durability.

6. **Efficient Power Management**:
   - Compact wiring and optimized power systems ensure lightweight, efficient operation.

---

## *Conclusion*
This vehicle demonstrates a balance of **stability**, **maneuverability**, and **innovation**, overcoming the challenges of slippery slopes, sharp turns, and wind-driven traction. The **Expandable Wing mechanism**, combined with a lightweight and robust design, delivers high performance and reliability, making it a competitive solution for challenging tracks.
