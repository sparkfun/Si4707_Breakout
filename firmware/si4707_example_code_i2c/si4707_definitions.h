// This header file defines the values for each register and
// property address in the Si4707.

#include "Arduino.h"  // Required for byte type

const byte POWER_UP_TIME_MS = 1000;

// Command Bytes
const byte COMMAND_POWER_UP        = 0x01;  // Powerup
const byte COMMAND_GET_REV         = 0x10;  // Revision info
const byte COMMAND_POWER_DOWN      = 0x11;  // Powerdown
const byte COMMAND_SET_PROPERTY    = 0x12;  // Sets property value
const byte COMMAND_GET_PROPERTY    = 0x13;  // Gets property value
const byte COMMAND_GET_INT_STATUS  = 0x14;  // Read interrupt status bits
const byte COMMAND_WB_TUNE_FREQ    = 0x50;  // Selects WB tuning frequency
const byte COMMAND_WB_TUNE_STATUS  = 0x52;  // Gets status of previous WB_TUNE_FREQ
const byte COMMAND_WB_RSQ_STATUS   = 0x53;  // RSQ of current channel
const byte COMMAND_WB_SAME_STATUS  = 0x54;  // SAME info for current channel
const byte COMMAND_WB_ASQ_STATUS   = 0x55;  // Gets status of 1050 Hz alert tone
const byte COMMAND_WB_AGC_STATUS   = 0x57;  // Gets status of AGC
const byte COMMAND_WB_AGC_OVERRIDE = 0x58;  // Enable or disable WB AGC
const byte COMMAND_GPO_CTL         = 0x80;  // Configures GPO3 as output or hi-z
const byte COMMAND_GPO_SET         = 0x81;  // Sets GPO3 output level

// Properties
const unsigned int PROPERTY_GPO_IEN                    = 0x0001;
const unsigned int PROPERTY_REFCLK_FREQ                = 0x0201;
const unsigned int PROPERTY_REFCLK_PRESCALE            = 0x0202;
const unsigned int PROPERTY_RX_VOLUME                  = 0x4000;
const unsigned int PROPERTY_RX_HARD_MUTE               = 0x4001;
const unsigned int PROPERTY_WB_MAX_TUNE_ERROR          = 0x5108;
const unsigned int PROPERTY_RSQ_INTERRUPT_SOURCE       = 0x5200;
const unsigned int PROPERTY_WB_RSQ_SNR_HIGH_THRESHOLD  = 0x5201;
const unsigned int PROPERTY_WB_RSQ_SNR_LOW_THRESHOLD   = 0x5202;
const unsigned int PROPERTY_WB_RSQ_RSSI_HIGH_THRESHOLD = 0x5203;
const unsigned int PROPERTY_WB_RSQ_RSSI_LOW_THRESHOLD  = 0x5204;
const unsigned int PROPERTY_WB_ASQ_INTERRUPT_SOURCE    = 0x5600;
const unsigned int PROPERTY_WB_SAME_INTERRUPT_SOURCE   = 0x5500;
