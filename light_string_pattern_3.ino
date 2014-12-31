// Flashing light string

int current_light = 1;
int new_light = 0;
double temp = 0.0;
double time = 0;

#define NUMPINS (8)
//int coefficients[NUMPINS+1] = {0,9,6,4,1,1,4,6,9};

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
  for (int i = 1; i <= NUMPINS; i++) {
    // If we are looking at the chosen one
    if (current_light == i) {
      digitalWrite(i, HIGH); // Turn it on
    } else { // If we are not
      digitalWrite(i, LOW); // Turn it off
    }
  }
  
  // Wait
  delay(5);
  
  // calculate new sine value
  temp = (sin(time/8) * 3.5) + 4.5;
  
  // round temp
  new_light = (int)(temp + 0.5);
  
  current_light = new_light;
  time += 0.1;
}
