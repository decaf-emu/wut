#pragma once
#include <wut.h>

/**
 * \defgroup padscore_wpad WPAD
 * \ingroup padscore
 * @{
 */
#ifdef __cplusplus
extern "C" {
#endif

typedef struct WPADStatusProController WPADStatusProController;
typedef struct WPADVec2D WPADVec2D;

typedef enum WPADChan
{
   WPAD_CHAN_0                         = 0,
   WPAD_CHAN_1                         = 1,
   WPAD_CHAN_2                         = 2,
   WPAD_CHAN_3                         = 3,
} WPADChan;

typedef enum WPADDataFormat
{
   WPAD_FMT_PRO_CONTROLLER             = 22,
} WPADDataFormat;

typedef enum WPADExtensionType
{
   WPAD_EXT_CORE                    = 0,
   WPAD_EXT_NUNCHUK                 = 1,
   WPAD_EXT_CLASSIC                 = 2,
   WPAD_EXT_MPLUS                   = 5,
   WPAD_EXT_MPLUS_NUNCHUK           = 6,
   WPAD_EXT_MPLUS_CLASSIC           = 7,
   WPAD_EXT_PRO_CONTROLLER          = 31,
} WPADExtensionType;

typedef enum WPADButton
{
   WPAD_BUTTON_LEFT                    = 0x0001,
   WPAD_BUTTON_RIGHT                   = 0x0002,
   WPAD_BUTTON_DOWN                    = 0x0004,
   WPAD_BUTTON_UP                      = 0x0008,
   WPAD_BUTTON_PLUS                    = 0x0010,
   WPAD_BUTTON_2                       = 0x0100,
   WPAD_BUTTON_1                       = 0x0200,
   WPAD_BUTTON_B                       = 0x0400,
   WPAD_BUTTON_A                       = 0x0800,
   WPAD_BUTTON_MINUS                   = 0x1000,
   WPAD_BUTTON_Z                       = 0x2000,
   WPAD_BUTTON_C                       = 0x4000,
   WPAD_BUTTON_HOME                    = 0x8000,
} WPADButton;

typedef enum WPADNunchukButton
{
   WPAD_NUNCHUK_STICK_EMULATION_LEFT  = 0x0001,
   WPAD_NUNCHUK_STICK_EMULATION_RIGHT = 0x0002,
   WPAD_NUNCHUK_STICK_EMULATION_DOWN  = 0x0004,
   WPAD_NUNCHUK_STICK_EMULATION_UP    = 0x0008,
} WPADNunchukButton;

typedef enum WPADClassicButton
{
   WPAD_CLASSIC_BUTTON_UP               = 0x00000001,
   WPAD_CLASSIC_BUTTON_LEFT             = 0x00000002,
   WPAD_CLASSIC_BUTTON_ZR               = 0x00000004,
   WPAD_CLASSIC_BUTTON_X                = 0x00000008,
   WPAD_CLASSIC_BUTTON_A                = 0x00000010,
   WPAD_CLASSIC_BUTTON_Y                = 0x00000020,
   WPAD_CLASSIC_BUTTON_B                = 0x00000040,
   WPAD_CLASSIC_BUTTON_ZL               = 0x00000080,
   WPAD_CLASSIC_BUTTON_R                = 0x00000200,
   WPAD_CLASSIC_BUTTON_PLUS             = 0x00000400,
   WPAD_CLASSIC_BUTTON_HOME             = 0x00000800,
   WPAD_CLASSIC_BUTTON_MINUS            = 0x00001000,
   WPAD_CLASSIC_BUTTON_L                = 0x00002000,
   WPAD_CLASSIC_BUTTON_DOWN             = 0x00004000,
   WPAD_CLASSIC_BUTTON_RIGHT            = 0x00008000,
   WPAD_CLASSIC_STICK_L_EMULATION_LEFT  = 0x00010000,
   WPAD_CLASSIC_STICK_L_EMULATION_RIGHT = 0x00020000,
   WPAD_CLASSIC_STICK_L_EMULATION_DOWN  = 0x00040000,
   WPAD_CLASSIC_STICK_L_EMULATION_UP    = 0x00080000,
   WPAD_CLASSIC_STICK_R_EMULATION_LEFT  = 0x00100000,
   WPAD_CLASSIC_STICK_R_EMULATION_RIGHT = 0x00200000,
   WPAD_CLASSIC_STICK_R_EMULATION_DOWN  = 0x00400000,
   WPAD_CLASSIC_STICK_R_EMULATION_UP    = 0x00800000,
} WPADClassicButton;

typedef enum WPADProButton
{
   WPAD_PRO_BUTTON_UP                  = 0x00000001,
   WPAD_PRO_BUTTON_LEFT                = 0x00000002,
   WPAD_PRO_TRIGGER_ZR                 = 0x00000004,
   WPAD_PRO_BUTTON_X                   = 0x00000008,
   WPAD_PRO_BUTTON_A                   = 0x00000010,
   WPAD_PRO_BUTTON_Y                   = 0x00000020,
   WPAD_PRO_BUTTON_B                   = 0x00000040,
   WPAD_PRO_TRIGGER_ZL                 = 0x00000080,
   WPAD_PRO_RESERVED                   = 0x00000100,
   WPAD_PRO_TRIGGER_R                  = 0x00000200,
   WPAD_PRO_BUTTON_PLUS                = 0x00000400,
   WPAD_PRO_BUTTON_HOME                = 0x00000800,
   WPAD_PRO_BUTTON_MINUS               = 0x00001000,
   WPAD_PRO_TRIGGER_L                  = 0x00002000,
   WPAD_PRO_BUTTON_DOWN                = 0x00004000,
   WPAD_PRO_BUTTON_RIGHT               = 0x00008000,
   WPAD_PRO_BUTTON_STICK_R             = 0x00010000,
   WPAD_PRO_BUTTON_STICK_L             = 0x00020000,
   WPAD_PRO_STICK_L_EMULATION_UP       = 0x00200000,
   WPAD_PRO_STICK_L_EMULATION_DOWN     = 0x00100000,
   WPAD_PRO_STICK_L_EMULATION_LEFT     = 0x00040000,
   WPAD_PRO_STICK_L_EMULATION_RIGHT    = 0x00080000,
   WPAD_PRO_STICK_R_EMULATION_UP       = 0x02000000,
   WPAD_PRO_STICK_R_EMULATION_DOWN     = 0x01000000,
   WPAD_PRO_STICK_R_EMULATION_LEFT     = 0x00400000,
   WPAD_PRO_STICK_R_EMULATION_RIGHT    = 0x00800000,
} WPADProButton;

struct WPADVec2D
{
   int16_t x;
   int16_t y;
};
WUT_CHECK_OFFSET(WPADVec2D, 0x00, x);
WUT_CHECK_OFFSET(WPADVec2D, 0x02, y);
WUT_CHECK_SIZE(WPADVec2D, 0x04);

struct WPADStatusProController
{
   WUT_UNKNOWN_BYTES(0x28);

   //! A value from WPADExtensionType
   uint8_t extensionType;

   uint8_t err;
   WUT_PADDING_BYTES(2);
   uint32_t buttons;
   WPADVec2D leftStick;
   WPADVec2D rightStick;
   WUT_UNKNOWN_BYTES(8);
   WPADDataFormat dataFormat;
};
WUT_CHECK_OFFSET(WPADStatusProController, 0x28, extensionType);
WUT_CHECK_OFFSET(WPADStatusProController, 0x29, err);
WUT_CHECK_OFFSET(WPADStatusProController, 0x2C, buttons);
WUT_CHECK_OFFSET(WPADStatusProController, 0x30, leftStick);
WUT_CHECK_OFFSET(WPADStatusProController, 0x34, rightStick);
WUT_CHECK_OFFSET(WPADStatusProController, 0x40, dataFormat);
WUT_CHECK_SIZE(WPADStatusProController, 0x44);

typedef void (*WPADSamplingCallback)(WPADChan chan);
typedef void (*WPADExtensionCallback)(WPADChan chan, int32_t status);
typedef void (*WPADConnectCallback)(WPADChan chan, int32_t status);

void
WPADInit();

void
WPADShutdown();

int32_t
WPADProbe(WPADChan chan,
          WPADExtensionType *outExtensionType);

int32_t
WPADSetDataFormat(WPADChan chan,
                  WPADDataFormat format);

void
WPADEnableURCC(int32_t enable);

void
WPADEnableWiiRemote(int32_t enable);

void
WPADRead(WPADChan chan,
         void *data);

void
WPADSetAutoSleepTime(uint8_t time);

void
WPADDisconnect(WPADChan chan);

WPADConnectCallback
WPADSetConnectCallback(WPADChan chan,
                       WPADConnectCallback callback);

WPADExtensionCallback
WPADSetExtensionCallback(WPADChan chan,
                         WPADExtensionCallback callback);

WPADSamplingCallback
WPADSetSamplingCallback(WPADChan chan,
                        WPADSamplingCallback callback);

#ifdef __cplusplus
}
#endif

/** @} */
