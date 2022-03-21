struct Widget
{
  int type;
  union Id
  {
    int id_int;
    char id_char[20];
  } article;
} prize;

void setup()
{
}

void loop()
{
  product();
  debug();
  delay(1000);
}

void product()
{
  if (Serial.available() > 0)
  {
    prize.type = Serial.parseInt();
    delay(1000);

    if (prize.type == 100)
    {
      prize.article.id_int = Serial.parseInt();
      //prize.article.id_int = Serial.readString(); //?

      Serial.println(prize.article.id_int);
      //Serial.println(sizeof(prize));
    }
    else
    {
      String text;
      text = Serial.readString();
      text.toCharArray(prize.article.id_char, 20);

      Serial.println(prize.article.id_char);
      //Serial.println(sizeof(prize));
    }
  }
}

void debug()
{
  Serial.println("debug");
  Serial.println((String) "int " + prize.article.id_int);
  Serial.println((String) "char " + prize.article.id_char);
}