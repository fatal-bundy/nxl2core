#pragma once
#include <emmintrin.h>
#include <Windows.h>

typedef int(*NxL2_2_AddBookkeeping)(int, int);
typedef signed int(*NxL2_2_CancelRequestRFID)();
typedef int(*NxL2_2_CheckStoreOpenTime)(int, int);
typedef void(*NxL2_2_DecreaseCoinCount)(int);
typedef void(*NxL2_2_Delete)();
typedef int(*NxL2_2_EnableWdt)(int);
typedef void(*NxL2_2_GetAppicationStep)();
typedef int(*NxL2_2_GetAutoEndLockCount)();
typedef signed int(*NxL2_2_GetAutoEndRemainderTime)();
typedef char *(*NxL2_2_GetCoinCount)(int);
typedef signed int(*NxL2_2_GetCoinStatus)();
typedef const char *(*NxL2_2_GetDllVersion)();
typedef int(*NxL2_2_GetGameID)();
typedef int(*NxL2_2_GetGameSettingA)(LPCSTR, int);
typedef int(*NxL2_2_GetGameSettingW)(void *, int);
typedef int(*NxL2_2_GetIOStatus)();
typedef void *(*NxL2_2_GetInput)();
typedef signed int(*NxL2_2_GetRFIDID)(__m128i *);
typedef signed int(*NxL2_2_GetRFIDResult)();
typedef int(*NxL2_2_GetSystemSettingA)(LPCSTR, int);
typedef int(*NxL2_2_GetSystemSettingW)(void *, int);
typedef signed int(*NxL2_2_Init)(int);
typedef int(*NxL2_2_IsOlderVersion)();
typedef bool(*NxL2_2_IsRFIDRead)();
typedef int(*NxL2_2_LockAutoEnd)();
typedef void *(*NxL2_2_NotifyCredit)(int, int, void *);
typedef void *(*NxL2_2_NotifyEndApplication)(void *);
typedef signed int(*NxL2_2_RequestRFID)();
typedef int(*NxL2_2_SetGameSettingA)(LPCSTR, int);
typedef int(*NxL2_2_SetGameSettingW)(int, int);
typedef int(*NxL2_2_UnlockAutoEnd)();
typedef int(*NxL2_2_Update)();
typedef DWORD(*NxL2_2_UpdateGameSetting)();

// DEFs
// in-store match group
#define GROUP_A 0
#define GROUP_B 1
#define GROUP_C 2
#define GROUP_D 3
#define GROUP_E 4
#define GROUP_F 5
#define GROUP_G 6
#define GROUP_H 7