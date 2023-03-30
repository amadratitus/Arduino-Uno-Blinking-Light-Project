/*
Arduino Uno Blinking Light Project Code.
Authour: Christopher Amadra Titus
Version: v1.0.0
Modified: 30/3/2023
Lab: Kyu_Lab S2.44
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

}
