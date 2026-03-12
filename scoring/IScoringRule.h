#pragma once

class IScoringRule {
public:
    virtual int computeScore(int input) = 0;
    virtual ~IScoringRule() {}
};