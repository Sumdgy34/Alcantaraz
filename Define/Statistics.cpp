#include "WB.h"  

bool Mini_AI::isTrained() {
    return is_trained;
}

int Mini_AI::numExamples()
{
    return numExamples;
}

int Mini_AI::numResponses()
{
    return numResponses;
}

int Mini_AI::vocabSize()
{
    return sizeOfVocab;
}

int Mini_AI::lastError()
{
    return lastErrorValue;
}
