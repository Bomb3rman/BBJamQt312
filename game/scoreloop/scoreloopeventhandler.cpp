#include "scoreloopeventhandler.h"

ScoreloopEventHandler::ScoreloopEventHandler(SC_InitData_t initData)
{
    m_initData = initData;

    // this only works after SC_Client_New was called
    subscribe(SC_GetBPSEventDomain(&m_initData));
}

void ScoreloopEventHandler::ScoreloopEventHandler::event(bps_event_t *event) {
    SC_HandleBPSEvent(&m_initData, event);
}

