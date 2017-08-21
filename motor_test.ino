#define SERVO_PIN 9   //this pin has high frequency, minimizes dc beeping.  connect this to ENA or ENB on control board (the pin closest to the edge.)
#define SERVO_DIR1_PIN 5    
#define SERVO_DIR2_PIN 4
                            //these two pins connect to either IN1 and IN2 to control A side or IN3 and IN4 to control B side.
//#include <Servo.h>

//Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(SERVO_PIN, OUTPUT);
  pinMode(SERVO_DIR1_PIN, OUTPUT);
  pinMode(SERVO_DIR2_PIN, OUTPUT);
  //myservo.attach(SERVO_PIN);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(SERVO_DIR1_PIN, HIGH);
  digitalWrite(SERVO_DIR2_PIN, LOW);
  analogWrite(SERVO_PIN, 80);     //analog write determines speed. ( 0 - 255)
  delay(1000);

  
  digitalWrite(SERVO_DIR1_PIN, LOW);
  digitalWrite(SERVO_DIR2_PIN, HIGH);
  analogWrite(SERVO_PIN, 100);
  delay(1000);
}
