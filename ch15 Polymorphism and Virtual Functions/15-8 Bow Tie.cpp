/*In Tying It All Together, we defined a tent to be a certain type of triangular shape. Define a wedge to be a tent that has 
been rotated 90 degrees clockwise, and a reverse wedge to be a tent rotated 90 degrees counterclockwise. Write a program that 
creates a wedge and a reverse wedge at the left and right edges of the screen, respectively, and then moves them toward each 
other until they meet in the middle. The two shapes should form a bow tie when they meet.*/

#include "ShapeAnimator2.h"

int main()
{
    // Create a tent and a box
    shared_ptr<Tent> tent = make_shared<Tent>(20, 10, 13);
    shared_ptr<Box> box = make_shared<Box>(5, 10, 4, 7);

    // Draw the tent and the box
    tent->draw();
    box->draw();
    // Set direction of motion for the two shapes
    tent->setDirection(-1, 0);  // Tent moves straight up
    box->setDirection(0, 1);    // Box moves horizontally to the right

    // Simultaneously move the tent and the box
    for (int k = 0; k < 12; k++)
    {
        Sleep(75);
        tent->move();
        box->move();
    }
    box->move(); tent->move();

    // Move the box farther to the right
    for (int k = 0; k < 48; k++)
    {
        Sleep(75);
        box->move();
    }
    // Create a complex shape composed of the tent and the box
    vector<shared_ptr<Shape>> myShapes{ tent, box };
    shared_ptr<ComplexShape> cS = make_shared<ComplexShape>(myShapes);

    // Set directions for the two shapes
    tent->setDirection(1, 0);
    box->setDirection(0, -1);
    // Move the complex shape: this moves both the tent and the box
    for (int k = 0; k < 12; k++)
    {
        Sleep(75);
        cS->move();
    }
    // Continue moving the box by itself
    for (int k = 0; k < 36; k++)
    {
        Sleep(75);
        box->move();
    }

    return 0;
}
