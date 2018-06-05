// Copyright(C) Giuseppe Liguori - 2018

// Version 1.0

// Digital
const int PUMP = 13;
const int BUZZER = 12;

// Analog
const int WATER_SENSOR = 0;

// Serial 
const int SERIAL_PORT = 9600;

// Delay
const int DELAY = 1000;

// Variables
const int MIN_WATER_LEVEL = 0;

bool buzzer = false;
bool pump = false;

void setup() {
  Serial.begin(SERIAL_PORT);
  
  // Input pins
  pinMode(WATER_SENSOR, INPUT);
  
  // Output pins
  pinMode(PUMP, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  waterSensorManager();

  pumpManager();
  
  delay(DELAY);
}

void pumpManager() {
  digitalWrite(PUMP, pump);
}

void waterSensorManager() {
  int sensorLevel = analogRead(WATER_SENSOR);
  Serial.print("Water: "); Serial.println(sensorLevel);

  if (sensorLevel < MIN_WATER_LEVEL) {
      alertUserAboutWaterLevelWithBuzzer();
  } else {
      resetBuzzer();
  }
}

void alertUserAboutWaterLevelWithBuzzer() {
  buzzer = !buzzer;
  updateBuzzer();
}

void resetBuzzer() {
  buzzer = LOW;
  updateBuzzer();
}

void updateBuzzer() {
  digitalWrite(BUZZER, buzzer);
}

