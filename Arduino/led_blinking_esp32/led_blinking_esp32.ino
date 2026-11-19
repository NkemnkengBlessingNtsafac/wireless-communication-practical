void setup() {
  pinMode(led_gpio,output);

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(led_gpio,HIGH);
  delay(1000);
  digitalWrite(led_gpio,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:

}
