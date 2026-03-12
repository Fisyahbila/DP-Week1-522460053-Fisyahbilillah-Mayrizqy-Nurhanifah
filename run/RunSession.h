#pragma once
#include "../input/IInputGenerator.h"
#include "../scoring/IScoringRule.h"
#include "../reward/IRewardRule.h"
#include "../shop/ShopSystem.h"

class RunSession {
private:
    IInputGenerator* inputGen;
    IScoringRule* scoringRule;
    IRewardRule* rewardRule;

    ShopSystem shop;
    int money;

public:
    RunSession(
        IInputGenerator* input,
        IScoringRule* score,
        IRewardRule* reward
    );

    void start();
};