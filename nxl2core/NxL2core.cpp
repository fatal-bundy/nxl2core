// NxL2core.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "common.h"


HMODULE nxl22 = LoadLibrary(TEXT("NxL2Core_2.dll"));
NxL2_2_AddBookkeeping AddBookkeeping = (NxL2_2_AddBookkeeping)GetProcAddress(nxl22, "NxL2AddBookkeeping");
NxL2_2_CancelRequestRFID CancelRequestRFID = (NxL2_2_CancelRequestRFID)GetProcAddress(nxl22, "NxL2CancelRequestRFID");
NxL2_2_CheckStoreOpenTime CheckStoreOpenTime = (NxL2_2_CheckStoreOpenTime)GetProcAddress(nxl22, "NxL2CheckStoreOpenTime");
NxL2_2_DecreaseCoinCount DecreaseCoinCount = (NxL2_2_DecreaseCoinCount)GetProcAddress(nxl22, "NxL2DecreaseCoinCount");
NxL2_2_Delete Delete = (NxL2_2_Delete)GetProcAddress(nxl22, "NxL2Delete");
NxL2_2_EnableWdt EnableWdt = (NxL2_2_EnableWdt)GetProcAddress(nxl22, "NxL2EnableWdt");
NxL2_2_GetAppicationStep GetAppicationStep = (NxL2_2_GetAppicationStep)GetProcAddress(nxl22, "NxL2GetAppicationStep");
NxL2_2_GetAutoEndLockCount GetAutoEndLockCount = (NxL2_2_GetAutoEndLockCount)GetProcAddress(nxl22, "NxL2GetAutoEndLockCount");
NxL2_2_GetAutoEndRemainderTime GetAutoEndRemainderTime = (NxL2_2_GetAutoEndRemainderTime)GetProcAddress(nxl22, "NxL2GetAutoEndRemainderTime");
NxL2_2_GetCoinCount GetCoinCount = (NxL2_2_GetCoinCount)GetProcAddress(nxl22, "NxL2GetCoinCount");
NxL2_2_GetCoinStatus GetCoinStatus = (NxL2_2_GetCoinStatus)GetProcAddress(nxl22, "NxL2GetCoinStatus");
NxL2_2_GetDllVersion GetDllVersion = (NxL2_2_GetDllVersion)GetProcAddress(nxl22, "NxL2GetDllVersion");
NxL2_2_GetGameID GetGameID = (NxL2_2_GetGameID)GetProcAddress(nxl22, "NxL2GetGameID");
NxL2_2_GetGameSettingA GetGameSettingA = (NxL2_2_GetGameSettingA)GetProcAddress(nxl22, "NxL2GetGameSettingA");
NxL2_2_GetGameSettingW GetGameSettingW = (NxL2_2_GetGameSettingW)GetProcAddress(nxl22, "NxL2GetGameSettingW");
NxL2_2_GetIOStatus GetIOStatus = (NxL2_2_GetIOStatus)GetProcAddress(nxl22, "NxL2GetIOStatus");
NxL2_2_GetInput GetInput = (NxL2_2_GetInput)GetProcAddress(nxl22, "NxL2GetInput");
NxL2_2_GetRFIDID GetRFIDID = (NxL2_2_GetRFIDID)GetProcAddress(nxl22, "NxL2GetRFIDID");
NxL2_2_GetRFIDResult GetRFIDResult = (NxL2_2_GetRFIDResult)GetProcAddress(nxl22, "NxL2GetRFIDResult");
NxL2_2_GetSystemSettingA GetSystemSettingA = (NxL2_2_GetSystemSettingA)GetProcAddress(nxl22, "NxL2GetSystemSettingA");
NxL2_2_GetSystemSettingW GetSystemSettingW = (NxL2_2_GetSystemSettingW)GetProcAddress(nxl22, "NxL2GetSystemSettingW");
NxL2_2_Init Init = (NxL2_2_Init)GetProcAddress(nxl22, "NxL2Init");
NxL2_2_IsOlderVersion IsOlderVersion = (NxL2_2_IsOlderVersion)GetProcAddress(nxl22, "NxL2IsOlderVersion");
NxL2_2_IsRFIDRead IsRFIDRead = (NxL2_2_IsRFIDRead)GetProcAddress(nxl22, "NxL2IsRFIDRead");
NxL2_2_LockAutoEnd LockAutoEnd = (NxL2_2_LockAutoEnd)GetProcAddress(nxl22, "NxL2LockAutoEnd");
NxL2_2_NotifyCredit NotifyCredit = (NxL2_2_NotifyCredit)GetProcAddress(nxl22, "NxL2NotifyCredit");
NxL2_2_NotifyEndApplication NotifyEndApplication = (NxL2_2_NotifyEndApplication)GetProcAddress(nxl22, "NxL2NotifyEndApplication");
NxL2_2_RequestRFID RequestRFID = (NxL2_2_RequestRFID)GetProcAddress(nxl22, "NxL2RequestRFID");
NxL2_2_SetGameSettingA SetGameSettingA = (NxL2_2_SetGameSettingA)GetProcAddress(nxl22, "NxL2SetGameSettingA");
NxL2_2_SetGameSettingW SetGameSettingW = (NxL2_2_SetGameSettingW)GetProcAddress(nxl22, "NxL2SetGameSettingW");
NxL2_2_UnlockAutoEnd UnlockAutoEnd = (NxL2_2_UnlockAutoEnd)GetProcAddress(nxl22, "NxL2UnlockAutoEnd");
NxL2_2_Update Update = (NxL2_2_Update)GetProcAddress(nxl22, "NxL2Update");
NxL2_2_UpdateGameSetting UpdateGameSetting = (NxL2_2_UpdateGameSetting)GetProcAddress(nxl22, "NxL2UpdateGameSetting");

