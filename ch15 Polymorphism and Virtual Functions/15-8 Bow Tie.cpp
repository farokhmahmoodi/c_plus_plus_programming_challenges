/*In Tying It All Together, we defined a tent to be a certain type of triangular shape. Define a wedge to be a tent that has
been rotated 90 degrees clockwise, and a reverse wedge to be a tent rotated 90 degrees counterclockwise. Write a program that
creates a wedge and a reverse wedge at the left and right edges of the screen, respectively, and then moves them toward each
other until they meet in the middle. The two shapes should form a bow tie when they meet.*/

#include "ShapeAnimator2.h"

int main()
{
    // Create a tent and a box
    shared_ptr<Wedge> wedge = make_shared<Wedge>(6, 1, 13);

    wedge->draw();
    // Set direction of motion for the two shapes
    //wedge->setDirection(0, 1);

    // Simultaneously move the tent and the box
    //for (int k = 0; k < 12; k++)
    //{
    //    Sleep(75);
    //    tent->move();
    //}
    //tent->move();

    // Create a complex shape composed of the tent
    //vector<shared_ptr<Shape>> myShapes{ tent, tent };
    //shared_ptr<ComplexShape> cS = make_shared<ComplexShape>(myShapes);

    //// Set directions for the two shapes
    //tent->setDirection(1, 0);
    //// Move the complex shape: this moves both the tent
    //for (int k = 0; k < 12; k++)
    //{
    //    Sleep(75);
    //    cS->move();
    //}

    return 0;
}