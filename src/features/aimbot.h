#ifndef AIMBOT_H
#define AIMBOT_H

#include "../game/sdk.h"
#include "config.h"
#include "../overlay/overlay.h"

using namespace std::chrono_literals;

typedef ULONG(NTAPI* NtUserSendInput_t)(
    _In_ ULONG cInputs,
    _In_ LPINPUT pInputs,
    _In_ LONG cbSize
);

inline class caimbot
{
public:
    NtUserSendInput_t NtUserSendInput;

    Vector_t GetViewAngels();
    void SetCameraPos(Vector_t Position);

	void think();
}aimbot;


inline class ctriggerbot
{
public:
    void think();
}triggerbot;

#endif AIMBOT_H