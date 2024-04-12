/*Write a program that creates two rectangular shapes and then animates them. The two shapes should start on opposite ends of 
the screen and then move toward each other. When they meet in the middle of the screen, each shape reverses course and moves 
toward the edge of the screen. The two shapes keep oscillating and bouncing off of each other in the middle of the screen. 
The program terminates when the shapes meet each other in the middle for the tenth time.*/

#include "ShapeAnimator.h"

int main()
{
    // Create two rectangles
    shared_ptr<Box> box = make_shared<Box>(0, 0, 10, 4),
        box2 = make_shared<Box>(0, 50, 10, 4);
    int count = 0;

    // Create a complex shape composed of the rectangles
    vector<shared_ptr<Shape>> myShapes{ box, box2 };
    shared_ptr<ComplexShape> cS = make_shared<ComplexShape>(myShapes);

    // Draw the rectangles
    box->draw();
    box2->draw();
    while (count < 10)
    {
        if (count == 9)
        {
            // Set directions for the two shapes
            box->setDirection(0, 1);
            box2->setDirection(0, -1);
            // Move the complex shape: this moves both rectangles
            for (int k = 0; k < 20; k++)
            {
                Sleep(75);
                cS->move();
            }
            count++;
            cout << "Count:" << count << endl;
        }
        else
        {
            // Set directions for the two shapes
            box->setDirection(0, 1);
            box2->setDirection(0, -1);
            // Move the complex shape: this moves both rectangles
            for (int k = 0; k < 20; k++)
            {
                Sleep(75);
                cS->move();
            }
            count++;
            cout << "Count:" << count << endl;
            box->setDirection(0, -1);
            box2->setDirection(0, 1);
            for (int k = 0; k < 20; k++)
            {
                Sleep(75);
                cS->move();
            }
        }
    }

    return 0;
}
