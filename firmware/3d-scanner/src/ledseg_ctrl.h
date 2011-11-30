/*
 *    RoboPeak Project
 *    http://www.robopeak.com
 *
 *    3D Scanner
 *    An applet of RoboticPeak Project
 *
 *    By Shikai Chen (shikai.chn@gmail.com)
 *
 *
 *    LED Seg Ctrl
 */

#pragma once

#define BIT_SEG1_EN  (0x1L<<0)
#define BIT_SEG2_EN  (0x1L<<1)

void ledseg_init();
void ledseg_heartbeat();
void ledseg_rawoutput(_u16 seg1, _u16 seg2);
void ledseg_hexout(_u8 hex);
