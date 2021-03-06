/*
Copyright (c) 2012 Daniel Burke

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
   distribution.
*/

#ifndef __EVIL_KEY_H_
#define __EVIL_KEY_H_

#ifndef WIN32
#define KEY_EVIL(WVK, WIN, X11, STR) X11
#else
#define KEY_EVIL(WVK, WIN, X11, STR) WIN
#endif

#define KEY_BACKSPACE	KEY_EVIL(  8,  14,  22, "Backspace")
#define KEY_TAB			KEY_EVIL(  9,  15,  23, "Tab")
#define KEY_ENTER		KEY_EVIL( 13,  28,  36, "Enter")
#define KEY_LSHIFT		KEY_EVIL( 16,  42,  50, "LShift")
#define KEY_RSHIFT		KEY_EVIL( 16,  54,  62, "RShift")
#define KEY_LALT		KEY_EVIL(  0,   0,  64, "LAlt")
#define KEY_RALT		KEY_EVIL(  0,   0, 108, "RAlt")
#define KEY_LCONTROL	KEY_EVIL( 17,  29,  37, "LControl")
#define KEY_RCONTROL	KEY_EVIL( 17, 285, 105, "RControl")
#define KEY_PAUSE		KEY_EVIL( 19,  69, 127, "Pause")
#define KEY_CAPSLOCK	KEY_EVIL( 20,  58,  66, "CapsLock")
#define KEY_ESCAPE		KEY_EVIL( 27,   1,   9, "Esc")

#define KEY_SPACE		KEY_EVIL( 32,  57,  65, "Space")
#define KEY_PAGEUP		KEY_EVIL( 33, 329, 112, "PageUp")
#define KEY_PAGEDOWN	KEY_EVIL( 34, 337, 117, "PageDown")
#define KEY_END			KEY_EVIL( 35, 335, 115, "End")
#define KEY_HOME		KEY_EVIL( 36, 327, 110, "Home")

#define KEY_LEFT		KEY_EVIL( 37, 331, 113, "Left")
#define KEY_UP			KEY_EVIL( 38, 328, 111, "Up")
#define KEY_RIGHT		KEY_EVIL( 39, 333, 114, "Right")
#define KEY_DOWN		KEY_EVIL( 40, 336, 116, "Down")

#define KEY_INSERT		KEY_EVIL( 45, 338, 118, "Insert")
#define KEY_DELETE		KEY_EVIL( 46, 339, 119, "Delete")

#define KEY_1			KEY_EVIL( 49,   2,  10, "1")
#define KEY_2			KEY_EVIL( 50,   3,  11, "2")
#define KEY_3			KEY_EVIL( 51,   4,  12, "3")
#define KEY_4			KEY_EVIL( 52,   5,  13, "4")
#define KEY_5			KEY_EVIL( 53,   6,  14, "5")
#define KEY_6			KEY_EVIL( 54,   7,  15, "6")
#define KEY_7			KEY_EVIL( 55,   8,  16, "7")
#define KEY_8			KEY_EVIL( 56,   9,  17, "8")
#define KEY_9			KEY_EVIL( 57,  10,  18, "9")
#define KEY_0			KEY_EVIL(  0,  11,  19, "0")

#define KEY_A			KEY_EVIL( 65, 30, 38, "A")
#define KEY_B			KEY_EVIL( 66, 48, 56, "B")
#define KEY_C			KEY_EVIL( 67, 46, 54, "C")
#define KEY_D			KEY_EVIL( 68, 32, 40, "D")
#define KEY_E			KEY_EVIL( 69, 18, 26, "E")
#define KEY_F			KEY_EVIL( 70, 33, 41, "F")
#define KEY_G			KEY_EVIL( 71, 34, 42, "G")
#define KEY_H			KEY_EVIL( 72, 35, 43, "H")
#define KEY_I			KEY_EVIL( 73, 23, 31, "I")
#define KEY_J			KEY_EVIL( 74, 36, 44, "J")
#define KEY_K			KEY_EVIL( 75, 37, 45, "K")
#define KEY_L			KEY_EVIL( 76, 38, 46, "L")
#define KEY_M			KEY_EVIL( 77, 50, 58, "M")
#define KEY_N			KEY_EVIL( 78, 49, 57, "N")
#define KEY_O			KEY_EVIL( 79, 24, 32, "O")
#define KEY_P			KEY_EVIL( 80, 25, 33, "P")
#define KEY_Q			KEY_EVIL( 81, 16, 24, "Q")
#define KEY_R			KEY_EVIL( 82, 19, 27, "R")
#define KEY_S			KEY_EVIL( 83, 31, 39, "S")
#define KEY_T			KEY_EVIL( 84, 20, 28, "T")
#define KEY_U			KEY_EVIL( 85, 22, 30, "U")
#define KEY_V			KEY_EVIL( 86, 47, 55, "V")
#define KEY_W			KEY_EVIL( 87, 17, 25, "W")
#define KEY_X			KEY_EVIL( 88, 45, 53, "X")
#define KEY_Y			KEY_EVIL( 89, 21, 29, "Y")
#define KEY_Z			KEY_EVIL( 90, 44, 52, "Z")


