#include "ShapeAnimator.h"

//*************************************************************
// Moves a simple shape one step by erasing the shape         *
// at its current position, changing its position, and then   *
// redrawing the shape at its new position.                   *
//*************************************************************
void SimpleShape::move()
{
   int dRow, dCol; // Direction of motion
   int savedColor = color;
   color = 0;      // Drawing in color 0 erases the shape
   draw();
   // Compute the new postion for the shape by adding a step in 
   // the proper direction to the current position
   getDirection(dRow, dCol);
   rowPos += dRow;
   colPos += dCol;
   // Draw the shape at its new position in its specified color
   color = savedColor;
   draw();
}

//**********************************
// Draws a box shape               *
//**********************************
void Box::draw() const
{
   int rowPos, colPos;
   COORD pos;

   // Set the color attribute for the box
   SetConsoleTextAttribute(outHandle, getColor());
   getPosition(rowPos, colPos);
   pos.X = colPos; pos.Y = rowPos;

   // Draw the lines that make up the  box
   for (int r = 0; r < height; r++)
   {
      SetConsoleCursorPosition(outHandle, pos);
      for (int c = 0; c < width; c++)
      {
         cout << "*";
      }
      cout << endl;
      pos.Y++;
   }
   // Restore normal text attribute
   SetConsoleTextAttribute(outHandle, 7);
}

//***********************************************
// Constructor sets the color, position, and    *
// dimensions for a box shape, and draws        *
// the box at its initial position              *
//***********************************************
Box::Box(int rowPos, int colPos, int width, int height)
{
   setColor(4);
   setPosition(rowPos, colPos);
   this->width = width;
   this->height = height;
   draw();
}

//*******************************************************
// Constructor builds complex shape by assembling a     *
// vector of constituent shapes                         *
//*******************************************************
ComplexShape::
ComplexShape(const vector<shared_ptr<Shape>>&  shapeCollection)
{
   for (int k = 0; k < shapeCollection.size(); k++)
   {
      auto p = shapeCollection[k];
      shapes.push_back(p);
   }
}

//**************************************
// Moves a complex shape by moving the *
// constituent shapes                  *
//**************************************
void ComplexShape::move()
{
   for (int k = 0; k < shapes.size(); k++)
      shapes[k]->move();
}
