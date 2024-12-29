#pragma once

#include <libultraship.h>
#include "port/hooks/impl/EventSystem.h"

typedef enum {
    BOOST,
    BRAKE,
    SHOOT, //TODO this and all below
    SHOOT_CHARGED,
    BOMB,
} PlayerAction;

DEFINE_EVENT(4, PlayerActionEvent, EVENT_TYPE_PRE, 
    PlayerAction action;
);

typedef enum { //TODO this and all below
    TURN, //Normal turning with the stick
    BANK, //Full lateral banking with Z/R
    PITCH,
    SOMERSAULT,
    U_TURN,
    BARREL_ROLL,
} PlayerMovement;

DEFINE_EVENT(5, PlayerMovementEvent, EVENT_TYPE_PRE, 
    PlayerMovement movement;
    f32 magnitude;
);