#pragma once
#include "IRewardRule.h"

class SimpleRewardRule : public IRewardRule {
public:
    int computeReward(int baseScore) override;
};