#include <stdint.h>

/* one byte scancodes are just as it is
 * multibyte scancodes are as big-endian
 * key release is constructed as |= 0x0080 - if scancode hasn't 0x0080 bit set
 */

uint32_t qubes_keycode2scancode[256] = {
    0x0000,    /* 0        */
    0x0000,    /* 1        */
    0x0000,    /* 2        */
    0x0000,    /* 3        */
    0x0000,    /* 4        */
    0x0000,    /* 5        */
    0x0000,    /* 6        */
    0x0000,    /* 7        */
    0x0000,    /* 8        */
    0x0001,    /* 9        0xff1b (Escape)    0x0000 (NoSymbol)    0xff1b (Escape)     */
    0x0002,    /* 10        0x0031 (1)    0x0021 (exclam)    0x0031 (1)    0x0021 (exclam)    0x00b9 (onesuperior)    0x00a1 (exclamdown)     */
    0x0003,    /* 11        0x0032 (2)    0x0040 (at)    0x0032 (2)    0x0040 (at)    0x00b2 (twosuperior)    0x0ac3 (oneeighth)     */
    0x0004,    /* 12        0x0033 (3)    0x0023 (numbersign)    0x0033 (3)    0x0023 (numbersign)    0x00b3 (threesuperior)    0x00a3 (sterling)     */
    0x0005,    /* 13        0x0034 (4)    0x0024 (dollar)    0x0034 (4)    0x0024 (dollar)    0x00bc (onequarter)    0x0024 (dollar)     */
    0x0006,    /* 14        0x0035 (5)    0x0025 (percent)    0x0035 (5)    0x0025 (percent)    0x00bd (onehalf)    0x0ac4 (threeeighths)     */
    0x0007,    /* 15        0x0036 (6)    0x005e (asciicircum)    0x0036 (6)    0x005e (asciicircum)    0x00be (threequarters)    0x0ac5 (fiveeighths)     */
    0x0008,    /* 16        0x0037 (7)    0x0026 (ampersand)    0x0037 (7)    0x0026 (ampersand)    0x007b (braceleft)    0x0ac6 (seveneighths)     */
    0x0009,    /* 17        0x0038 (8)    0x002a (asterisk)    0x0038 (8)    0x002a (asterisk)    0x005b (bracketleft)    0x0ac9 (trademark)     */
    0x000a,    /* 18        0x0039 (9)    0x0028 (parenleft)    0x0039 (9)    0x0028 (parenleft)    0x005d (bracketright)    0x00b1 (plusminus)     */
    0x000b,    /* 19        0x0030 (0)    0x0029 (parenright)    0x0030 (0)    0x0029 (parenright)    0x007d (braceright)    0x00b0 (degree)     */
    0x000c,    /* 20        0x002d (minus)    0x005f (underscore)    0x002d (minus)    0x005f (underscore)    0x005c (backslash)    0x00bf (questiondown)     */
    0x000d,    /* 21        0x003d (equal)    0x002b (plus)    0x003d (equal)    0x002b (plus)    0xfe5b (dead_cedilla)    0xfe5c (dead_ogonek)     */
    0x000e,    /* 22        0xff08 (BackSpace)    0x0000 (NoSymbol)    0xff08 (BackSpace)     */
    0x000f,    /* 23        0xff09 (Tab)    0xfe20 (ISO_Left_Tab)    0xff09 (Tab)    0xfe20 (ISO_Left_Tab)     */
    0x0010,    /* 24        0x0071 (q)    0x0051 (Q)    0x0071 (q)    0x0051 (Q)    0x0040 (at)    0x07d9 (Greek_OMEGA)     */
    0x0011,    /* 25        0x0077 (w)    0x0057 (W)    0x0077 (w)    0x0057 (W)    0x01b3 (lstroke)    0x01a3 (Lstroke)     */
    0x0012,    /* 26        0x0065 (e)    0x0045 (E)    0x0065 (e)    0x0045 (E)    0x01ea (eogonek)    0x01ca (Eogonek)     */
    0x0013,    /* 27        0x0072 (r)    0x0052 (R)    0x0072 (r)    0x0052 (R)    0x00b6 (paragraph)    0x00ae (registered)     */
    0x0014,    /* 28        0x0074 (t)    0x0054 (T)    0x0074 (t)    0x0054 (T)    0x03bc (tslash)    0x03ac (Tslash)     */
    0x0015,    /* 29        0x0079 (y)    0x0059 (Y)    0x0079 (y)    0x0059 (Y)    0x08fb (leftarrow)    0x00a5 (yen)     */
    0x0016,    /* 30        0x0075 (u)    0x0055 (U)    0x0075 (u)    0x0055 (U)    0x08fe (downarrow)    0x08fc (uparrow)     */
    0x0017,    /* 31        0x0069 (i)    0x0049 (I)    0x0069 (i)    0x0049 (I)    0x08fd (rightarrow)    0x02b9 (idotless)     */
    0x0018,    /* 32        0x006f (o)    0x004f (O)    0x006f (o)    0x004f (O)    0x00f3 (oacute)    0x00d3 (Oacute)     */
    0x0019,    /* 33        0x0070 (p)    0x0050 (P)    0x0070 (p)    0x0050 (P)    0x00fe (thorn)    0x00de (THORN)     */
    0x001a,    /* 34        0x005b (bracketleft)    0x007b (braceleft)    0x005b (bracketleft)    0x007b (braceleft)    0xfe57 (dead_diaeresis)    0xfe58 (dead_abovering)     */
    0x001b,    /* 35        0x005d (bracketright)    0x007d (braceright)    0x005d (bracketright)    0x007d (braceright)    0xfe53 (dead_tilde)    0xfe54 (dead_macron)     */
    0x001c,    /* 36        0xff0d (Return)    0x0000 (NoSymbol)    0xff0d (Return)     */
    0x001d,    /* 37        0xffe3 (Control_L)    0x0000 (NoSymbol)    0xffe3 (Control_L)     */
    0x001e,    /* 38        0x0061 (a)    0x0041 (A)    0x0061 (a)    0x0041 (A)    0x01b1 (aogonek)    0x01a1 (Aogonek)     */
    0x001f,    /* 39        0x0073 (s)    0x0053 (S)    0x0073 (s)    0x0053 (S)    0x01b6 (sacute)    0x01a6 (Sacute)     */
    0x0020,    /* 40        0x0064 (d)    0x0044 (D)    0x0064 (d)    0x0044 (D)    0x00f0 (eth)    0x00d0 (ETH)     */
    0x0021,    /* 41        0x0066 (f)    0x0046 (F)    0x0066 (f)    0x0046 (F)    0x01f0 (dstroke)    0x00aa (ordfeminine)     */
    0x0022,    /* 42        0x0067 (g)    0x0047 (G)    0x0067 (g)    0x0047 (G)    0x03bf (eng)    0x03bd (ENG)     */
    0x0023,    /* 43        0x0068 (h)    0x0048 (H)    0x0068 (h)    0x0048 (H)    0x02b1 (hstroke)    0x02a1 (Hstroke)     */
    0x0024,    /* 44        0x006a (j)    0x004a (J)    0x006a (j)    0x004a (J)    0x006a (j)    0x004a (J)     */
    0x0025,    /* 45        0x006b (k)    0x004b (K)    0x006b (k)    0x004b (K)    0x03a2 (kra)    0x0026 (ampersand)     */
    0x0026,    /* 46        0x006c (l)    0x004c (L)    0x006c (l)    0x004c (L)    0x01b3 (lstroke)    0x01a3 (Lstroke)     */
    0x0027,    /* 47        0x003b (semicolon)    0x003a (colon)    0x003b (semicolon)    0x003a (colon)    0xfe51 (dead_acute)    0xfe59 (dead_doubleacute)     */
    0x0028,    /* 48        0x0027 (apostrophe)    0x0022 (quotedbl)    0x0027 (apostrophe)    0x0022 (quotedbl)    0xfe52 (dead_circumflex)    0xfe5a (dead_caron)     */
    0x0029,    /* 49        0x0060 (grave)    0x007e (asciitilde)    0x0060 (grave)    0x007e (asciitilde)    0x00ac (notsign)    0x00ac (notsign)     */
    0x002a,    /* 50        0xffe1 (Shift_L)    0x0000 (NoSymbol)    0xffe1 (Shift_L)     */
    0x002b,    /* 51        0x005c (backslash)    0x007c (bar)    0x005c (backslash)    0x007c (bar)    0xfe50 (dead_grave)    0xfe55 (dead_breve)     */
    0x002c,    /* 52        0x007a (z)    0x005a (Z)    0x007a (z)    0x005a (Z)    0x01bf (zabovedot)    0x01af (Zabovedot)     */
    0x002d,    /* 53        0x0078 (x)    0x0058 (X)    0x0078 (x)    0x0058 (X)    0x01bc (zacute)    0x01ac (Zacute)     */
    0x002e,    /* 54        0x0063 (c)    0x0043 (C)    0x0063 (c)    0x0043 (C)    0x01e6 (cacute)    0x01c6 (Cacute)     */
    0x002f,    /* 55        0x0076 (v)    0x0056 (V)    0x0076 (v)    0x0056 (V)    0x0ad2 (leftdoublequotemark)    0x0ad0 (leftsinglequotemark)     */
    0x0030,    /* 56        0x0062 (b)    0x0042 (B)    0x0062 (b)    0x0042 (B)    0x0ad3 (rightdoublequotemark)    0x0ad1 (rightsinglequotemark)     */
    0x0031,    /* 57        0x006e (n)    0x004e (N)    0x006e (n)    0x004e (N)    0x01f1 (nacute)    0x01d1 (Nacute)     */
    0x0032,    /* 58        0x006d (m)    0x004d (M)    0x006d (m)    0x004d (M)    0x00b5 (mu)    0x00ba (masculine)     */
    0x0033,    /* 59        0x002c (comma)    0x003c (less)    0x002c (comma)    0x003c (less)    0x08a3 (horizconnector)    0x00d7 (multiply)     */
    0x0034,    /* 60        0x002e (period)    0x003e (greater)    0x002e (period)    0x003e (greater)    0x00b7 (periodcentered)    0x00f7 (division)     */
    0x0035,    /* 61        0x002f (slash)    0x003f (question)    0x002f (slash)    0x003f (question)    0xfe60 (dead_belowdot)    0xfe56 (dead_abovedot)     */
    0x0036,    /* 62        0xffe2 (Shift_R)    0x0000 (NoSymbol)    0xffe2 (Shift_R)     */
    0x0037,    /* 63        0xffaa (KP_Multiply)    0x1008fe21 (XF86_ClearGrab)    0xffaa (KP_Multiply)    0x1008fe21 (XF86_ClearGrab)     */
    0x0038,    /* 64        0xffe9 (Alt_L)    0xffe7 (Meta_L)    0xffe9 (Alt_L)    0xffe7 (Meta_L)     */
    0x0039,    /* 65        0x0020 (space)    0x0000 (NoSymbol)    0x0020 (space)     */
    0x003a,    /* 66        0xffe5 (Caps_Lock)    0x0000 (NoSymbol)    0xffe5 (Caps_Lock)     */
    0x003b,    /* 67        0xffbe (F1)    0x1008fe01 (XF86_Switch_VT_1)    0xffbe (F1)    0x1008fe01 (XF86_Switch_VT_1)     */
    0x003c,    /* 68        0xffbf (F2)    0x1008fe02 (XF86_Switch_VT_2)    0xffbf (F2)    0x1008fe02 (XF86_Switch_VT_2)     */
    0x003d,    /* 69        0xffc0 (F3)    0x1008fe03 (XF86_Switch_VT_3)    0xffc0 (F3)    0x1008fe03 (XF86_Switch_VT_3)     */
    0x003e,    /* 70        0xffc1 (F4)    0x1008fe04 (XF86_Switch_VT_4)    0xffc1 (F4)    0x1008fe04 (XF86_Switch_VT_4)     */
    0x003f,    /* 71        0xffc2 (F5)    0x1008fe05 (XF86_Switch_VT_5)    0xffc2 (F5)    0x1008fe05 (XF86_Switch_VT_5)     */
    0x0040,    /* 72        0xffc3 (F6)    0x1008fe06 (XF86_Switch_VT_6)    0xffc3 (F6)    0x1008fe06 (XF86_Switch_VT_6)     */
    0x0041,    /* 73        0xffc4 (F7)    0x1008fe07 (XF86_Switch_VT_7)    0xffc4 (F7)    0x1008fe07 (XF86_Switch_VT_7)     */
    0x0042,    /* 74        0xffc5 (F8)    0x1008fe08 (XF86_Switch_VT_8)    0xffc5 (F8)    0x1008fe08 (XF86_Switch_VT_8)     */
    0x0043,    /* 75        0xffc6 (F9)    0x1008fe09 (XF86_Switch_VT_9)    0xffc6 (F9)    0x1008fe09 (XF86_Switch_VT_9)     */
    0x0044,    /* 76        0xffc7 (F10)    0x1008fe0a (XF86_Switch_VT_10)    0xffc7 (F10)    0x1008fe0a (XF86_Switch_VT_10)     */
    0x0045,    /* 77        0xff7f (Num_Lock)    0xfef9 (Pointer_EnableKeys)    0xff7f (Num_Lock)    0xfef9 (Pointer_EnableKeys)     */
    0x0046,    /* 78        0xff14 (Scroll_Lock)    0x0000 (NoSymbol)    0xff14 (Scroll_Lock)     */
    0x0047,    /* 79        0xff95 (KP_Home)    0xffb7 (KP_7)    0xff95 (KP_Home)    0xffb7 (KP_7)     */
    0x0048,    /* 80        0xff97 (KP_Up)    0xffb8 (KP_8)    0xff97 (KP_Up)    0xffb8 (KP_8)     */
    0x0049,    /* 81        0xff9a (KP_Prior)    0xffb9 (KP_9)    0xff9a (KP_Prior)    0xffb9 (KP_9)     */
    0x004a,    /* 82        0xffad (KP_Subtract)    0x1008fe23 (XF86_Prev_VMode)    0xffad (KP_Subtract)    0x1008fe23 (XF86_Prev_VMode)     */
    0x004b,    /* 83        0xff96 (KP_Left)    0xffb4 (KP_4)    0xff96 (KP_Left)    0xffb4 (KP_4)     */
    0x004c,    /* 84        0xff9d (KP_Begin)    0xffb5 (KP_5)    0xff9d (KP_Begin)    0xffb5 (KP_5)     */
    0x004d,    /* 85        0xff98 (KP_Right)    0xffb6 (KP_6)    0xff98 (KP_Right)    0xffb6 (KP_6)     */
    0x004e,    /* 86        0xffab (KP_Add)    0x1008fe22 (XF86_Next_VMode)    0xffab (KP_Add)    0x1008fe22 (XF86_Next_VMode)     */
    0x004f,    /* 87        0xff9c (KP_End)    0xffb1 (KP_1)    0xff9c (KP_End)    0xffb1 (KP_1)     */
    0x0050,    /* 88        0xff99 (KP_Down)    0xffb2 (KP_2)    0xff99 (KP_Down)    0xffb2 (KP_2)     */
    0x0051,    /* 89        0xff9b (KP_Next)    0xffb3 (KP_3)    0xff9b (KP_Next)    0xffb3 (KP_3)     */
    0x0052,    /* 90        0xff9e (KP_Insert)    0xffb0 (KP_0)    0xff9e (KP_Insert)    0xffb0 (KP_0)     */
    0x0053,    /* 91        0xff9f (KP_Delete)    0xffac (KP_Separator)    0xff9f (KP_Delete)    0xffac (KP_Separator)     */
    0x0054,    /* 92        0xfe03 (ISO_Level3_Shift)    0x0000 (NoSymbol)    0xfe03 (ISO_Level3_Shift)     */
    0x0055,    /* 93         */
    0x0056,    /* 94        0x003c (less)    0x003e (greater)    0x003c (less)    0x003e (greater)    0x007c (bar)    0x00a6 (brokenbar)     */
    0x0057,    /* 95        0xffc8 (F11)    0x1008fe0b (XF86_Switch_VT_11)    0xffc8 (F11)    0x1008fe0b (XF86_Switch_VT_11)     */
    0x0058,    /* 96        0xffc9 (F12)    0x1008fe0c (XF86_Switch_VT_12)    0xffc9 (F12)    0x1008fe0c (XF86_Switch_VT_12)     */
    0x0059,    /* 97         */
    0x005a,    /* 98        0xff26 (Katakana)    0x0000 (NoSymbol)    0xff26 (Katakana)     */
    0x005b,    /* 99        0xff25 (Hiragana)    0x0000 (NoSymbol)    0xff25 (Hiragana)     */
    0x005c,    /* 100        0xff23 (Henkan_Mode)    0x0000 (NoSymbol)    0xff23 (Henkan_Mode)     */
    0x005e,    /* 101        0xff27 (Hiragana_Katakana)    0x0000 (NoSymbol)    0xff27 (Hiragana_Katakana)     */
    0x005f,    /* 102        0xff22 (Muhenkan)    0x0000 (NoSymbol)    0xff22 (Muhenkan)     */
    0x0060,    /* 103         */
    0xe01c,    /* 104        0xff8d (KP_Enter)    0x0000 (NoSymbol)    0xff8d (KP_Enter)     */
    0xe01d,    /* 105        0xffe4 (Control_R)    0x0000 (NoSymbol)    0xffe4 (Control_R)     */
    0xe035,    /* 106        0xffaf (KP_Divide)    0x1008fe20 (XF86_Ungrab)    0xffaf (KP_Divide)    0x1008fe20 (XF86_Ungrab)     */
    0x0037,     /* 107        0xff61 (Print)    0xff15 (Sys_Req)    0xff61 (Print)    0xff15 (Sys_Req)     */
    0xe038,    /* 108        0xfe03 (ISO_Level3_Shift)    0x0000 (NoSymbol)    0xfe03 (ISO_Level3_Shift)     */
    0x0000,    /* 109        0xff0a (Linefeed)    0x0000 (NoSymbol)    0xff0a (Linefeed)     */
    0xe047,    /* 110        0xff50 (Home)    0x0000 (NoSymbol)    0xff50 (Home)     */
    0xe048,    /* 111        0xff52 (Up)    0x0000 (NoSymbol)    0xff52 (Up)     */
    0xe049,    /* 112        0xff55 (Prior)    0x0000 (NoSymbol)    0xff55 (Prior)     */
    0xe04b,    /* 113        0xff51 (Left)    0x0000 (NoSymbol)    0xff51 (Left)     */
    0xe04d,    /* 114        0xff53 (Right)    0x0000 (NoSymbol)    0xff53 (Right)     */
    0xe04f,    /* 115        0xff57 (End)    0x0000 (NoSymbol)    0xff57 (End)     */
    0xe050,    /* 116        0xff54 (Down)    0x0000 (NoSymbol)    0xff54 (Down)     */
    0xe051,    /* 117        0xff56 (Next)    0x0000 (NoSymbol)    0xff56 (Next)     */
    0xe052,    /* 118        0xff63 (Insert)    0x0000 (NoSymbol)    0xff63 (Insert)     */
    0xe053,    /* 119        0xffff (Delete)    0x0000 (NoSymbol)    0xffff (Delete)     */
    0x0000,    /* 120         */
    0x0000,    /* 121        0x1008ff12 (XF86AudioMute)    0x0000 (NoSymbol)    0x1008ff12 (XF86AudioMute)     */
    0x0000,    /* 122        0x1008ff11 (XF86AudioLowerVolume)    0x0000 (NoSymbol)    0x1008ff11 (XF86AudioLowerVolume)     */
    0x0000,    /* 123        0x1008ff13 (XF86AudioRaiseVolume)    0x0000 (NoSymbol)    0x1008ff13 (XF86AudioRaiseVolume)     */
    0x0000,    /* 124        0x1008ff2a (XF86PowerOff)    0x0000 (NoSymbol)    0x1008ff2a (XF86PowerOff)     */
    0x0000,    /* 125        0xffbd (KP_Equal)    0x0000 (NoSymbol)    0xffbd (KP_Equal)     */
    0x0000,    /* 126        0x00b1 (plusminus)    0x0000 (NoSymbol)    0x00b1 (plusminus)     */
    0x0000,    /* 127        0xff13 (Pause)    0xff6b (Break)    0xff13 (Pause)    0xff6b (Break)     */
    0x0000,    /* 128         */
    0x0000,    /* 129        0xffae (KP_Decimal)    0x0000 (NoSymbol)    0xffae (KP_Decimal)     */
    0x0000,    /* 130        0xff31 (Hangul)    0x0000 (NoSymbol)    0xff31 (Hangul)     */
    0x0000,    /* 131        0xff34 (Hangul_Hanja)    0x0000 (NoSymbol)    0xff34 (Hangul_Hanja)     */
    0x0000,    /* 132         */
    0xe05b,    /* 133        0xffeb (Super_L)    0x0000 (NoSymbol)    0xffeb (Super_L)     */
    0xe05c,    /* 134        0xffec (Super_R)    0x0000 (NoSymbol)    0xffec (Super_R)     */
    0xe05d,    /* 135        0xff67 (Menu)    0x0000 (NoSymbol)    0xff67 (Menu)     */
    0x0000,    /* 136        0xff69 (Cancel)    0x0000 (NoSymbol)    0xff69 (Cancel)     */
    0x0000,    /* 137        0xff66 (Redo)    0x0000 (NoSymbol)    0xff66 (Redo)     */
    0x0000,    /* 138        0x1005ff70 (SunProps)    0x0000 (NoSymbol)    0x1005ff70 (SunProps)     */
    0x0000,    /* 139        0xff65 (Undo)    0x0000 (NoSymbol)    0xff65 (Undo)     */
    0x0000,    /* 140        0x1005ff71 (SunFront)    0x0000 (NoSymbol)    0x1005ff71 (SunFront)     */
    0x0000,    /* 141        0x1008ff57 (XF86Copy)    0x0000 (NoSymbol)    0x1008ff57 (XF86Copy)     */
    0x0000,    /* 142        0x1005ff73 (SunOpen)    0x0000 (NoSymbol)    0x1005ff73 (SunOpen)     */
    0x0000,    /* 143        0x1008ff6d (XF86Paste)    0x0000 (NoSymbol)    0x1008ff6d (XF86Paste)     */
    0x0000,    /* 144        0xff68 (Find)    0x0000 (NoSymbol)    0xff68 (Find)     */
    0x0000,    /* 145        0x1008ff58 (XF86Cut)    0x0000 (NoSymbol)    0x1008ff58 (XF86Cut)     */
    0x0000,    /* 146        0xff6a (Help)    0x0000 (NoSymbol)    0xff6a (Help)     */
    0x0000,    /* 147        0x1008ff65 (XF86MenuKB)    0x0000 (NoSymbol)    0x1008ff65 (XF86MenuKB)     */
    0x0000,    /* 148        0x1008ff1d (XF86Calculator)    0x0000 (NoSymbol)    0x1008ff1d (XF86Calculator)     */
    0x0000,    /* 149         */
    0x0000,    /* 150        0x1008ff2f (XF86Sleep)    0x0000 (NoSymbol)    0x1008ff2f (XF86Sleep)     */
    0xe063,    /* 151        0x1008ff2b (XF86WakeUp)    0x0000 (NoSymbol)    0x1008ff2b (XF86WakeUp)     */
    0x0000,    /* 152        0x1008ff5d (XF86Explorer)    0x0000 (NoSymbol)    0x1008ff5d (XF86Explorer)     */
    0x0000,    /* 153        0x1008ff7b (XF86Send)    0x0000 (NoSymbol)    0x1008ff7b (XF86Send)     */
    0x0000,    /* 154         */
    0x0000,    /* 155        0x1008ff8a (XF86Xfer)    0x0000 (NoSymbol)    0x1008ff8a (XF86Xfer)     */
    0x0000,    /* 156        0x1008ff41 (XF86Launch1)    0x0000 (NoSymbol)    0x1008ff41 (XF86Launch1)     */
    0x0000,    /* 157        0x1008ff42 (XF86Launch2)    0x0000 (NoSymbol)    0x1008ff42 (XF86Launch2)     */
    0x0000,    /* 158        0x1008ff2e (XF86WWW)    0x0000 (NoSymbol)    0x1008ff2e (XF86WWW)     */
    0x0000,    /* 159        0x1008ff5a (XF86DOS)    0x0000 (NoSymbol)    0x1008ff5a (XF86DOS)     */
    0x0000,    /* 160        0x1008ff2d (XF86ScreenSaver)    0x0000 (NoSymbol)    0x1008ff2d (XF86ScreenSaver)     */
    0x0000,    /* 161         */
    0x0000,    /* 162        0x1008ff74 (XF86RotateWindows)    0x0000 (NoSymbol)    0x1008ff74 (XF86RotateWindows)     */
    0x0000,    /* 163        0x1008ff19 (XF86Mail)    0x0000 (NoSymbol)    0x1008ff19 (XF86Mail)     */
    0x0000,    /* 164        0x1008ff30 (XF86Favorites)    0x0000 (NoSymbol)    0x1008ff30 (XF86Favorites)     */
    0x0000,    /* 165        0x1008ff33 (XF86MyComputer)    0x0000 (NoSymbol)    0x1008ff33 (XF86MyComputer)     */
    0x0000,    /* 166        0x1008ff26 (XF86Back)    0x0000 (NoSymbol)    0x1008ff26 (XF86Back)     */
    0x0000,    /* 167        0x1008ff27 (XF86Forward)    0x0000 (NoSymbol)    0x1008ff27 (XF86Forward)     */
    0x0000,    /* 168         */
    0x0000,    /* 169        0x1008ff2c (XF86Eject)    0x0000 (NoSymbol)    0x1008ff2c (XF86Eject)     */
    0x0000,    /* 170        0x1008ff2c (XF86Eject)    0x1008ff2c (XF86Eject)    0x1008ff2c (XF86Eject)    0x1008ff2c (XF86Eject)     */
    0xe019,    /* 171        0x1008ff17 (XF86AudioNext)    0x0000 (NoSymbol)    0x1008ff17 (XF86AudioNext)     */
    0xe0a2,    /* 172        0x1008ff14 (XF86AudioPlay)    0x1008ff31 (XF86AudioPause)    0x1008ff14 (XF86AudioPlay)    0x1008ff31 (XF86AudioPause)     */
    0xe010,    /* 173        0x1008ff16 (XF86AudioPrev)    0x0000 (NoSymbol)    0x1008ff16 (XF86AudioPrev)     */
    0xe0a4,    /* 174        0x1008ff15 (XF86AudioStop)    0x1008ff2c (XF86Eject)    0x1008ff15 (XF86AudioStop)    0x1008ff2c (XF86Eject)     */
    0x0000,    /* 175        0x1008ff1c (XF86AudioRecord)    0x0000 (NoSymbol)    0x1008ff1c (XF86AudioRecord)     */
    0x0000,    /* 176        0x1008ff3e (XF86AudioRewind)    0x0000 (NoSymbol)    0x1008ff3e (XF86AudioRewind)     */
    0x0000,    /* 177        0x1008ff6e (XF86Phone)    0x0000 (NoSymbol)    0x1008ff6e (XF86Phone)     */
    0x0000,    /* 178         */
    0x0000,    /* 179        0x1008ff81 (XF86Tools)    0x0000 (NoSymbol)    0x1008ff81 (XF86Tools)     */
    0x0000,    /* 180        0x1008ff18 (XF86HomePage)    0x0000 (NoSymbol)    0x1008ff18 (XF86HomePage)     */
    0x0000,    /* 181        0x1008ff73 (XF86Reload)    0x0000 (NoSymbol)    0x1008ff73 (XF86Reload)     */
    0x0000,    /* 182        0x1008ff56 (XF86Close)    0x0000 (NoSymbol)    0x1008ff56 (XF86Close)     */
    0x0000,    /* 183         */
    0x0000,    /* 184         */
    0x0000,    /* 185        0x1008ff78 (XF86ScrollUp)    0x0000 (NoSymbol)    0x1008ff78 (XF86ScrollUp)     */
    0x0000,    /* 186        0x1008ff79 (XF86ScrollDown)    0x0000 (NoSymbol)    0x1008ff79 (XF86ScrollDown)     */
    0x0000,    /* 187        0x0028 (parenleft)    0x0000 (NoSymbol)    0x0028 (parenleft)     */
    0x0000,    /* 188        0x0029 (parenright)    0x0000 (NoSymbol)    0x0029 (parenright)     */
    0x0000,    /* 189        0x1008ff68 (XF86New)    0x0000 (NoSymbol)    0x1008ff68 (XF86New)     */
    0x0000,    /* 190        0xff66 (Redo)    0x0000 (NoSymbol)    0xff66 (Redo)     */
    0x0000,    /* 191        0x1008ff81 (XF86Tools)    0x0000 (NoSymbol)    0x1008ff81 (XF86Tools)     */
    0x0000,    /* 192        0x1008ff45 (XF86Launch5)    0x0000 (NoSymbol)    0x1008ff45 (XF86Launch5)     */
    0x0000,    /* 193        0x1008ff65 (XF86MenuKB)    0x0000 (NoSymbol)    0x1008ff65 (XF86MenuKB)     */
    0x0000,    /* 194         */
    0x0000,    /* 195         */
    0x0000,    /* 196         */
    0x0000,    /* 197         */
    0x0000,    /* 198         */
    0xe079,    /* 199        0x1008ffa9 (XF86TouchpadToggle)    0x0000 (NoSymbol)    0x1008ffa9 (XF86TouchpadToggle)     */
    0x0000,    /* 200        0x1008ffb0 (XF86TouchpadOn)    0x0000 (NoSymbol)    0x1008ffb0 (XF86TouchpadOn)     */
    0x0000,    /* 201        0x1008ffb1 (XF86TouchpadOff)    0x0000 (NoSymbol)    0x1008ffb1 (XF86TouchpadOff)     */
    0x6fef,    /* 202        eject on ThinkPad */
    0x0000,    /* 203        0xff7e (Mode_switch)    0x0000 (NoSymbol)    0xff7e (Mode_switch)     */
    0x0000,    /* 204        0x0000 (NoSymbol)    0xffe9 (Alt_L)    0x0000 (NoSymbol)    0xffe9 (Alt_L)     */
    0x0000,    /* 205        0x0000 (NoSymbol)    0xffe7 (Meta_L)    0x0000 (NoSymbol)    0xffe7 (Meta_L)     */
    0x0000,    /* 206        0x0000 (NoSymbol)    0xffeb (Super_L)    0x0000 (NoSymbol)    0xffeb (Super_L)     */
    0x0000,    /* 207        0x0000 (NoSymbol)    0xffed (Hyper_L)    0x0000 (NoSymbol)    0xffed (Hyper_L)     */
    0x0000,    /* 208        0x1008ff14 (XF86AudioPlay)    0x0000 (NoSymbol)    0x1008ff14 (XF86AudioPlay)     */
    0x0000,    /* 209        0x1008ff31 (XF86AudioPause)    0x0000 (NoSymbol)    0x1008ff31 (XF86AudioPause)     */
    0x0000,    /* 210        0x1008ff43 (XF86Launch3)    0x0000 (NoSymbol)    0x1008ff43 (XF86Launch3)     */
    0x0000,    /* 211        0x1008ff44 (XF86Launch4)    0x0000 (NoSymbol)    0x1008ff44 (XF86Launch4)     */
    0x0000,    /* 212         */
    0x0000,    /* 213        0x1008ffa7 (XF86Suspend)    0x0000 (NoSymbol)    0x1008ffa7 (XF86Suspend)     */
    0x0000,    /* 214        0x1008ff56 (XF86Close)    0x0000 (NoSymbol)    0x1008ff56 (XF86Close)     */
    0x0000,    /* 215        0x1008ff14 (XF86AudioPlay)    0x0000 (NoSymbol)    0x1008ff14 (XF86AudioPlay)     */
    0x0000,    /* 216        0x1008ff97 (XF86AudioForward)    0x0000 (NoSymbol)    0x1008ff97 (XF86AudioForward)     */
    0x0000,    /* 217         */
    0x0000,    /* 218        0xff61 (Print)    0x0000 (NoSymbol)    0xff61 (Print)     */
    0x0000,    /* 219         */
    0x0000,    /* 220        0x1008ff8f (XF86WebCam)    0x0000 (NoSymbol)    0x1008ff8f (XF86WebCam)     */
    0x0000,    /* 221         */
    0x0000,    /* 222         */
    0x0000,    /* 223        0x1008ff19 (XF86Mail)    0x0000 (NoSymbol)    0x1008ff19 (XF86Mail)     */
    0x0000,    /* 224         */
    0x0000,    /* 225        0x1008ff1b (XF86Search)    0x0000 (NoSymbol)    0x1008ff1b (XF86Search)     */
    0x0000,    /* 226         */
    0x0000,    /* 227        0x1008ff3c (XF86Finance)    0x0000 (NoSymbol)    0x1008ff3c (XF86Finance)     */
    0x0000,    /* 228         */
    0x0000,    /* 229        0x1008ff36 (XF86Shop)    0x0000 (NoSymbol)    0x1008ff36 (XF86Shop)     */
    0x0000,    /* 230         */
    0x0000,    /* 231        0xff69 (Cancel)    0x0000 (NoSymbol)    0xff69 (Cancel)     */
    0x0000,    /* 232        0x1008ff03 (XF86MonBrightnessDown)    0x0000 (NoSymbol)    0x1008ff03 (XF86MonBrightnessDown)     */
    0x0000,    /* 233        0x1008ff02 (XF86MonBrightnessUp)    0x0000 (NoSymbol)    0x1008ff02 (XF86MonBrightnessUp)     */
    0x0000,    /* 234        0x1008ff32 (XF86AudioMedia)    0x0000 (NoSymbol)    0x1008ff32 (XF86AudioMedia)     */
    0x0000,    /* 235        0x1008ff59 (XF86Display)    0x0000 (NoSymbol)    0x1008ff59 (XF86Display)     */
    0x0000,    /* 236        0x1008ff04 (XF86KbdLightOnOff)    0x0000 (NoSymbol)    0x1008ff04 (XF86KbdLightOnOff)     */
    0x0000,    /* 237        0x1008ff06 (XF86KbdBrightnessDown)    0x0000 (NoSymbol)    0x1008ff06 (XF86KbdBrightnessDown)     */
    0x0000,    /* 238        0x1008ff05 (XF86KbdBrightnessUp)    0x0000 (NoSymbol)    0x1008ff05 (XF86KbdBrightnessUp)     */
    0x0000,    /* 239        0x1008ff7b (XF86Send)    0x0000 (NoSymbol)    0x1008ff7b (XF86Send)     */
    0x0000,    /* 240        0x1008ff72 (XF86Reply)    0x0000 (NoSymbol)    0x1008ff72 (XF86Reply)     */
    0x0000,    /* 241        0x1008ff90 (XF86MailForward)    0x0000 (NoSymbol)    0x1008ff90 (XF86MailForward)     */
    0x0000,    /* 242        0x1008ff77 (XF86Save)    0x0000 (NoSymbol)    0x1008ff77 (XF86Save)     */
    0x0000,    /* 243        0x1008ff5b (XF86Documents)    0x0000 (NoSymbol)    0x1008ff5b (XF86Documents)     */
    0x0000,    /* 244        0x1008ff93 (XF86Battery)    0x0000 (NoSymbol)    0x1008ff93 (XF86Battery)     */
    0x0000,    /* 245        0x1008ff94 (XF86Bluetooth)    0x0000 (NoSymbol)    0x1008ff94 (XF86Bluetooth)     */
    0x0000,    /* 246        0x1008ff95 (XF86WLAN)    0x0000 (NoSymbol)    0x1008ff95 (XF86WLAN)     */
    0x0000,    /* 247         */
    0x0000,    /* 248         */
    0x0000,    /* 249         */
    0x0000,    /* 250         */
    0x0000,    /* 251         */
    0x0000,    /* 252         */
    0x0000,    /* 253         */
    0x0000,    /* 254         */
    0x0000,    /* 255         */
};
