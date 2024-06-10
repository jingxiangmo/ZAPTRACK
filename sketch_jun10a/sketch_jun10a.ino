int pwm_pin = 5;
int temp_pwm_pin = 6;
int temp_signal = 128; // experimental value value; adjust between 0-255 as needed

void setup() {
  pinMode(pwm_pin, OUTPUT);
  pinMode(temp_pwm_pin, OUTPUT); 
}

void loop() {
  // send continous tempature signal
  analogWrite(temp_pwm_pin, temp_signal);

  // ramp up the motor speed
    analogWrite(pwm_pin, speed); 
    delay(10);                  
  }

  // ramp down motor speed
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(pwm_pin, speed); 
    delay(10);                  
  }
}
