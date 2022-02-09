struct perks
{
  int key_number;
  char car[12];
} mrSmith, mrJones;

struct perk {int key_number; char car[12];}
       mrJohn = {7, "Packard"};

struct //no descriptor
{
  int8_t x;
  int8_t y;
} pos;


void setup() {
}

void loop() {
  Serial.println(pos.x);
}
