//  lux
#define CDS_INPUT 0

void setup() {
Serial.begin(9600);
}
void loop() {
  int value = analogRead(CDS_INPUT);
  Serial.println(value);
  delay(1000);
}

//Voltage to Lux
double luminosity (int RawDCO) {
  double Vout = RawADCO*5.0/1023; //5/1023 (Vin = 5V)
  double lux = (2500/Vout-500)/10;
  // lux = 500 / Ridr, Vout lldr*Rldr = (5/(10 + Rldr))*Rldr 
  return lux;
}
