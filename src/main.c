#include <stdio.h>
#define pi 3.14159


/*
 *Wall Insulation
 *-- Per Inch
 *
 *
 *
 *
 *-- Per Thickness
 *
 *
 *
 *
 *Celing Insulation
 *-- Per Inch
 *
 *
 *
 * -- Per Thickness
 *
 *
 *Windows
 *
 *
 *Doors
 *
 *
 *Construction Materials
 *
 * -- Per Inch
 *
 *
 *-- Per thickness
 *
 *
 *Sheathing Materials
 *
 * -- Per Inch
 *
 *
 *-- Per thickness
 *
 *
 *Siding Materials
 *
 *
 *
 *Flooring
 *
 *-- Per inch
 *
 *
 *-- Per Thickness
 *
 *
 *
 *Roofing
 *
 *
 *
 *
 * Air Films
 *
 *
 *
 * Air Space
 *
 *
 *
 * Interior Finish
 *
*/




enum insulationType: int{
    FiberglassBatt,
    FiberglassBlownAttic,
    FiberglassBlownWall



    InsulationCount,
};

float const InsulationRTable[InsulationCount] = {1.0f, 1.0f, 0.5f, pi};

enum shapeType: int{
    Square,
    Rectangle,
    Triangle,
    Circle,

    ShapeCount,
};


struct shapeUnion{
    enum shapeType type;
    float length;
    float width;
};


float const AreaCoefTable[ShapeCount] = {1.0f, 1.0f, 0.5f, pi};
float calcArea(struct shapeUnion shape)
{
    float result = AreaCoefTable[shape.type] * shape.length * shape.width;
    return result;
}


int main()
{
    struct shapeUnion test = {Circle, 3.0f, 3.0f};

    float result = calcArea(test);

    printf("%f", result); 
    return 0;
}


