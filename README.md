### Otto: The Ultrasonic-Servo-Robot

**Otto** is an intermediate project made with Arduino. It's a simple robot that scan the surrounding area and print the distances of the objects on the serial monitor.

It's made with the help of two libraries:

* ` Ultrasonic.h by Erick Simões;`
* ` Servo.h;`

The support base is made of cardboard. But you can use any material you want.

On the right side there is a space for an external battery.

### The Creation
Otto was created on 01/04/2021 in a single day. I want ot make it just for fun. The materials are not the best but still resistant enough. The entire base is made of recycled cardboard. Inside the cardboard there is the Servo that makes the Ultrasonic sensor move.

### How it works?
The Ultrasonic sensor is on the Servo that makes it move. Otto scan the surrounding area with the dealy of 5 seconds. It scan 30 degrees at a time until it get to 180 degrees. After that, turn back.
