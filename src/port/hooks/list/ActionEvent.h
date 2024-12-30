#pragma once

#include "sf64player.h"
#include "port/hooks/impl/EventSystem.h"

DEFINE_EVENT(PlayerActionBoostEvent);

DEFINE_EVENT(PlayerActionBrakeEvent);

DEFINE_EVENT(PlayerActionPreShootEvent, LaserStrength laser;);
DEFINE_EVENT(PlayerActionPostShootEvent, LaserStrength laser;);

DEFINE_EVENT(PlayerActionPreShootChargedEvent);
DEFINE_EVENT(PlayerActionPostShootChargedEvent);

DEFINE_EVENT(PlayerActionPreBombEvent);
DEFINE_EVENT(PlayerActionPostBombEvent);

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