#ifndef SCORELOOPEVENTHANDLER_H
#define SCORELOOPEVENTHANDLER_H

#include <bb/core/AbstractBpsEventHandler.hpp>

#include <scoreloop/scoreloopcore.h>

class ScoreloopEventHandler : protected bb::AbstractBpsEventHandler
{
public:
    ScoreloopEventHandler(SC_InitData_t initData);

    void event(bps_event_t *event);

private:
    SC_InitData_t m_initData;
};

#endif // SCORELOOPEVENTHANDLER_H
