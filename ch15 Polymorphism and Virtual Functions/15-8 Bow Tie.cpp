/*In Tying It All Together, we defined a tent to be a certain type of triangular shape. Define a wedge to be a tent that has
been rotated 90 degrees clockwise, and a reverse wedge to be a tent rotated 90 degrees counterclockwise. Write a program that
creates a wedge and a reverse wedge at the left and right edges of the screen, respectively, and then moves them toward each
other until they meet in the middle. The two shapes should form a bow tie when they meet.*/

#include "ShapeAnimator2.h"

int main()
{
    // Create a wedge and reverse wedge
    shared_ptr<Tent> tent = make_shared<Tent>(0, 0, 13);
    shared_ptr<Wedge> wedge = make_shared<Wedge>(0, 0, 9);
    shared_ptr<ReverseWedge> reverseWedge = make_shared<ReverseWedge>(0,50,9);

    //Draw the wedges and set their directions
    wedge->draw();
    reverseWedge->draw();
    //SetConsoleCursorPosition(outHandle, pos);
    wedge->setDirection(0, 1);
    reverseWedge->setDirection(0, -1);

    //Move the wedges
    for (int k = 0; k < 21; k++)
    {
        Sleep(75);
        wedge->move();
        reverseWedge->move();
    }

    return 0;
}