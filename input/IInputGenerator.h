#pragma once

class IInputGenerator {
public:
    virtual int generateInput() = 0;
    virtual ~IInputGenerator() {}
};