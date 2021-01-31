//
// Created by MugnierPC-N202 on 15/11/2020.
//

#ifndef H_FSM_EVENTS_H
#define H_FSM_EVENTS_H

enum struct Signal{ ENTRY_SIG = 0, EXIT_SIG, INIT_SIG, CS_SIG};
enum struct Handling_Result{HANDLED, IGNORED, TRANSITION};


struct Event{
    Event(Signal sig):_sig(sig){};
    Signal _sig;
};

using Handler_Func = std::function <void(Event*)>;
using State_Exit_Func = std::function <void(void)>;
using Subnstate_Exit_Func = std::function <void(void)>;
using Trigger_Transition_Func = std::function <void(void)>;

#endif //H_FSM_EVENTS_H
