#include "math.h"
#include <memory.h>

void model_matrix(float position[3], float size[3], float model[4][4])
{
    float identity[4][4] = {{1.0, 0.0, 0.0, 0.0}, {0.0, 1.0, 0.0, 0.0}, {0.0, 0.0, 1.0, 0.0}, {0.0, 0.0, 0.0, 1.0}};

    memcpy(model, identity, sizeof(identity));

    model[0][0] = size[0];
    model[1][1] = size[1];
    model[2][2] = size[2];
    model[3][0] = position[0];
    model[3][1] = position[1];
    model[3][2] = position[2];
}
