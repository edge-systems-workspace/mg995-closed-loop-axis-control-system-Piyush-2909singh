#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief MG995 Closed-Loop Axis Control System
 * @author Piyush-2909singh
 * @date 2026-02-21
 *
 * @details
 * Controls an MG995 high-torque servo motor using the Servo library
 * to manage axis positioning via PWM signals.
 */

// Define Servo Pin
#define SERVO_PIN 9

// Create Servo object
Servo axisServo;

/**
 * @brief Hardware initialization for servo and serial communication.
 */
void setup() {
    Serial.begin(9600);

    // Attach the servo on pin 9
    axisServo.attach(SERVO_PIN);

    Serial.println("System: MG995 Axis Control Active");
}

/**
 * @brief Main execution loop: Moves the servo to specific angles.
 */
void loop() {
    // Move to 0 degrees
    Serial.println("Moving to 0°");
    axisServo.write(0);
    delay(1000);

    // Move to 90 degrees
    Serial.println("Moving to 90°");
    axisServo.write(90);
    delay(1000);

    // Move to 180 degree
    Serial.println("Moving to 180°");
    axisServo.write(180);
    delay(1000);
}