int led = D7;  // The on-board LED

void setup() {
  pinMode(led, OUTPUT);
  

}

void loop() {
  digitalWrite(led, HIGH);   // Turn ON the LED

  String temp = String(random(0, 100));
  Particle.publish("temp", temp, PRIVATE);
  delay(3000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(3000);               // Wait for 30 seconds
  
  

}