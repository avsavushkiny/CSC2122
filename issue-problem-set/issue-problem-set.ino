void setup()
{
    Serial.begin(9600);
} 
void loop()    
{
    float fyrh;
    fyrh = Serial.parseFloat();
    float yd = (220 * fyrh);
    Serial.println(yd);
}
