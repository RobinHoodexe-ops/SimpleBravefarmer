// bravebrowseradclicker.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<windows.h>
/*0x41 A key
0x42 B key
0x43 C key
0x44 D key
0x45 E key
0x46 F key
0x47 G key
0x48 H key
0x49 I key
0x4A J key
0x4B K key
0x4C L key
0x4D M key
0x4E N key
0x4F O key
0x50 P key
0x51 Q key
0x52 R key
0x53 S key
0x54 T key
0x55 U key
0x56 V key
0x57 W key
0x58 X key
0x59 Y key
0x5A Z key
VK_TAB
0x09*/
//0x4C
//0x4F
void ShowDesktop()
{
	std::cout << "Yeee\n";
	INPUT inputs[10];
	ZeroMemory(inputs, sizeof(inputs));
	//ctrlkeydown
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0x11;
	//T keydown
	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = 0x54;
	//ctrlkeyup
	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = 0x11;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;
	//Tkeyup
	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = 0x54;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
	//Tab_key for exit of search bar bug
	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = 0x09;
	//Tab key up
	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = 0x09;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;


	//Lkeydown
	/*inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = 0x4C;
	//Lkeyup
	inputs[6].type = INPUT_KEYBOARD;
	inputs[6].ki.wVk = 0x4C;
	inputs[6].ki.dwFlags = KEYEVENTF_KEYUP;
	//Okeydown
	inputs[7].type = INPUT_KEYBOARD;
	inputs[7].ki.wVk = 0x4F;
	//Okeydown
	inputs[8].type = INPUT_KEYBOARD;
	inputs[8].ki.wVk = 0x4F;
	inputs[8].ki.dwFlags = KEYEVENTF_KEYUP;
	//Lkeydown
	inputs[9].type = INPUT_KEYBOARD;
	inputs[9].ki.wVk = 0x4C;
	//Lkeyup
	inputs[10].type = INPUT_KEYBOARD;
	inputs[10].ki.wVk = 0x4C;
	inputs[10].ki.dwFlags = KEYEVENTF_KEYUP;*/
	
	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
	if (uSent != ARRAYSIZE(inputs))
	{
		std::cout << "SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError());
	}
}
void Close_tab()
{
	std::cout << "Yee";
	INPUT inputs[10];
	ZeroMemory(inputs, sizeof(inputs));
	//ctrlkeydown
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0x11;
	
	//Wkeydown
	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = 0x57;
	
	//ctrlkeyup
	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = 0x11;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;
	
	//wkeyup
	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = 0x57;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
	


	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
	if (uSent != ARRAYSIZE(inputs))
	{
		std::cout << "SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError());
	}
}

int main()
{
	while (1) {
		Sleep(20000);
		ShowDesktop();

		Sleep(10000);

		Close_tab();
		
	}
}
