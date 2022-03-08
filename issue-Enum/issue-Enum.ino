enum Spectrum
{ 
  red,
  orange,
  yellow,
  green,
  blue,
  violet,
  indigo,
  ultraviolet
};

Spectrum color;


void setup() {

}

void loop() {
  Serial.println(sizeof(color));
}