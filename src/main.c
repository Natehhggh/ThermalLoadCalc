#include <stdio.h>
#define pi 3.14159

enum shapeType: int
{
    Square,
    Rectangle,
    Triangle,
    Circle,

    ShapeCount,
};



struct rectangle{
    float length;
    float width;
};


struct shapeUnion{
    enum shapeType type;
    float length;
    float width;
};


float const AreaCoefTable[ShapeCount] = {1.0f, 1.0f, 0.5f, pi};
float calcArea(struct shapeUnion shape){
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


