/*

ESPectrum, a Sinclair ZX Spectrum emulator for Espressif ESP32 SoC

Copyright (c) 2023 Víctor Iborra [Eremus] and David Crespo [dcrespo3d]
https://github.com/EremusOne/ZX-ESPectrum-IDF

Based on ZX-ESPectrum-Wiimote
Copyright (c) 2020, 2022 David Crespo [dcrespo3d]
https://github.com/dcrespo3d/ZX-ESPectrum-Wiimote

Based on previous work by Ramón Martinez and Jorge Fuertes
https://github.com/rampa069/ZX-ESPectrum

Original project by Pete Todd
https://github.com/retrogubbins/paseVGA

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

To Contact the dev team you can write to zxespectrum@gmail.com or 
visit https://zxespectrum.speccy.org/contacto

*/

#ifndef Loaders_h
#define Loaders_h

const unsigned char load48[1273] = {
	0x22, 0x24, 0x22, 0x00, 0x3F, 0x05, 0x00, 0x00, 0x4E, 0xFF, 0x3F, 0x27,
	0x0E, 0x11, 0x00, 0x21, 0x17, 0x9B, 0x36, 0xFF, 0xFF, 0x00, 0x01, 0x3A,
	0x5C, 0xE2, 0x5C, 0x00, 0xFF, 0x01, 0x36, 0x00, 0x38, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x44, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x01, 0x04, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x40,
	0x00, 0xE5, 0x01, 0x05, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x57, 0x00, 0xF3, 0x0D, 0xCE, 0x0B,
	0xE3, 0x50, 0xCE, 0x0B, 0xE4, 0x50, 0x1D, 0x17, 0xDC, 0x0A, 0xCE, 0x0B,
	0xE7, 0x50, 0x1A, 0x17, 0xDC, 0x0A, 0xD7, 0x18, 0x38, 0x00, 0x38, 0x00,
	0x0D, 0x19, 0xCF, 0x5C, 0xA9, 0x18, 0x06, 0x03, 0x07, 0x5C, 0xB1, 0x33,
	0xB1, 0x33, 0xDB, 0x02, 0x4D, 0x00, 0x11, 0x00, 0x22, 0x00, 0x24, 0x22,
	0x00, 0x00, 0x73, 0x07, 0xCB, 0x5C, 0x76, 0x1B, 0x03, 0x13, 0x00, 0x3E,
	0x00, 0x3C, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x00, 0x00, 0x7C, 0x42, 0x7C,
	0x42, 0x42, 0x7C, 0x00, 0x00, 0x3C, 0x42, 0x40, 0x40, 0x42, 0x3C, 0x00,
	0x00, 0x78, 0x44, 0x42, 0x42, 0x44, 0x78, 0x00, 0x00, 0x7E, 0x40, 0x7C,
	0x40, 0x40, 0x7E, 0x00, 0x00, 0x7E, 0x40, 0x7C, 0x40, 0x40, 0x40, 0x00,
	0x00, 0x3C, 0x42, 0x40, 0x4E, 0x42, 0x3C, 0x00, 0x00, 0x42, 0x42, 0x7E,
	0x42, 0x42, 0x42, 0x00, 0x00, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x00,
	0x00, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x44, 0x48, 0x70,
	0x48, 0x44, 0x42, 0x00, 0x00, 0xED, 0xED, 0x05, 0x40, 0x7E, 0x00, 0x00,
	0x42, 0x66, 0x5A, 0x42, 0x42, 0x42, 0x00, 0x00, 0x42, 0x62, 0x52, 0x4A,
	0x46, 0x42, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x00, 0x00,
	0x7C, 0x42, 0x42, 0x7C, 0x40, 0x40, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x52,
	0x4A, 0x3C, 0x00, 0x00, 0x7C, 0x42, 0x42, 0x7C, 0x44, 0x42, 0x00, 0x00,
	0x3C, 0x40, 0x3C, 0x02, 0x42, 0x3C, 0x00, 0x00, 0xFE, 0xED, 0xED, 0x05,
	0x10, 0x00, 0x00, 0xED, 0xED, 0x05, 0x42, 0x3C, 0x00, 0xB1, 0x01, 0x08,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0x18, 0x00, 0xED, 0xED, 0xFF, 0x38, 0xED, 0xED, 0xFF, 0x38,
	0xED, 0xED, 0xFF, 0x38, 0x38, 0x38, 0x38, 0xED, 0xED, 0xFF, 0x00, 0x00,
	0xFF, 0x00, 0x00, 0x00, 0x0D, 0x03, 0x23, 0x0D, 0x0D, 0x23, 0x05, 0xED,
	0xED, 0x05, 0x00, 0x01, 0x00, 0x06, 0x00, 0x0B, 0x00, 0x01, 0x00, 0x01,
	0x00, 0x06, 0x00, 0x10, 0xED, 0xED, 0x1A, 0x00, 0x3C, 0x40, 0x00, 0xFF,
	0x8C, 0x01, 0x54, 0xFF, 0xED, 0xED, 0x05, 0x00, 0xFF, 0xFE, 0xFF, 0x01,
	0x38, 0x00, 0x00, 0xCB, 0x5C, 0x00, 0x00, 0xB6, 0x5C, 0xB6, 0x5C, 0xCB,
	0x5C, 0xD0, 0x5C, 0xCA, 0x5C, 0xCC, 0x5C, 0xCF, 0x5C, 0xCF, 0x5C, 0x00,
	0x00, 0xD1, 0x5C, 0xF3, 0x5C, 0xF3, 0x5C, 0x1B, 0x92, 0x5C, 0x10, 0x02,
	0xED, 0xED, 0x08, 0x00, 0x01, 0x1A, 0x00, 0x00, 0x5B, 0x00, 0x00, 0x58,
	0xFF, 0x00, 0x00, 0x21, 0x00, 0x5B, 0x21, 0x17, 0x00, 0x40, 0xE0, 0x50,
	0x21, 0x18, 0x21, 0x17, 0x01, 0x38, 0x00, 0x38, 0xED, 0xED, 0x22, 0x00,
	0x57, 0xFF, 0xFF, 0xFF, 0xF4, 0x09, 0xA8, 0x10, 0x4B, 0xF4, 0x09, 0xC4,
	0x15, 0x53, 0x81, 0x0F, 0xC4, 0x15, 0x52, 0xF4, 0x09, 0xC4, 0x15, 0x50,
	0x80, 0x80, 0xEF, 0x22, 0x22, 0x0D, 0x80, 0x00, 0xFF, 0xED, 0xED, 0x09,
	0x20, 0x00, 0x00, 0x00, 0x80, 0xED, 0xED, 0x12, 0x00, 0x80, 0x0D, 0xCE,
	0x5C, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x2D,
	0x00
};

