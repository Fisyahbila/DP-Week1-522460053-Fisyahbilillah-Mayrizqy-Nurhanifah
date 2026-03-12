#include "run/RunSession.h"
#include "input/FixedInputGenerator.h"
#include "scoring/SimpleScoringRule.h"
#include "reward/SimpleRewardRule.h"

int main()
{
    FixedInputGenerator inputGen;
    SimpleScoringRule scoring;
    SimpleRewardRule reward;

    RunSession run(&inputGen, &scoring, &reward);

    run.start();

    return 0;
}