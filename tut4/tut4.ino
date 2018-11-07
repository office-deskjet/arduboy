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
    arduboy.setCursor(0,0);

    if (arduboy.pressed(A_BUTTON) == true) {
        counter = counter + 1;
    }

    if (arduboy.pressed(B_BUTTON) == true) {
            counter = counter - 1;
    }
    if (counter >= 100) {
        arduboy.setCursor(30, 30);
        arduboy.print ("DASKDHJ");
    }
    arduboy.print(counter);
    arduboy.display();
}
