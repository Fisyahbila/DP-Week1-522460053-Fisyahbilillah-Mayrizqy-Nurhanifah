#pragma once
#include "IScoringRule.h"

class SimpleScoringRule : public IScoringRule {
public:
    int computeScore(int input) override;
};