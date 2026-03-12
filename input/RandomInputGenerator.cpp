#include "RandomInputGenerator.h"
#include <cstdlib>

int RandomInputGenerator::generateInput() {
    return rand() % 5 + 1;
}