#define KEY_NUM0		KEY_EVIL( 96, 82, 90, "Num0")
#define KEY_NUM1		KEY_EVIL( 97, 79, 87, "Num1")
#define KEY_NUM2		KEY_EVIL( 98, 80, 88, "Num2")
#define KEY_NUM3		KEY_EVIL( 99, 81, 89, "Num3")
#define KEY_NUM4		KEY_EVIL(100, 75, 83, "Num4")
#define KEY_NUM5		KEY_EVIL(101, 76, 84, "Num5")
#define KEY_NUM6		KEY_EVIL(102, 77, 85, "Num6")
#define KEY_NUM7		KEY_EVIL(103, 71, 79, "Num7")
#define KEY_NUM8		KEY_EVIL(104, 72, 80, "Num8")
#define KEY_NUM9		KEY_EVIL(105, 73, 81, "Num9")
#define KEY_NUMMUL		KEY_EVIL(106, 55, 63, "Num*")
#define KEY_NUMADD		KEY_EVIL(107, 78, 86, "Num+")
#define KEY_NUMSUB		KEY_EVIL(109, 74, 82, "Num-")
#define KEY_NUMDOT		KEY_EVIL(110, 83, 91, "Num.")
#define KEY_NUMDIV		KEY_EVIL(111,309,106, "Num/")
#define KEY_NUMENTER	KEY_EVIL(  0,284,104, "NumEnter")

#define KEY_F1			KEY_EVIL(112, 59, 67, "F1")
#define KEY_F2			KEY_EVIL(113, 60, 68, "F2")
#define KEY_F3			KEY_EVIL(114, 61, 69, "F3")
#define KEY_F4			KEY_EVIL(115, 62, 70, "F4")
#define KEY_F5			KEY_EVIL(116, 63, 71, "F5")
#define KEY_F6			KEY_EVIL(117, 64, 72, "F6")
#define KEY_F7			KEY_EVIL(118, 65, 73, "F7")
#define KEY_F8			KEY_EVIL(119, 66, 74, "F8")
#define KEY_F9			KEY_EVIL(120, 67, 75, "F9")
#define KEY_F10			KEY_EVIL(  0,  0, 76, "F10")
#define KEY_F11			KEY_EVIL(  0, 87, 95, "F11")
#define KEY_F12			KEY_EVIL(  0, 88, 96, "F12")


#define KEY_NUMLOCK		KEY_EVIL(144, 325, 77, "NumLock")
#define KEY_SCROLLLOCK	KEY_EVIL(145,  70, 78, "ScrollLock")

#define KEY_COLON		KEY_EVIL(186, 39, 47, ";")
#define KEY_EQUALS		KEY_EVIL(187, 13, 21, "=")
#define KEY_COMMA		KEY_EVIL(188, 51, 59, ",")
#define KEY_HYPHEN		KEY_EVIL(189, 12, 20, "-")
#define KEY_PERIOD		KEY_EVIL(190, 52, 60, ".")
#define KEY_SLASH		KEY_EVIL(191, 53, 61, "/")

#define KEY_TILDE		KEY_EVIL(192, 41, 49, "~")

#define KEY_LBRACE		KEY_EVIL(219, 26, 34, "[")
#define KEY_BACKSLASH	KEY_EVIL(220, 43, 51, "\\")
#define KEY_RBRACE		KEY_EVIL(221, 27, 35, "]")
#define KEY_QUOTE		KEY_EVIL(222, 40, 48, "'")

#endif /* __EVIL_KEY_H_ */
