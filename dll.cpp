#include <Windows.h>


BOOL WINAPI DllMain(
	HINSTANCE hDLL,
	DWORD Reason,
	LPVOID reserved) {
	
	switch (Reason) {
	case DLL_PROCESS_ATTACH :
		MessageBoxW(NULL, L"Leo's injection", L"VIRUS DETECTED", MB_ICONERROR | MB_OK);
		break;
	}

	return TRUE;
}