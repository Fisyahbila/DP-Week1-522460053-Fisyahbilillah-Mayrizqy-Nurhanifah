#pragma once
#include "IInputGenerator.h"

class RandomInputGenerator : public IInputGenerator {
public:
    int generateInput() override;
};