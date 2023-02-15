#define SENSOR1 7

void setup() {
  pinMode(SENSOR1, INPUT);
  Serial.begin(115200);
}

void loop() {
  int result = analogRead(SENSOR1);
  Serial.println(result);
  delay(20);
}
