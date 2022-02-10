union one4all
{
    bool boolValue;
    int intValue;
    double doubleValue;
};

void setup()
{
}

void loop()
{
    one4all pail;
    pail.intValue = 15;
    Serial.println(pail.intValue);    
    pail.doubleValue = 1.38;
    Serial.println(pail.doubleValue);

    pail.boolValue = true;
    
    int size = sizeof(pail);
    Serial.println(size);
}