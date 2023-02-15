#define SENSOR1 7
#define SENSOR2 8
#define SENSOR3 9
#define SENSOR4 10

void setup() {
  pinMode(SENSOR1, INPUT);
  pinMode(SENSOR2, INPUT);
  pinMode(SENSOR3, INPUT);
  pinMode(SENSOR4, INPUT);
  Serial.begin(115200);
}

void loop() {
  int result1 = analogRead(SENSOR1);
  int result2 = analogRead(SENSOR2);
  int result3 = analogRead(SENSOR3);
  int result4 = analogRead(SENSOR4);
  Serial.print(result1);
  Serial.print(",");
  Serial.print(result2);
  Serial.print(",");
  Serial.print(result3);
  Serial.print(",");
  Serial.print(result4);
  delay(20);
}
