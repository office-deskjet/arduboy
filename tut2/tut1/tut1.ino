#include <Arduboy.h>
Arduboy arduboy;

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.print("Hello.\n");
  arduboy.print("Line 2.\n");
  arduboy.print("Line 3.\n");
  arduboy.print("Line 4.\n");
  arduboy.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
