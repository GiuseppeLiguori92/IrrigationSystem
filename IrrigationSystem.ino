// Copyright(C) Giuseppe Liguori - 2018

// Version 1.0

const int PUMP = 13;
const int POWER = 2;

const int SERIAL_PORT = 9600;

const int LOOP_FREQUENCY_MS = 1000;

void setup() {
  Serial.begin(SERIAL_PORT);
  // Input pins
  pinMode(POWER, INPUT);
  // Output pins
  pinMode(PUMP, OUTPUT);
}

void loop() {
  bool power = digitalRead(POWER);
  
  digitalWrite(PUMP, power);

  Serial.println(power);
  
  delay(LOOP_FREQUENCY_MS);
}
