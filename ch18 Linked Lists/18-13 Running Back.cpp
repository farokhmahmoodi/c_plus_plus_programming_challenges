/*Program 18-11 makes a person run from across the screen, starting near the left edge of the screen and ending near the right edge.
Modify the program so that the person turns around and runs back to the starting point.*/

// This program illustrates animation using the
// ImageMap class.
#include "ImageMap.h"

int main()
{
    // Figure 1 - a snapshot of a person running
    ImageMap figure1;

    // Set up the coordinates for the  various body parts
    // of the person in the first running position
    short int lowerLeg1[] = { 1, 10, 2, 10, 3, 10, -1, -1};
    short int thigh1[] = { 4, 9, 5, 8, 6, 7, 7, 6, -1, -1};
    short int thigh2[] = { 6, 7, 7, 8, 8, 9, -1, -1};
    short int lowerLeg2[] = {8, 10, 8, 11, -1, -1};
    short int torso[] = { 8, 5, 9, 4, 10, 3, 11, 2, -1, -1};
    short int upperArms[] = { 7, 2, 8, 3, 9,
                              4, 10, 5, 11, 6, -1, -1
                            };
    short int foreArm1[] = { 12, 5, 13, 4, -1, -1};
    short int foreArm2[] = {6, 3, 5, 4, -1, -1};
    short int  * figure1AllParts [ ] =
                  {
                   lowerLeg1, lowerLeg2, thigh1, thigh2, torso,
                   upperArms, foreArm1, foreArm2, 0
                  };
    // Add the coordinates that make up the various body
    // parts to the image map for the first runnning position
    int k = 0;
    for (int k = 0; figure1AllParts[k] != 0; k++)
        figure1.add(figure1AllParts[k]);

    // Figure 2- a snapshot of the person in a
    //  different running position
    ImageMap figure2;
    short int p2LowerLeg1[] = {1, 11, 2, 10, 3, 9, -1, -1};
    short int p2thigh1[] = {3, 9, 3, 8, 3, 7, -1, -1};
    short int p2thigh2[] = {4, 7, 5, 7, 6, 7, -1, -1};
    short int p2LowerLeg2[] = {6, 8, 6, 9, -1, -1};
    short int p2torso[] = {3, 6, 3, 5, 3, 4, 3, 3,
                           3, 2, 3, 1, -1, -1
                          };
    short int p2UpperArms[] = {1, 3, 2, 3, 4, 3, 5, 3, -1, -1};
    short int p2foreArm1[] = { 1, 4, 1, 5, -1, -1};
    short int p2foreArm2[] = { 5, 2, 5, 1, -1, -1};
    short int *figure2AllParts[] =
               {
                 p2LowerLeg1, p2thigh1, p2thigh2, p2LowerLeg2,
                 p2torso, p2UpperArms, p2foreArm1, p2foreArm2, 0
               };
    for (int k = 0; figure2AllParts[k] != 0; k++)
        figure2.add(figure2AllParts[k]);

    // Figure 3- a snapshot of a person in
    // yet another running position
    ImageMap figure3;
    short int p3torso[] = {4, 7, 4, 6, 4, 5, 4, 4,
                           4, 3, 4, 2, 4, 1, -1, -1
                          };
    short int p3Thigh1[] = {5, 8, 6, 9, -1, -1};
    short int p3Thigh2[] = {3, 8, 2, 9,  -1, -1};
    short int p3LowerLeg1[] = {6, 10, 6, 11, -1, -1};
    short int p3LowerLeg2[] = {1, 8, 0, 7, -1, -1};
    short int p3UpperArm1[] = {3, 4, 2, 5, -1, -1};
    short int p3UpperArm2[] = {5, 4, 6, 5, -1, -1};
    short int p3ForeArm1[] = {3, 6, 4, 7, -1, -1};
    short int p3ForeArm2[] = {7, 4, 8, 3, -1, -1};
    short int * figure3AllParts[] =
                {
                  p3torso, p3Thigh1, p3Thigh2, p3LowerLeg1,
                  p3LowerLeg2,p3UpperArm1, p3UpperArm2,
                  p3ForeArm1, p3ForeArm2, 0
               };

    for (int k = 0; figure3AllParts[k] != 0; k++)
        figure3.add(figure3AllParts[k]);

    ImageMap figure4;

    short int p4lowerLeg1[] = { 10, 10, 11, 10, 12, 10, -1, -1};
    short int p4thigh1[] = { 6, 6, 7, 7, 8, 8, 9, 9, -1, -1};
    short int p4thigh2[] = { 6,8,5,9, -1, -1};
    short int p4lowerLeg2[] = { 5,10,5,11,-1, -1};
    short int p4torso[] = { 5,5, 4,4,3,3,2,2, -1, -1};
    short int p4upperArms[] = {3,5,2,6,5,3,6,2,-1, -1
                            };
    short int p4foreArm1[] = {1,5,0,4,-1, -1};
    short int p4foreArm2[] = {7,3,8,4,-1, -1};
    short int * figure4AllParts[] =
                  {
                   p4lowerLeg1, p4lowerLeg2, p4thigh1, p4thigh2, p4torso,
                   p4upperArms, p4foreArm1, p4foreArm2, 0
                  };

    for (int k = 0; figure4AllParts[k] != 0; k++)
        figure4.add(figure4AllParts[k]);

    ImageMap figure5;

    short int p5lowerLeg1[] = { 11,11,10,10,9,9,-1, -1};
    short int p5thigh1[] = { 9,8,9,7,-1, -1};
    short int p5thigh2[] = { 7,7,8,7,6,7,-1, -1};
    short int p5lowerLeg2[] = {6,8,6,9, -1, -1};
    short int p5torso[] = { 9,6,9,5,9,4,9,3,
                            9,2,9,1,-1, -1};
    short int p5upperArms[] = {8,3,7,3,10,3,11,3,-1, -1
                            };
    short int p5foreArm1[] = {7,2,7,1,-1, -1};
    short int p5foreArm2[] = {11,4,11,5,-1, -1};
    short int * figure5AllParts[] =
                  {
                   p5lowerLeg1, p5lowerLeg2, p5thigh1, p5thigh2, p5torso,
                   p5upperArms, p5foreArm1, p5foreArm2, 0
                  };

    for (int k = 0; figure5AllParts[k] != 0; k++)
        figure5.add(figure5AllParts[k]);

    ImageMap figure6;

    short int p6lowerLeg1[] = { -1, -1};
    short int p6thigh1[] = { -1, -1};
    short int p6thigh2[] = { -1, -1};
    short int p6lowerLeg2[] = { -1, -1};
    short int p6torso[] = { -1, -1};
    short int p6upperArms[] = {-1, -1
                            };
    short int p6foreArm1[] = {-1, -1};
    short int p6foreArm2[] = {-1, -1};
    short int * figure6AllParts[] =
                  {
                   p6lowerLeg1, p6lowerLeg2, p6thigh1, p6thigh2, p6torso,
                   p6upperArms, p6foreArm1, p6foreArm2, 0
                  };

    for (int k = 0; figure6AllParts[k] != 0; k++)
        figure6.add(figure6AllParts[k]);

    // Ask Microsoft Windows to clear the screen
    system("cls");
    // Form an array of all three figures
    ImageMap *sequence[6] = {&figure1, &figure2, &figure3, &figure4, &figure5, &figure6};

    // Animate to create the appearance of
    // running across the screen
//    k = 0;
//    int pos = 0;
//    while (pos <= 60 )
//    {
        // Show the current image at the current position
        sequence[5]->displayAt(60,3);
//        Sleep(400);
        // Erase the current image
//        sequence[3]->eraseAt(pos, 3);
        // Move to next image in the rotation and next position
//        k = (k+1) % 3;
//        pos = pos + 8;
//    }
//    sequence[k]->displayAt(pos, 3);

    return 0;
}
