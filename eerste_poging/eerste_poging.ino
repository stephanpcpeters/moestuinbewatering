

void setup() {
  // start serial connection
  Serial.begin(115200);
  
  // Float switches
  // Result 0 means sensor is horizontal, 1 means sensor is vertical
  pinMode(32, INPUT_PULLUP); // upper level floater
  pinMode(33, INPUT_PULLUP); // lower level floater

  // Relay output
  pinMode(25, OUTPUT);
}

void loop() {
  
  //read the floater sensors
  int floaterSwitch1 = digitalRead(32);
  int floaterSwitch2 = digitalRead(33);
 
  
  //print out the value of the pushbutton
  Serial.print("Floater switch 1: ");
  Serial.println(floaterSwitch1);
  Serial.print("Floater switch 2: ");
  Serial.println(floaterSwitch2);

  digitalWrite(25, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  delay(1000);
}
