#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_BMP3XX.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <ESP32Servo.h>

Adafruit_MPU6050 imu;
Adafruit_BMP3XX bmp;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int SERVO1_PIN = 12;
const int SERVO2_PIN = 13;
const int SERVO3_PIN = 14;
const int SERVO4_PIN = 15;

float altitudeZero = 0;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  servo1.attach(SERVO1_PIN);
  servo2.attach(SERVO2_PIN);
  servo3.attach(SERVO3_PIN);
  servo4.attach(SERVO4_PIN);


  if (!bmp.begin_I2C()){
    Serial.println("BMP not found");
    while (1);
  }

  bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
  bmp.setPressureOversampling(BMP3_OVERSAMPLING_8X);
  bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
  imu.setAccelerometerRange(MPU6050_RANGE_8_G);
  imu.setGyroRange(MPU6050_RANGE_500_DEG);
  imu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(1000);

  if (bmp.performReading()){
    altitudeZero = bmp.readAltitude(1013.25);

  }

}

void loop() {
  readSensors();
  delay(500);
  TVC();
  callrecovery();

}
void readSensors(){
  //will change this in the future
}
void callrecovery(){
  //some logic here
  servo1.write(90);
  servo2.write(90);
}
void TVC(){
  //some logic here
  servo3.write(45);
  servo4.write(135);
}
// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}