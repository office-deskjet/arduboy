#include <Arduboy.h>
Arduboy arduboy;
int counter;

void setup() {
    arduboy.begin();
    arduboy.clear();
    counter = 0;
}

// counter will overflow to negative number
void loop() {
    arduboy.clear();
    counter = counter + 1;
    arduboy.setCursor(0,0);
    arduboy.print(counter);
    arduboy.display();
}
