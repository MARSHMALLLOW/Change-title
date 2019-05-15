#include <Windows.h>

int main() {
	//while(1), if u 1t.
	//FreeConsole(), also if u 1t.
	HWND hWnd = FindWindow(NULL, "CorruptWind"); //Find the window.
	if(hWnd)
	{
		//If window is ready,
		SetWindowTitle(hWnd, "HAHAHA EAT IT!");
	}
}
