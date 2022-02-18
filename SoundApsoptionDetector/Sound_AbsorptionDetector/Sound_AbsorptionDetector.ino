//2.13.2022

float SoundAbs;
float frequencies[] = {100, 200, 500, 1500};

int  sensorDigitalPin = 3;
int  sensorAnalogPin = A0;
float  analogValue;
int  digitalValue; 


void setup() {
  Serial.begin(9600);
  pinMode(sensorDigitalPin,INPUT);
}

void loop() {
  analogValue = analogRead(sensorAnalogPin);
  digitalValue=digitalRead(sensorDigitalPin);
  
  for(int i = 0; i< 4; i++){
    tone(8, frequencies[i], 500);
    
    Serial.println(1 - analogValue/frequencies[i]);// Print out the sound absorped. a = Ea  / Ei  =  1 - Et  / Ei  where “a” is the sound absorption coefficient

    delay(3000);
  }
}
