struct Employee
{
    String names;
    long int salary;
    int8_t age;
};

Employee alexander {"Alexander", 35000, 36};
Employee maxim {"Maxim", 300000, 13};
Employee kirill{"Kirill",36000, 14};
Employee ruslan{"Ruslan",1000000, 13};

void setup(){
Serial.begin(9600);
}
void loop(){
    String text1 = maxim.names + " " + maxim.salary + " " + maxim.age;
    String text2 = alexander.names + " " + alexander.salary + " " + alexander.age;
    String text3 = ruslan.names + " " + ruslan.salary + " " + ruslan.age;
    String text4 = kirill.names + " " + kirill.salary + " " + kirill.age;
Serial.println(text1);
Serial.println(text2);
Serial.println(text3);
Serial.println(text4);
}
