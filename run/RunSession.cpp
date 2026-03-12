#include <iostream>
#include "RunSession.h"

RunSession::RunSession(IInputGenerator* input,
                       IScoringRule* score,
                       IRewardRule* reward)
{
    inputGen = input;
    scoringRule = score;
    rewardRule = reward;
    money = 0;
}

void RunSession::start()
{
    std::cout << "=== RUN START ===\n";

    for(int round = 1; round <= 3; round++)
    {
        std::cout << "\nRound " << round << "\n";

        int input = inputGen->generateInput();
        std::cout << "[PLAY] input generated: " << input << "\n";

        int baseScore = scoringRule->computeScore(input);
        std::cout << "[SCORE] base score: " << baseScore << "\n";

        int reward = rewardRule->computeReward(baseScore);

        money += reward;

        std::cout << "[REWARD] gain: " << reward
                  << " | money: " << money << "\n";

        shop.openShop();

    }

    std::cout << "\n=== RUN END ===\n";
    std::cout << "Final money: " << money << "\n";
}