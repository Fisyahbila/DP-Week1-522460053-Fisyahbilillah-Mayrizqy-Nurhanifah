#include "run/RunSession.h"
#include "scoring/SimpleScoringRule.h"
#include "input/RandomInputGenerator.h"
#include "reward/BonusRewardRule.h"


int main()
{
    RandomInputGenerator inputGen;
    SimpleScoringRule scoring;
    BonusRewardRule reward;

    RunSession run(&inputGen, &scoring, &reward);

    run.start();

    return 0;
}