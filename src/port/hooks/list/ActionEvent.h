#pragma once

#include <libultraship.h>
#include "port/hooks/impl/EventSystem.h"

typedef enum {
    BOOST,
    BRAKE,
    SHOOT,
    SHOOT_CHARGED,
    BOMB,
    SOMERSAULT,
    U_TURN,
    BARREL_ROLL,
} PlayerAction;

DEFINE_EVENT(4, PlayerActionEvent, EVENT_TYPE_PRE, 
    PlayerAction action;
);

typedef enum {
    TURN, //Normal turning with the stick
    BANK, //Full lateral banking with Z/R
    PITCH,
} PlayerMovement;

DEFINE_EVENT(5, PlayerMovementEvent, EVENT_TYPE_PRE, 
    PlayerMovement movement;
    f32 magnitude;
);