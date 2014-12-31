// Flashing light string

int current_light = 1;
int direction = 0; // 0 = forwards, 1 = backwards

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Loop through all the lights
  for (int i = 1; i <= 8; i++) {
    // If we are looking at the chosen one
    if (current_light == i) {
      digitalWrite(i, HIGH); // Turn it on
    } else { // If we are not
      digitalWrite(i, LOW); // Turn it off
    }
  }
  
  // Wait
  delay(100);
  
  if (direction) { // direction is backward
    if (current_light == 1) {
      direction = 0;
      current_light++;
    } else {
      current_light--;
    }
  } else { // direction is forwards
    if (current_light == 8) { // we are at the end
      direction = 1;
      current_light--;
    } else {
      current_light++;
    }
  }
}
