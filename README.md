# Track Design

- The track platform is **310 cm long** and **100 cm wide**, featuring:
  - A **150 cm rough section** (light gray).
  - A **160 cm smooth section**.
  - A small buffer zone.

- Markings include:
  - **Centerline** (solid line).
  - **Section boundary lines** (dashed lines).

- Track layout:
  - **230 cm straight track**:
    - **150 cm rough section** with 20 cm boundaries from the centerline (black dashed lines). Includes the starting area (dark gray).
    - **80 cm smooth section** with 30 cm boundaries from the centerline (blue dashed lines).
  - The track ends with a **quarter-circle stop zone**:
    - Marked with a centerline, 45° division lines, and boundary lines (blue dashed lines), each 30 cm from the centerline.

- **Side wind tunnel**:
  - **120 cm long**, **5 cm wide**, placed **35 cm above the smooth track**.
  - Provides continuous wind at **14.5 m/s**.

- **Load sensors**:
  - Record initial vehicle weight \( M_0 \) and real-time normal force \( M(t) \).
  - Downforce calculated as \( F(t) = M(t) - M_0 \).

---

# Speed Requirements

The test prioritizes **stability and repeatability** over maximum speed. The vehicle is designed for **mid-to-low-speed steady propulsion**, focusing on:

1. **Increased Thrust**: Power and battery systems.
2. **Lightweight Design**: Materials, chassis, and hollow structures.
3. **Stable Movement**: Steering, chassis, and axle connections.

---

# Steering Requirements

- A **50 cm radius curve** at the end of the track is divided into zones with scores: **A (10), B (7), C (5), D (3)**.
- The steering mechanism must meet curve radius requirements for optimal performance.

---

# Climbing Requirements

The track includes **rough and smooth slopes**. Design factors include:

- **Motor load** and output relative to vehicle weight.
- **Tire-road interaction** to ensure smooth climbing without slipping.

---

# Downforce Requirements

- A slope in the smooth section requires **additional downforce** to enhance tire grip and stability.
- The test score depends on the ratio of **vehicle weight to downforce**:
  - Design must maximize downforce while minimizing weight.

---

# Key System Designs

### Steering System
- Two front wheels equipped with **MG996R servo motors**.
- Steering achieved via speed differences between the left and right wheels.

### Power System
- Three **MG996R servo motors**:
  - Two for the front wheels.
  - One for the rear wheels, driving bevel gears and axles.

### Chassis Design
- Components include:
  - **MG996R motors**, Arduino Uno, XL4005 step-down module, 18650 batteries, and a breadboard.
  - Motors mounted with custom brackets.
- **Weight reduction**:
  - Hexagonal cutouts in the base and top plates.

### Wind Device Mechanism
- **Deployment**: Devices lift to a horizontal position to increase wind-facing area.
- **Lift**: Three-rod mechanism (based on a patent) ensures near-linear, parallel motion.

### Drive Mechanism
- Includes left and right units driven by servo motors connected to fork-shaped components.
- Flexible motion achieved through sliding and rotation.

---

# Control System

- **MG996R motors** controlled by Arduino Uno.
- Power supplied by three **18650 batteries**, reducing weight and wiring complexity.

---

# Wiring

- Six MG996R motors controlled via Arduino Uno and XL4005 module.
- The system ensures sufficient torque for all tasks.