const unsigned char load128[3230] = {
	0x02, 0x00, 0x02, 0x00, 0x3F, 0x05, 0x00, 0x00, 0x46, 0xFF, 0x00, 0x2F,
	0x0E, 0x11, 0x00, 0x21, 0x18, 0x9B, 0x36, 0x38, 0x00, 0x00, 0x01, 0x3A,
	0x5C, 0xE2, 0x5C, 0x00, 0xFF, 0x01, 0x36, 0x00, 0x38, 0x00, 0x09, 0x10,
	0x00, 0x07, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x45, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xD0, 0x01, 0x03, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x64, 0x00, 0xEC, 0xED, 0xED,
	0x0C, 0x00, 0x45, 0x39, 0xA3, 0x39, 0xDB, 0x02, 0x7C, 0x38, 0xE2, 0x5C,
	0x4D, 0x00, 0x11, 0x00, 0x02, 0x00, 0x3F, 0x05, 0x00, 0x02, 0x55, 0x05,
	0x71, 0x07, 0xE2, 0x5C, 0xCB, 0x5C, 0x14, 0x5B, 0x21, 0x18, 0x1D, 0x5B,
	0x00, 0x3E, 0x14, 0x1B, 0x00, 0x3C, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x00,
	0x00, 0x7C, 0x42, 0x7C, 0x42, 0x42, 0x7C, 0x00, 0x00, 0x3C, 0x42, 0x40,
	0x40, 0x42, 0x3C, 0x00, 0x00, 0x78, 0x44, 0x42, 0x42, 0x44, 0x78, 0x00,
	0x00, 0x7E, 0x40, 0x7C, 0x40, 0x40, 0x7E, 0x00, 0x00, 0x7E, 0x40, 0x7C,
	0x40, 0x40, 0x40, 0x00, 0x00, 0x3C, 0x42, 0x40, 0x4E, 0x42, 0x3C, 0x00,
	0x00, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x00, 0x00, 0x3E, 0x08, 0x08,
	0x08, 0x08, 0x3E, 0x00, 0x00, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x00,
	0x00, 0x44, 0x48, 0x70, 0x48, 0x44, 0x42, 0x00, 0x00, 0xED, 0xED, 0x05,
	0x40, 0x7E, 0x00, 0x00, 0x42, 0x66, 0x5A, 0x42, 0x42, 0x42, 0x00, 0x00,
	0x42, 0x62, 0x52, 0x4A, 0x46, 0x42, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x42,
	0x42, 0x3C, 0x00, 0x00, 0x7C, 0x42, 0x42, 0x7C, 0x40, 0x40, 0x00, 0x00,
	0x3C, 0x42, 0x42, 0x52, 0x4A, 0x3C, 0x00, 0x00, 0x7C, 0x42, 0x42, 0x7C,
	0x44, 0x42, 0x00, 0x00, 0x3C, 0x40, 0x3C, 0x02, 0x42, 0x3C, 0x00, 0x00,
	0xFE, 0xED, 0xED, 0x05, 0x10, 0x00, 0x00, 0xED, 0xED, 0x05, 0x42, 0x3C,
	0x00, 0x04, 0x01, 0x04, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x40, 0x00,
	0x04, 0x01, 0x05, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x40, 0x00, 0x04,
	0x01, 0x06, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x40, 0x00, 0x04, 0x01,
	0x07, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x40, 0x00, 0xC8, 0x03, 0x08,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xCA, 0x00, 0x01, 0xFE, 0x01, 0xFE,
	0x01, 0xED, 0xED, 0xE1, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00,
	0x00, 0x04, 0xED, 0xED, 0x11, 0x00, 0x03, 0xFC, 0x03, 0xFC, 0x03, 0xED,
	0xED, 0x21, 0x00, 0xFE, 0xED, 0xED, 0x07, 0x00, 0x10, 0xED, 0xED, 0x09,
	0x00, 0x7C, 0x7C, 0x7E, 0x3C, 0x44, 0x00, 0x10, 0x00, 0x10, 0xED, 0xED,
	0xA5, 0x00, 0x10, 0x38, 0x78, 0x38, 0x00, 0x40, 0x38, 0x38, 0x04, 0x38,
	0x1C, 0xED, 0xED, 0x0F, 0x00, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xED, 0xED,
	0x21, 0x00, 0x10, 0x38, 0x00, 0x1C, 0x38, 0x78, 0x1C, 0x38, 0x10, 0x00,
	0x00, 0x00, 0x78, 0x1C, 0x38, 0x38, 0x38, 0x00, 0x42, 0x42, 0x40, 0x42,
	0x48, 0x00, 0x38, 0x44, 0x00, 0x1C, 0x38, 0xED, 0xED, 0xA3, 0x00, 0x10,
	0x04, 0x44, 0x44, 0x00, 0x40, 0x44, 0x04, 0x3C, 0x44, 0x20, 0xED, 0xED,
	0x0F, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xED, 0xED, 0x21, 0x00, 0x10,
	0x44, 0x00, 0x20, 0x04, 0x44, 0x20, 0x44, 0x10, 0x00, 0x00, 0x00, 0x44,
	0x20, 0x44, 0x40, 0x40, 0x00, 0x7C, 0x42, 0x7C, 0x42, 0x70, 0x00, 0x10,
	0x54, 0x30, 0x20, 0x44, 0xED, 0xED, 0xA3, 0x00, 0x10, 0x3C, 0x44, 0x78,
	0x00, 0x40, 0x44, 0x3C, 0x44, 0x78, 0x20, 0xED, 0xED, 0x0F, 0x00, 0x1F,
	0xE0, 0x1F, 0xE0, 0x1F, 0xED, 0xED, 0x21, 0x00, 0x10, 0x44, 0x00, 0x20,
	0x3C, 0x44, 0x20, 0x78, 0x10, 0x00, 0x3E, 0x00, 0x44, 0x20, 0x78, 0x38,
	0x38, 0x00, 0x42, 0x7C, 0x40, 0x7E, 0x48, 0x00, 0x10, 0x54, 0x10, 0x20,
	0x78, 0xED, 0xED, 0xA3, 0x00, 0x10, 0x44, 0x78, 0x40, 0x00, 0x40, 0x44,
	0x44, 0x44, 0x40, 0x20, 0xED, 0xED, 0x0F, 0x00, 0x3F, 0xC0, 0x3F, 0xC0,
	0x3F, 0xED, 0xED, 0x21, 0x00, 0x10, 0x44, 0x00, 0x20, 0x44, 0x44, 0x20,
	0x40, 0x10, 0x00, 0x00, 0x00, 0x78, 0x20, 0x40, 0x04, 0x04, 0x00, 0x42,
	0x44, 0x40, 0x42, 0x44, 0x00, 0x10, 0x54, 0x10, 0x20, 0x40, 0xED, 0xED,
	0xA3, 0x00, 0x10, 0x3C, 0x40, 0x3C, 0x00, 0x7E, 0x38, 0x3C, 0x3C, 0x3C,
	0x20, 0xED, 0xED, 0x0F, 0x00, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0xED, 0xED,
	0x21, 0x00, 0x10, 0x38, 0x00, 0x1C, 0x3C, 0x44, 0x1C, 0x3C, 0x0C, 0x00,
	0x00, 0x00, 0x40, 0x20, 0x3C, 0x78, 0x78, 0x00, 0x7C, 0x42, 0x7E, 0x42,
	0x42, 0x00, 0x0C, 0x28, 0x38, 0x1C, 0x3C, 0xED, 0xED, 0xA5, 0x00, 0x40,
	0xED, 0xED, 0x17, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xED, 0xED, 0x2D,
	0x00, 0x40, 0xED, 0xED, 0x13, 0x00, 0xED, 0xED, 0xFF, 0x38, 0xED, 0xED,
	0xFF, 0x38, 0xED, 0xED, 0xA2, 0x38, 0xED, 0xED, 0x0B, 0x47, 0xED, 0xED,
	0x0F, 0x40, 0x42, 0x72, 0x74, 0x6C, 0x68, 0x40, 0xED, 0xED, 0x40, 0x38,
	0xF5, 0xC5, 0x01, 0xFD, 0x7F, 0x3A, 0x5C, 0x5B, 0xEE, 0x10, 0xF3, 0x32,
	0x5C, 0x5B, 0xED, 0x79, 0xFB, 0xC1, 0xF1, 0xC9, 0xCD, 0x00, 0x5B, 0xE5,
	0x2A, 0x5A, 0x5B, 0xE3, 0xC9, 0xF3, 0x3A, 0x5C, 0x5B, 0xE6, 0xEF, 0x32,
	0x5C, 0x5B, 0x01, 0xFD, 0x7F, 0xED, 0x79, 0xFB, 0xC3, 0xC3, 0x00, 0x21,
	0xD8, 0x06, 0x18, 0x03, 0x21, 0xCA, 0x07, 0x08, 0x01, 0xFD, 0x7F, 0x3A,
	0x5C, 0x5B, 0xF5, 0xE6, 0xEF, 0xF3, 0x32, 0x5C, 0x5B, 0xED, 0x79, 0xC3,
	0xE6, 0x05, 0x08, 0xF1, 0x01, 0xFD, 0x7F, 0xF3, 0x32, 0x5C, 0x5B, 0xED,
	0x79, 0xFB, 0x08, 0xC9, 0x61, 0x07, 0x2E, 0x15, 0x10, 0xCF, 0x00, 0x0B,
	0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x11, 0xED, 0xED, 0x1A, 0x00, 0xF3,
	0x5B, 0xEC, 0xEB, 0xEC, 0x2B, 0x01, 0x01, 0x38, 0x00, 0x21, 0x03, 0xED,
	0xED, 0x07, 0x00, 0x0A, 0x00, 0x0A, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F,
	0x3F, 0x7F, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0xED, 0xED,
	0x24, 0x00, 0x45, 0x39, 0xA3, 0x39, 0xDB, 0x02, 0x7C, 0x38, 0x45, 0x39,
	0xA3, 0x39, 0xDB, 0x02, 0x7C, 0x38, 0x6C, 0xFD, 0x4D, 0x00, 0x11, 0x28,
	0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x48, 0x00, 0x3C, 0x5C,
	0x00, 0x00, 0x27, 0x1F, 0xF7, 0x02, 0xE7, 0x3F, 0x2B, 0x27, 0xE7, 0x3F,
	0x7A, 0x26, 0x31, 0x0D, 0x67, 0x26, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x0D,
	0x02, 0x1F, 0x0D, 0x0D, 0x23, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x01,
	0x00, 0x06, 0x00, 0x0B, 0x00, 0x01, 0x00, 0x01, 0x00, 0x06, 0x00, 0x10,
	0xED, 0xED, 0x1A, 0x00, 0x3C, 0x40, 0x00, 0xFF, 0x9C, 0x20, 0x52, 0xFF,
	0xED, 0xED, 0x05, 0x00, 0xFF, 0xFE, 0xFF, 0x01, 0x38, 0x00, 0x00, 0xCB,
	0x5C, 0x00, 0x00, 0xB6, 0x5C, 0xBB, 0x5C, 0xCB, 0x5C, 0xD0, 0x5C, 0xCA,
	0x5C, 0xCC, 0x5C, 0xCC, 0x5C, 0xCF, 0x5C, 0x00, 0x00, 0xD1, 0x5C, 0xF3,
	0x5C, 0xF3, 0x5C, 0x7F, 0x92, 0x5C, 0x00, 0x02, 0xED, 0xED, 0x08, 0x00,
	0x01, 0x17, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x58, 0xFF, 0xED, 0xED, 0x05,
	0x00, 0x04, 0x17, 0x00, 0x40, 0xFD, 0x50, 0x21, 0x18, 0x04, 0x17, 0x01,
	0x38, 0x00, 0x38, 0xED, 0xED, 0x22, 0x00, 0x57, 0xFF, 0xFF, 0xFF, 0xF4,
	0x09, 0xA8, 0x10, 0x4B, 0xF4, 0x09, 0xC4, 0x15, 0x53, 0x81, 0x0F, 0xC4,
	0x15, 0x52, 0x34, 0x5B, 0x2F, 0x5B, 0x50, 0x80, 0x80, 0xEF, 0x22, 0x22,
	0x0D, 0x80, 0x00, 0xFF, 0xED, 0xED, 0x09, 0x20, 0x00, 0x00, 0x00, 0x80,
	0xED, 0xED, 0x12, 0x00, 0x80, 0x0D, 0xCE, 0x5C, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x2D, 0x00, 0x04, 0x01, 0x09, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xFF, 0x00, 0xED, 0xED, 0x40, 0x00, 0x84, 0x01, 0x0A, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0x23, 0x00, 0xC0, 0xED,
	0xED, 0x15, 0x00, 0x80, 0xFF, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 0x14,
	0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xE2, 0x00,
	0x20, 0xED, 0xED, 0x05, 0x00, 0x05, 0x17, 0x00, 0x40, 0xFC, 0x50, 0x21,
	0x18, 0x05, 0x17, 0x01, 0x38, 0x00, 0x38, 0xED, 0xED, 0x71, 0x00, 0xED,
	0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED,
	0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED,
	0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED,
	0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED,
	0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED,
	0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED,
	0xED, 0x0E, 0x38, 0xED, 0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED,
	0xED, 0x70, 0x00, 0xED, 0xED, 0x0E, 0x38, 0xED, 0xED, 0xFF, 0x00, 0xED,
	0xED, 0xF8, 0x00, 0x44, 0x27, 0x54, 0x27, 0x00, 0x00, 0x00, 0x04, 0x10,
	0x14, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF,
	0x00, 0xED, 0xED, 0x7C, 0x00, 0x01, 0x05, 0x00, 0x00, 0x14, 0x00, 0x00,
	0x00, 0x0F, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED, 0xFF, 0x00, 0xED, 0xED,
	0x8F, 0x00
};

#endif // Loaders_h