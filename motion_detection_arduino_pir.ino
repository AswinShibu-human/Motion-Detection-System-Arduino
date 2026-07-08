// PIR Motion Sensor Home Security System
const int PIR_PIN = 2;
const int LED_PIN = 12;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("PIR Motion Detection System");
}
void loop() {
  int motion = digitalRead(PIR_PIN);
  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Motion Detected!");
  }
  else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("No Motion");
  }
  delay(500);
}