
struct Employee
{
    String names;
    String id_pc;
    int long numbers;
    String lecture;
    String eMail; 
};

Employee sergey {"Sergey", "Mia-pc05", 898734, "Lectutre 4", "kanekiken@yandex.ru"};
Employee alexander{"Alexander", "Alisa-pc01", 123456, "Lecture 4", "cucumber@ro.ru"};
Employee kirill{"Kirill" , "Rebeka-pc11" , 808999 , "Lecture 4 " , "putin@mail.ro"};

void setup()
{
}

void loop() {  
     
Serial.println(sergey.names);
Serial.println(sergey.id_pc);
Serial.println(sergey.numbers);
Serial.println(sergey.lecture);
Serial.println(sergey.eMail);
Serial.println(" ");
Serial.println(kirill.names);
Serial.println(kirill.id_pc);
Serial.println(kirill.numbers);
Serial.println(kirill.lecture);
Serial.println(kirill.eMail);
Serial.println(" ");
Serial.println(alexander.names);
Serial.println(alexander.id_pc);
Serial.println(alexander.numbers);
Serial.println(alexander.lecture);
Serial.println(alexander.eMail);
}