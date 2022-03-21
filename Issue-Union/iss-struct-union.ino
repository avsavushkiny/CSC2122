struct Tovar
{
    int number;
    union Art
    {
        int intValue;
        float floatValue;
    } cool;
} sok;

void setup()
{
}

void loop()
{
    product();
    delay(500);
}

void product() {
    if (Serial.available() > 0)
    {
        sok.number = Serial.parseInt();
        delay(1000);
        if (sok.number == 100)
        {
            sok.cool.intValue = Serial.parseInt();
            Serial.println(sok.cool.intValue);
        }
        else 
        {
            sok.cool.floatValue = Serial.parseFloat();
            Serial.println(sok.cool.floatValue);
        }
    }
}