#define RXD 3  
#define TXD 1

HardwareSerial SIM808(0);
int m;

void setup()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
    SIM808.begin(9600);
    delay(100);
    Serial.begin(9600)
    SIM808.println("conectado")


}

void loop()
{
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  if (SIM808.available()){
    Serial.write(receptor.read());
  }
    delay(5000);
}
