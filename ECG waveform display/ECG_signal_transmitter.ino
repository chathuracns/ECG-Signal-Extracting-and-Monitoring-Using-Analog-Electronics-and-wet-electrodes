//Connect the same port as in the corresponding python code.

#define SENSOR_PIN A0 
float max_in = 5.0;
int frequency = 10;

void setup() {
  //Serial communication at 9600 baud rate
  Serial.begin(9600); 
}

void loop() {
  int ECG_val = analogRead(SENSOR_PIN); 
  float voltage = ECG_val * (max_in / 1023.0); // Convert the analog reading to voltage

  Serial.println(voltage); // Send the voltage value over the serial port
  delay(frequency); // Delay to control the transmission rate
}