__declspec (dllexport) int NxL2AddBookkeeping(int a1, int a2)
{
	return AddBookkeeping(a1, a2);
}

__declspec (dllexport) signed int NxL2CancelRequestRFID()
{
	return CancelRequestRFID();
}

__declspec (dllexport) int NxL2CheckStoreOpenTime(int a1, int a2)
{
	return CheckStoreOpenTime(a1, a2);
}

__declspec (dllexport) void NxL2DecreaseCoinCount(int a1)
{
	return DecreaseCoinCount(a1);
}

__declspec (dllexport) void NxL2Delete()
{
	return Delete();
}

__declspec (dllexport) int NxL2EnableWdt(int a1)
{
	return EnableWdt(a1);
}

__declspec (dllexport) void NxL2GetAppicationStep()
{
	return (void)9000;
}

__declspec (dllexport) int NxL2GetAutoEndLockCount()
{
	return GetAutoEndLockCount();
}

__declspec (dllexport) signed int NxL2GetAutoEndRemainderTime()
{
	return GetAutoEndRemainderTime();
}

__declspec (dllexport) char * NxL2GetCoinCount(int a1)
{
	return GetCoinCount(a1);
}

__declspec (dllexport) signed int NxL2GetCoinStatus()
{
	return GetCoinStatus();
}

__declspec (dllexport) const char * NxL2GetDllVersion()
{
	return GetDllVersion();
}

__declspec (dllexport) int NxL2GetGameID()
{
	return 310300;
}

__declspec (dllexport) int NxL2GetGameSettingA(LPCSTR a1, DWORD64 a2)
{
	if (!strcmp(a1, "SVVolume"))
	{
		*(DWORD64 *)a2 = 10;
		return 10;
	}
	if (!strcmp(a1, "SEVolume"))
	{
		*(DWORD64 *)a2 = 10;
		return 10;
	}
	if (!strcmp(a1, "BGMVolume"))
	{
		*(DWORD64 *)a2 = 10;
		return 10;
	}
	if (!strcmp(a1, "CVVolume"))
	{
		*(DWORD64 *)a2 = 10;
		return 10;
	}
	if (!strcmp(a1, "MasterVolume"))
	{
		*(DWORD64 *)a2 = 100;
		return 100;
	}

	/*if (!strcmp(a1, "CloseTimeAnnounceEnable"))
	{
		*(int *)a2 = 1;
		return 1;
	}
	if (!strcmp(a1, "OpenTimeHour"))
	{
		*(int *)a2 = 1;
		return 7;
	}
	if (!strcmp(a1, "OpenTimeMinuts"))
	{
		*(int *)a2 = 1;
		return 0;
	}
	if (!strcmp(a1, "CloseTimeHour"))
	{
		*(int *)a2 = 1;
		return 19;
	}
	if (!strcmp(a1, "CloseTimeMinuts"))
	{
		*(int *)a2 = 1;
		return 22;
	}
	if (!strcmp(a1, "CloseAnnounceTimeMinuts"))
	{
		*(int *)a2 = 1;
		return 1;
	}*/
	return GetGameSettingA(a1, a2);
}

