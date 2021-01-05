#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic ultrasonic(12,13);
Servo servo;

int angle = 0;
const int led1 = 11;
const int led2 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  servo.attach(8);
  servo.write(angle);
   
}

void loop() {
  angle =0;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =30;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =60;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =90;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =120;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =150;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =180;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =150;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =120;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =90;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =60;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
  angle =30;
  digitalWrite(led1, HIGH);
  servo.write(angle);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  Serial.print("Distance in cm: ");
  Serial.println(ultrasonic.distanceRead());
  delay(5000);
  digitalWrite(led2, LOW);
}