int LED = 2;
int PinLDR = 5;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  int ValorLDR = analogRead(PinLDR);
  SensorLuz(LED, ValorLDR);
}

void SensorLuz(int Led, int LDR) {
  Serial.print("LDR = ");
  Serial.println(LDR);
  if (LDR > 500) {
    digitalWrite(Led, HIGH);
    Serial.println("LED Encendido");
  } else {
    digitalWrite(Led, LOW);
  }
  delay(1000);
}
