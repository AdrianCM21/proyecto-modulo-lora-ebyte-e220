#include <HardwareSerial.h>
HardwareSerial Serial1(1); 

#define TXD_PIN 17
#define RXD_PIN 16

void setup() {
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  
  Serial.begin(115200); 
  Serial1.begin(9600);  

  digitalWrite(22, HIGH);
  digitalWrite(23, LOW);
  delay(1000);

  Serial.println("Conexion UART establecida en el monitor.");
  Serial1.println("Conexion UART establecida en Serial1.");
}

void loop() {
  Serial.println("Mensaje al monitor serial");
  Serial1.println("Mensaje a Serial1 en GPIO17 y GPIO16");
  delay(5000);
}
