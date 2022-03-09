enum Spectrum
{
  RED = -4,
  ORANGE,
  YELLOW,
  GREEN,
  BLUE = 5,
  VIOLET,
  INDIGO,
  ULTRAVIOLET = 10
};

enum Colors
{
  YELLOW,
  BLACK,
  PINK
};

enum Feelings
{
  SAD,
  ANGRY,
  BLACK
};

Spectrum color;

void setup()
{
}

void loop()
{
  Serial.println(sizeof(color));
}