__declspec (dllexport) int NxL2GetGameSettingW(void *a1, int a2)
{
	if (!wcscmp((wchar_t *)a1, L"BROADCAST_SIDE"))
	{
		*(int *)a2 = 1;
		return 1;
	}
	if (!wcscmp((wchar_t *)a1, L"BROADCAST_ISLAND"))
	{
		*(int *)a2 = 1;
		return 2;
	}
	if (!wcscmp((wchar_t *)a1, L"EventMode"))
	{
		return 0;
	}
	return GetGameSettingW(a1, a2);
}

__declspec (dllexport) int NxL2GetSystemSettingW(void *a1, int a2)
{
	if (!wcscmp((wchar_t *)a1, L"Resolution"))
	{
		return 1;
	}
	if (!wcscmp((wchar_t *)a1, L"StoreMatchGroup"))
	{
		return GROUP_A;
	}
	if (!wcscmp((wchar_t *)a1, L"StoreMatchType"))
	{
		return 0;
	}
	return GetSystemSettingW(a1, a2);
}

__declspec (dllexport) int NxL2GetIOStatus()
{
	return GetIOStatus();
}

__declspec (dllexport) void * NxL2GetInput()
{
	return GetInput();
}

__declspec (dllexport) signed int NxL2GetRFIDID(__m128i *a1)
{
	return GetRFIDID(a1);
}

__declspec (dllexport) signed int NxL2GetRFIDResult()
{
	return GetRFIDResult();
}

__declspec (dllexport) int NxL2GetSystemSettingA(LPCSTR a1, int a2)
{
	if (!strcmp(a1, "Resolution"))
	{
		a2 = 1;
		return 1;
	}
	if (!strcmp(a1, "CoinCreditCoin"))
	{
		a2 = 1;
		return 1;
	}
	if (!strcmp(a1, "CoinCreditCredit"))
	{
		a2 = 1;
		return 1;
	}
	a2 = 1;
	return 1;
}

__declspec (dllexport) signed int NxL2Init(int a1)
{
	Init(1);
	return 1;
}

__declspec (dllexport) int NxL2IsOlderVersion()
{
	return IsOlderVersion();
}

__declspec (dllexport) bool NxL2IsRFIDRead()
{
	return IsRFIDRead();
}

__declspec (dllexport) int NxL2LockAutoEnd()
{
	return LockAutoEnd();
}

__declspec (dllexport) void * NxL2NotifyCredit(int a1, int a2, void *a3)
{
	return NotifyCredit(a1, a2, a3);
}

__declspec (dllexport) void * NxL2NotifyEndApplication(void *a1)
{
	return NotifyEndApplication(a1);
}

__declspec (dllexport) signed int NxL2RequestRFID()
{
	return RequestRFID();
}

__declspec (dllexport) int NxL2SetGameSettingA(LPCSTR a1, int a2)
{

	return SetGameSettingA(a1, a2);
}

__declspec (dllexport) int NxL2SetGameSettingW(int a1, int a2)
{
	return SetGameSettingW(a1, a2);
}

__declspec (dllexport) int NxL2UnlockAutoEnd()
{
	return UnlockAutoEnd();
}

__declspec (dllexport) int NxL2Update()
{
	return Update();
}

__declspec (dllexport) DWORD NxL2UpdateGameSetting()
{
	return UpdateGameSetting();
}