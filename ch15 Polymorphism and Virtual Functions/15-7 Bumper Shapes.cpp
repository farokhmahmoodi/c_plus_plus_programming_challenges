/*Write a program that creates two rectangular shapes and then animates them. The two shapes should start on opposite ends of 
the screen and then move toward each other. When they meet in the middle of the screen, each shape reverses course and moves 
toward the edge of the screen. The two shapes keep oscillating and bouncing off of each other in the middle of the screen. 
The program terminates when the shapes meet each other in the middle for the tenth time.*/

#include "ShapeAnimator.h"

int main()
{
    // Create a box
    shared_ptr<Box> box = make_shared<Box>(5, 10, 4, 7);

    // Draw the box
    box->draw();
    // Set direction of motion for the two shapes
    box->setDirection(0, 1);    // Box moves horizontally to the right

    // Simultaneously move the tent and the box
    for (int k = 0; k < 12; k++)
    {
        Sleep(75);

        box->move();
    }
    box->move();

    // Move the box farther to the right
    for (int k = 0; k < 48; k++)
    {
        Sleep(75);
        box->move();
    }
    // Create a complex shape composed of the box
    vector<shared_ptr<Shape>> myShapes{ box, box };
    shared_ptr<ComplexShape> cS = make_shared<ComplexShape>(myShapes);

    // Set directions for the two shapes
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
