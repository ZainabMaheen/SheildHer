// Pin definitions
#define IR_SENSOR 34
#define LED 27
#define BUZZER 26

void setup() {
  Serial.begin(115200);

  pinMode(IR_SENSOR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop() {
  int sensorValue = digitalRead(IR_SENSOR);

  Serial.println(sensorValue);

  if (sensorValue == LOW) {   // Object detected
    Serial.println("Camera Detected!");

    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(200);

    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
    delay(200);
  } 
  else {
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
  }
}
