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
 *    USB Protocol
 */

#pragma once

// RP infra on STK500v2

// Command Array

#define RPINFRA_STK_CMD_GET_ADC         0x10    //get the current AVR ADC0 (PC1) Raw Data
#define RPINFRA_STK_CMD_SET_PWM         0x11    //set the current AVR PWM output #0 (PB3)

#define RPINFRA_STK_CMD_ECHO            0x80    //simply echo back

// 3D-Scanner Specific
#define SCANNER_CMD_SET_HEADING         0x20
#define SCANNER_CMD_ENABLE_LASER        0x21
#define SCANNER_CMD_DISABLE_LASER       0x22
