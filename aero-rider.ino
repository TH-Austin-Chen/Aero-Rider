#include <Servo.h>

// view from behind
// 6 servos
Servo myservo_right; // right wing spread
Servo myservo_right; // left wing spread
Servo myservo_under; // wing lifting
Servo servodrive;    // rear wheel control
Servo servo_right;   // right wheel control
Servo servo_left;    // left wheel control

int pos = 0;
int t = 0;

// servo parameters initialization
void setup() {
    myservo_right.attach(6);
    myservo_right.write(25);
    myservo_left.attach(11);
    myservo_left.write(100);
    myservo_under.attach(8);
    myservo_under.write(10);

    servo_right.attach(5);
    servo_right.write(90);
    servo_left.attach(3);
    servo_left.write(90);
    servodrive.attach(10);
    servodrive.write(90);
}

// example: only execute 1 time
void loop() {
    if (t == 0) {
        delay(1000);
        forward();
        
        // spreading wings after car have been moving forward for 3 sec
        delay(3000);
        myservo_right.write(100);
        myservo_left.write(25);
        
        // lifting wings 3 sec after wings spread for stabilization
        delay(3000);
        myservo_under.write(87);
        delay(500);
        myservo_under.write(65);
        
        // car arriving at the bend after 20 sec
        // execute turning twice: adjust servo angle and move forward
        delay(20000);
        for (pos = 0, pos <= 2; pos++) {
            turn();
            delay(2000);
            forward();
            delay(750);
        }
        stop();
        t = 1;
    }
}

void forward() {
    servodrive.write(0);
    servo_right.write(0);
    servo_left.write(113); // right wheel rotates faster to fight lateral wind
}

void stop() {
    servodrive.write(90);
    servo_right.write(90);
    servo_left.write(90);
}

void turn() {
    servodrive.write(30);
    servo_right.write(30);
    servo_left.write(90);
}