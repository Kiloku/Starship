#pragma once

#include <libultraship.h>
#include "port/hooks/impl/EventSystem.h"

typedef enum {
    PLAYER_ACTION_BOOST,
    PLAYER_ACTION_BRAKE,
    PLAYER_ACTION_SHOOT, //TODO this and all below
    PLAYER_ACTION_SHOOT_CHARGED,
    PLAYER_ACTION_BOMB,
} PlayerAction;

DEFINE_EVENT(PlayerActionEvent, 
    PlayerAction action;
);

typedef enum { //TODO this and all below
    PLAYER_MOVE_TURN, //Normal turning with the stick
    PLAYER_MOVE_BANK, //Full lateral banking with Z/R
    PLAYER_MOVE_PITCH,
    PLAYER_MOVE_SOMERSAULT,
    PLAYER_MOVE_U_TURN,
    PLAYER_MOVE_BARREL_ROLL,
} PlayerMovement;

DEFINE_EVENT(PlayerMovementEvent, 
    PlayerMovement movement;
    f32 magnitude;
);