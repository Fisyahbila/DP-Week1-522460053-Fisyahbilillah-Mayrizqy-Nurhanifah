#pragma once
#include "IInputGenerator.h"

class FixedInputGenerator : public IInputGenerator {
public:
    int generateInput() override;
};