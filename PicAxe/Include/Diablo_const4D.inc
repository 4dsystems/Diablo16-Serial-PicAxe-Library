' //------------------------------------------------------------------------------
' //txt_Set() related constants
' //------------------------------------------------------------------------------
symbol TEXT_COLOUR            = 0       ' text foreground colr
symbol TEXT_BACKGROUND        = 1       ' text background colr
symbol TEXT_HIGHLIGHT         = 1       ' text background colr
symbol FONT_ID                = 2       ' default 0, else points to data statement font
symbol FONT_SIZE              = 2       ' compatibility
symbol TEXT_WIDTH             = 3       ' text width multiplier
symbol TEXT_HEIGHT            = 4       ' text height multiplier
symbol TEXT_XGAP              = 5       ' horizontal text gap (default 1)
symbol TEXT_YGAP              = 6       ' vertical text gap (default 1)
symbol TEXT_PRINTDELAY        = 7       ' for 'teletype' like effect when printing
symbol TEXT_OPACITY           = 8       ' text mode flag, TRANSPARENT or OPAQUE
symbol TEXT_BOLD              = 9       ' embolden text (auto reset)
symbol TEXT_ITALIC            = 10      ' italicize text (auto reset)
symbol TEXT_INVERSE           = 11      ' invert text (auto reset)
symbol TEXT_UNDERLINED        = 12      ' underline text (auto reset)
symbol TEXT_ATTRIBUTES        = 13      ' controls BOLD/ITALIC/INVERSE/UNDERLINE simultaneously
symbol TEXT_WRAP              = 14      ' Sets the pixel position where text wrap will occur at RHS
symbol TEXT_ANGLE             = 15      ' Sets the text angle, only for plotted font

' //------------------------------------------------------------------------------
' //txt_Set() related arguments
' //------------------------------------------------------------------------------
'     // (legacy compatibility)
symbol FONT1                  = 1       ' font_System_5x7
symbol FONT2                  = 2       ' font_System_8x8
symbol FONT3                  = 3       ' font_System_8x12

'     // new font constants
symbol FONT_1                 = 1       ' font_System_5x7
symbol FONT_2                 = 2       ' font_System_8x8
symbol FONT_3                 = 3       ' font_System_8x12
symbol FONT_4                 = 4       ' font_System_12x16
symbol FONT_5                 = 5       ' font_MS_SanSerif8x12
symbol FONT_6                 = 6       ' font_dejaVuSansCondensed9pt
symbol FONT_7                 = 7       ' font_dejaVuSans9pt
symbol FONT_8                 = 8       ' font_dejaVuSansBold9pt
symbol FONT_9                 = 9       ' font_System_3x6
symbol FONT_10                = 10      ' font_plotted
symbol FONT_11                = 11      ' EGA 8x12 font

symbol TRANSPARENT            = 0       ' TEXT_OPACITY  transparent  text
symbol OPAQUE                 = 1       ' TEXT_OPACITY  opaque text

symbol BOLD                   = 16      ' TEXT_ATTRIBUTES bold text
symbol ITALIC                 = 32      ' TEXT_ATTRIBUTES italic text
symbol INVERSE                = 64      ' TEXT_ATTRIBUTES inverse text
symbol UNDERLINED             = 128     ' TEXT_ATTRIBUTES underlined

' // single word array operations
symbol OP1_NOP                = 0       ' no operation
symbol OP1_SET                = 1       ' "set" the entire array with "value"
symbol OP1_AND                = 2       ' "and" the entire array with "value"
symbol OP1_IOR                = 3       ' "inclsuve or" the entire array with "value"
symbol OP1_XOR                = 4       ' "exclusive or" the entire array with "value"
symbol OP1_ADD                = 5       ' signed add each element of entire array with "value"
symbol OP1_SUB                = 6       ' signed subtract "value" from each element of entire array.
symbol OP1_MUL                = 7       ' signed multiply each element of entire array by "value"
symbol OP1_DIV                = 8       ' signed divide each element of entire array by "value"
symbol OP1_REV                = 9       ' reverse the elements of an array (value is ignored)
symbol OP1_SHL                = 10      ' shift an array left by "value" positions
symbol OP1_SHR                = 11      ' shift an array right by "value" positions
symbol OP1_ROL                = 12      ' rotate an array left by "value" positions
symbol OP1_ROR                = 13      ' rotate an array right by "value" positions
'     // graphics only operations
symbol OP1_GRAY               = 14      ' convert an array of RGB565 elements to grayscale, "value" is ignored
symbol OP1_WHITEN             = 15      ' saturate an array of RGB565 elements to white, "value" determines saturation
symbol OP1_BLACKEN            = 16      ' saturate an array of RGB565 elements to black, "value" determines saturation
symbol OP1_LIGHTEN            = 17      ' increase luminance of an array of RGB565 elements, "value" determines saturation
symbol OP1_DARKEN             = 18      ' decrease luminance of an array of RGB565 elements, "value" determines saturation

' // dual word array operations
'     // boolean and math operations
symbol OP2_AND                = 1       ' "and" arrays, result to array1 (value is ignored)
symbol OP2_IOR                = 2       ' "inclusive or" arrays, result to array1 (value is ignored)
symbol OP2_XOR                = 3       ' "exclusive or" arrays, result to array1 (value is ignored)
symbol OP2_ADD                = 4       ' "add" arrays, result to array1, array1 + (array2+value)
symbol OP2_SUB                = 5       ' "subtract" array2 from array1, result to array1, array1 - (array2+value)
symbol OP2_MUL                = 6       ' "multiply" arrays, result to array1 (value is ignored)
symbol OP2_DIV                = 7       ' "divide array1 by array2" , result to array1 (value is ignored)
symbol OP2_COPY               = 8       ' "copy" array2 to array1 (value is ignored)
'     // graphics only operations
symbol OP2_BLEND              = 9       ' blend arrays, blend percentage determined by "value", result to "array1"


' //------------------------------------------------------------------//
' // Pin related constants                                            //
' //------------------------------------------------------------------//

' // pin_Set(...) pin modes
symbol PIN_INP                = 0       ' pin is input, no pullup or pulldown
symbol PIN_INP_HI             = 1       ' pin is input with pullup to Vcc
symbol PIN_INP_LO             = 2       ' pin is input with pulldown to Gnd
symbol PIN_OUT                = 3       ' pin is output
symbol PIN_OUT_OD             = 4       ' pin is output with open drain
symbol PIN_AN                 = 5       ' pin is analogue (PA0 to PA3 only)
symbol PIN_ANAVG              = 6       ' pin is analogue (PA0 to PA3 only), averaged - 16 samples


' // pin name             constant    connector H1 I/O Pin referencesnumbers
symbol PA0                    = 1       ' pin 1
symbol PA1                    = 2       ' pin 3
symbol PA2                    = 3       ' pin 5
symbol BUS_WR_PIN             = 3       ' pin 5 (alias PA2_PIN)
symbol PA3                    = 4       ' pin 7
symbol BUS_RD_PIN             = 4       ' pin 7 (alias PA3_PIN)
symbol PA4                    = 5       ' pin 29
symbol PA5                    = 6       ' pin 27
symbol PA6                    = 7       ' pin 25
symbol PA7                    = 8       ' pin 23
symbol PA8                    = 9       ' pin 21
symbol PA9                    = 10      ' pin 19
symbol PA10                   = 11      ' pin 8  (LCD power control)
symbol PA11                   = 12      ' pin 6
symbol PA12                   = 13      ' pin 28 (TX1)
symbol PA13                   = 14      ' pin 30 (RX1)
symbol PA14                   = 15      ' pin 10 (input only)
symbol PA15                   = 16      ' pin 12 (input only)
symbol AUDIO_ENABLE           = 17      ' pin 45 (Output only)

' // bit position masks
symbol M_PA0                  = $0001  ' pin 1
symbol M_PA1                  = $0002  ' pin 3
symbol M_PA2                  = $0004  ' pin 5
symbol M_PA3                  = $0008  ' pin 7
symbol M_PA4                  = $0010  ' pin 29
symbol M_PA5                  = $0020  ' pin 27
symbol M_PA6                  = $0040  ' pin 25
symbol M_PA7                  = $0080  ' pin 23
symbol hM_PA8                 = $01  ' pin 21
symbol lM_PA8                 = $00  ' low byte
symbol hM_PA9                 = $02  ' pin 19 (LCD power control)
symbol lM_PA9                 = $00  ' low byte
symbol hM_PA10                = $04  ' pin 8
symbol lM_PA10                = $00  ' low byte
symbol hM_PA11                = $08  ' pin 6
symbol lM_PA11                = $00  ' low byte
symbol hM_PA12                = $10  ' pin 28
symbol lM_PA12                = $00  ' low byte
symbol hM_PA13                = $20  ' pin 30
symbol lM_PA13                = $00  ' low byte
symbol hM_PA14                = $40  ' pin 10 (input only)
symbol lM_PA14                = $00  ' low byte
symbol hM_PA15                = $80  ' pin 12 (input only)
symbol lM_PA15                = $00  ' low byte



' //------------------------------------------------------------------------------
' //gfx_Set() related constants
' //------------------------------------------------------------------------------
symbol PEN_SIZE               = 16      ' not necessary to use (legacy mode)
symbol BACKGROUND_COLOUR      = 17
symbol OBJECT_COLOUR          = 18      ' line / circle / rectangle generic colour
symbol CLIPPING               = 19      ' clipping ON / OFF
symbol TRANSPARENT_COLOUR     = 20      ' (only on displays with specific hware feature)
symbol TRANSPARENCY           = 21      ' 0 = OFF, 1 = ON (only on displays with specific hware feature)
symbol FRAME_DELAY            = 22      ' legacy mode, see pokeB(IMAGE_DELAY, n);
symbol SCREEN_MODE            = 23      ' LANDSCAPE, LANDSCAPE_R, PORTRAIT, PORTRAIT_R
symbol OUTLINE_COLOUR         = 24      ' if not BLACK (0) , used for outline around circles,rectangles and filled polygons
symbol CONTRAST               = 25      ' for OLED,cahnge contrast, for LCD on or off only
symbol LINE_PATTERN           = 26      ' used for patterned lines, 16bit value (0 = no pattern, '1's = pattern)
symbol BEVEL_RADIUS           = 27      ' button bevel radius
symbol BEVEL_WIDTH            = 28      ' button bevel width
symbol BEVEL_SHADOW           = 29      ' button bevel shadow depth
symbol X_ORIGIN               = 30      ' display position X offset
symbol Y_ORIGIN               = 31      ' display position X offset

' // built in fill pattern constants for function gfx_FillPattern
symbol hFILLPATTERN_0         = $FF     
symbol lFILLPATTERN_0         = $E0     ' low byte
symbol hFILLPATTERN_1         = $FF     
symbol lFILLPATTERN_1         = $E1     ' low byte
symbol hFILLPATTERN_2         = $FF     
symbol lFILLPATTERN_2         = $E2     ' low byte
symbol hFILLPATTERN_3         = $FF     
symbol lFILLPATTERN_3         = $E3     ' low byte
symbol hFILLPATTERN_4         = $FF     
symbol lFILLPATTERN_4         = $E4     ' low byte
symbol hFILLPATTERN_5         = $FF     
symbol lFILLPATTERN_5         = $E5     ' low byte
symbol hFILLPATTERN_6         = $FF     
symbol lFILLPATTERN_6         = $E6     ' low byte
symbol hFILLPATTERN_7         = $FF     
symbol lFILLPATTERN_7         = $E7     ' low byte
symbol hFILLPATTERN_8         = $FF     
symbol lFILLPATTERN_8         = $E8     ' low byte
symbol hFILLPATTERN_9         = $FF     
symbol lFILLPATTERN_9         = $E9     ' low byte
symbol hFILLPATTERN_10        = $FF     
symbol lFILLPATTERN_10        = $EA     ' low byte
symbol hFILLPATTERN_11        = $FF     
symbol lFILLPATTERN_11        = $EB     ' low byte
symbol hFILLPATTERN_12        = $FF     
symbol lFILLPATTERN_12        = $EC     ' low byte
symbol hFILLPATTERN_13        = $FF     
symbol lFILLPATTERN_13        = $ED     ' low byte
symbol hFILLPATTERN_14        = $FF     
symbol lFILLPATTERN_14        = $EE     ' low byte
symbol hFILLPATTERN_15        = $FF     
symbol lFILLPATTERN_15        = $EF     ' low byte
symbol hFILLPATTERN_16        = $FF     
symbol lFILLPATTERN_16        = $F0     ' low byte
symbol hFILLPATTERN_17        = $FF     
symbol lFILLPATTERN_17        = $F1     ' low byte
symbol hFILLPATTERN_18        = $FF     
symbol lFILLPATTERN_18        = $F2     ' low byte
symbol hFILLPATTERN_19        = $FF     
symbol lFILLPATTERN_19        = $F3     ' low byte
symbol hFILLPATTERN_20        = $FF     
symbol lFILLPATTERN_20        = $F4     ' low byte
symbol hFILLPATTERN_21        = $FF     
symbol lFILLPATTERN_21        = $F5     ' low byte
symbol hFILLPATTERN_22        = $FF     
symbol lFILLPATTERN_22        = $F6     ' low byte
symbol hFILLPATTERN_23        = $FF     
symbol lFILLPATTERN_23        = $F7     ' low byte
symbol hFILLPATTERN_24        = $FF     
symbol lFILLPATTERN_24        = $F8     ' low byte
symbol hFILLPATTERN_25        = $FF     
symbol lFILLPATTERN_25        = $F9     ' low byte
symbol hFILLPATTERN_26        = $FF     
symbol lFILLPATTERN_26        = $FA     ' low byte
symbol hFILLPATTERN_27        = $FF     
symbol lFILLPATTERN_27        = $FB     ' low byte
symbol hFILLPATTERN_28        = $FF     
symbol lFILLPATTERN_28        = $FC     ' low byte
symbol hFILLPATTERN_29        = $FF     
symbol lFILLPATTERN_29        = $FD     ' low byte
symbol hFILLPATTERN_30        = $FF     
symbol lFILLPATTERN_30        = $FE     ' low byte
symbol hFILLPATTERN_31        = $FF     
symbol lFILLPATTERN_31        = $FF     ' low byte

symbol hPTN_EMPTY             = $FF     
symbol lPTN_EMPTY             = $E0     ' low byte
symbol hPTN_SOLID             = $FF     
symbol lPTN_SOLID             = $E1     ' low byte
symbol hPTN_FINE_DOTS         = $FF     
symbol lPTN_FINE_DOTS         = $E2     ' low byte
symbol hPTN_MEDIUM_DOTS       = $FF     
symbol lPTN_MEDIUM_DOTS       = $E3     ' low byte
symbol hPTN_COURSE_DOTS       = $FF     
symbol lPTN_COURSE_DOTS       = $E4     ' low byte
symbol hPTN_BS_VERTICAL       = $FF     
symbol lPTN_BS_VERTICAL       = $E5     ' low byte
symbol hPTN_BS_HORIZONTAL     = $FF     
symbol lPTN_BS_HORIZONTAL     = $E6     ' low byte
symbol hPTN_COURSE_F_DIAGONAL = $FF     
symbol lPTN_COURSE_F_DIAGONAL = $E7     ' low byte
symbol hPTN_COURSE_B_DIAGONAL = $FF     
symbol lPTN_COURSE_B_DIAGONAL = $E8     ' low byte
symbol hPTN_COURSE_CROSS      = $FF     
symbol lPTN_COURSE_CROSS      = $E9     ' low byte
symbol hPTN_COURSE_DIAGONALCROSS = $FF     
symbol lPTN_COURSE_DIAGONALCROSS = $EA     ' low byte
symbol hPTN_BSVERTICAL        = $FF     
symbol lPTN_BSVERTICAL        = $EB     ' low byte
symbol hPTN_BSHORIZONTAL      = $FF     
symbol lPTN_BSHORIZONTAL      = $EC     ' low byte
symbol hPTN_FDIAGONAL         = $FF     
symbol lPTN_FDIAGONAL         = $ED     ' low byte
symbol hPTN_BDIAGONAL         = $FF     
symbol lPTN_BDIAGONAL         = $EE     ' low byte
symbol hPTN_FINE_CROSS        = $FF     
symbol lPTN_FINE_CROSS        = $EF     ' low byte
symbol hPTN_FINE_DIAGONAL_CROSS = $FF     
symbol lPTN_FINE_DIAGONAL_CROSS = $F0     ' low byte
symbol hPTN_BRICKS            = $FF     
symbol lPTN_BRICKS            = $F1     ' low byte
symbol hPTN_CARGONET          = $FF     
symbol lPTN_CARGONET          = $F2     ' low byte
symbol hPTN_CIRCUITS          = $FF     
symbol lPTN_CIRCUITS          = $F3     ' low byte
symbol hPTN_COBBLESTONES      = $FF     
symbol lPTN_COBBLESTONES      = $F4     ' low byte
symbol hPTN_DAISIES           = $FF     
symbol lPTN_DAISIES           = $F5     ' low byte
symbol hPTN_DIZZY             = $FF     
symbol lPTN_DIZZY             = $F6     ' low byte
symbol hPTN_FIELDEFFECT       = $FF     
symbol lPTN_FIELDEFFECT       = $F7     ' low byte
symbol hPTN_KEY               = $FF     
symbol lPTN_KEY               = $F8     ' low byte
symbol hPTN_ROUNDER           = $FF     
symbol lPTN_ROUNDER           = $F9     ' low byte
symbol hPTN_SCALES            = $FF     
symbol lPTN_SCALES            = $FA     ' low byte
symbol hPTN_STONE             = $FF     
symbol lPTN_STONE             = $FB     ' low byte
symbol hPTN_THATCHES          = $FF     
symbol lPTN_THATCHES          = $FC     ' low byte
symbol hPTN_TILE              = $FF     
symbol lPTN_TILE              = $FD     ' low byte
symbol hPTN_WAFFLESREVENGE    = $FF     
symbol lPTN_WAFFLESREVENGE    = $FE     ' low byte
symbol hPTN_CROSSES           = $FF     
symbol lPTN_CROSSES           = $FF     ' low byte

' //------------------------------------------------------------------//
' //     gradient control constants                                   //
' //------------------------------------------------------------------//
symbol GRAD_DOWN              = $20    ' gradient changes in the vertical direction
symbol GRAD_RIGHT             = $30    ' gradient change in the horizontal direction
symbol GRAD_UP                = $40    ' gradient changes in the vertical direction
symbol GRAD_LEFT              = $50    ' gradient change in the horizontal direction
symbol GRAD_WAVE_VER          = $60    ' gradient wave in the vertical direction
symbol GRAD_WAVE_HOR          = $70    ' gradient wave in the horizontal direction

' // baud divisor rates for legacy setbaud(n);
symbol MIDI                   = 9
symbol BAUD_110               = 0
symbol BAUD_300               = 1
symbol BAUD_600               = 2
symbol BAUD_1200              = 3
symbol BAUD_2400              = 4
symbol BAUD_4800              = 5
symbol BAUD_9600              = 6
symbol BAUD_14400             = 7
symbol BAUD_19200             = 8
symbol BAUD_31250             = 9
symbol BAUD_38400             = 10
symbol BAUD_56000             = 11
symbol BAUD_57600             = 12
symbol BAUD_115200            = 13
symbol BAUD_128000            = 14
symbol BAUD_256000            = 15
symbol BAUD_300000            = 16
symbol BAUD_375000            = 17
symbol BAUD_500000            = 18
symbol BAUD_600000            = 19


' // I2C software emulation timing related constants
symbol I2C_SLOW               = 0       ' 100Khz
symbol I2C_MED                = 1       ' 400Khz
symbol I2C_FAST               = 2       ' 5Mhz
symbol I2C_10KHZ              = 3       ' 10khz
symbol I2C_20HZ               = 4       ' 20khz
symbol I2C_50KHZ              = 5       ' 50khz
symbol I2C_250KHZ             = 6       ' 250khz


' //------------------------------------------------------------------------------
' // Constants for SPI1, SPI2 an SPI3 "mode"
' //------------------------------------------------------------------------------
symbol SPI8_MODE_0            = 0       '    8bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on first falling edge
symbol SPI8_MODE_1            = 1       '    8bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on first rising edge
symbol SPI8_MODE_2            = 2       '    8bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on first falling edge
symbol SPI8_MODE_3            = 3       '    8bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on first falling edge
symbol SPI8_MODE_4            = 4       '    8bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on next rising edge
symbol SPI8_MODE_5            = 5       '    8bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on next falling edge
symbol SPI8_MODE_6            = 6       '    8bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on next rising edge
symbol SPI8_MODE_7            = 7       '    8bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on next rising edge
symbol SPI16_MODE_0           = 8       '    16bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on first falling edge
symbol SPI16_MODE_1           = 9       '    16bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on first rising edge
symbol SPI16_MODE_2           = 10      '    16bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on first falling edge
symbol SPI16_MODE_3           = 11      '    16bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on first falling edge
symbol SPI16_MODE_4           = 12      '    16bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on next rising edge
symbol SPI16_MODE_5           = 13      '    16bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on next falling edge
symbol SPI16_MODE_6           = 14      '    16bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on next rising edge
symbol SPI16_MODE_7           = 15      '    16bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on next rising edge

' //------------------------------------------------------------------------------
' // Constants for SPI1, SPI2 an SPI3 "speed"
' //------------------------------------------------------------------------------
symbol SPI_SPEED0             = 0       ' 78.125 khz
symbol SPI_SPEED1             = 1       ' 109.375 khz
symbol SPI_SPEED2             = 2       ' 273.4375 khz
symbol SPI_SPEED3             = 3       ' 312.5 khz
symbol SPI_SPEED4             = 4       ' 437.5 khz
symbol SPI_SPEED5             = 5       ' 729.166 khz
symbol SPI_SPEED6             = 6       ' 1.09375 mhz
symbol SPI_SPEED7             = 7       ' 1.25 mhz
symbol SPI_SPEED8             = 8       ' 1.75 mhz
symbol SPI_SPEED9             = 9       ' 2.1875 mhaz
symbol SPI_SPEED10            = 10      ' 4.375 mhz
symbol SPI_SPEED11            = 11      ' 5.00 mhz
symbol SPI_SPEED12            = 12      ' 7.00 mhz
symbol SPI_SPEED13            = 13      ' 8.75 mhz
symbol SPI_SPEED14            = 14      ' 11.666 mhz
symbol SPI_SPEED15            = 15      ' 17.5 mhz

' // image control header offsets
symbol IMG_COUNT              = 0
symbol IMG_ENTRYLEN           = 1
symbol IMG_MODE               = 2
symbol IMG_GCI_FILENAME       = 3
symbol IMG_DAT_FILENAME       = 4
symbol IMG_GCIFILE_HANDLE     = 5

' // image control entry offsets
symbol IMAGE_LOWORD           = 0       ' WORD image address LO
symbol IMAGE_HIWORD           = 1       ' WORD image address HI
symbol IMAGE_XPOS             = 2       ' WORD image location X
symbol IMAGE_YPOS             = 3       ' WORD image location Y
symbol IMAGE_WIDTH            = 4       ' WORD image width
symbol IMAGE_HEIGHT           = 5       ' WORD image height
symbol IMAGE_FLAGS            = 6       ' WORD image flags
symbol IMAGE_DELAY            = 7       ' WORD inter frame delay
symbol IMAGE_FRAMES           = 8       ' WORD number of frames
symbol IMAGE_INDEX            = 9       ' WORD current frame
symbol IMAGE_CLUSTER          = 10      ' WORD image start cluster  pos (for FAT16 only)
symbol IMAGE_SECTOR           = 11      ' WORD image start sector in cluster pos (for FAT16 only)
symbol IMAGE_TAG              = 12      ' WORD user variable #1
symbol IMAGE_TAG2             = 13      ' WORD user variable #2

' // image attribute flags (in IMAGE_FLAGS)
' // for img_SetAttributes(...) and img_ClearAttributes(...)
symbol hI_ENABLED             = $80  ' bit 15,  set for image enabled
symbol lI_ENABLED             = $00  ' low byte
symbol hI_DARKEN              = $40  ' bit 14,  display dimmed
symbol lI_DARKEN              = $00  ' low byte
symbol hI_LIGHTEN             = $20  ' bit 13,  display bright
symbol lI_LIGHTEN             = $00  ' low byte
symbol hI_TOUCHED             = $10  ' bit 12,  touch test result
symbol lI_TOUCHED             = $00  ' low byte
symbol hI_Y_LOCK              = $08  ' bit 11,  stop Y movement
symbol lI_Y_LOCK              = $00  ' low byte
symbol hI_X_LOCK              = $04  ' bit 10,  stop X movement
symbol lI_X_LOCK              = $00  ' low byte
symbol hI_TOPMOST             = $02  ' bit 9,   draw on top of other images next update (auto reset)
symbol lI_TOPMOST             = $00  ' low byte
symbol hI_STAYONTOP           = $01  ' bit 8,   draw on top of other images always
symbol lI_STAYONTOP           = $00  ' low byte
symbol I_MOVIE                = $0080  ' bit 7,   image is a movie
symbol I_NOGROUP              = $0040  ' bit 6,   set to exclude image refresh when using img_Show(hndl, ALL);
symbol I_TOUCH_DISABLE        = $0020  ' bit 5,   set to disable touch for this image, default=1 for movie, 0 for image
symbol I_COLOUR16             = $0010  ' bit 4,   indicates 16 bit colour mode
'     // bits 0-3 reserved



' //touch_Set() related constants
symbol TOUCH_ENABLE           = 0
symbol TOUCH_DISABLE          = 1
symbol TOUCH_REGIONDEFAULT    = 2

' //touch_Get() related constants
symbol TOUCH_STATUS           = 0
symbol TOUCH_GETX             = 1
symbol TOUCH_GETY             = 2
symbol NOTOUCH                = 0
symbol TOUCH_PRESSED          = 1
symbol TOUCH_RELEASED         = 2
symbol TOUCH_MOVING           = 3

' //------------------------------------------------------------------------------
' // FILEIO Error Code Constants
' //------------------------------------------------------------------------------
symbol FE_OK                  = 0       ' IDE function succeeded
symbol FE_IDE_ERROR           = 1       ' IDE command execution error
symbol FE_NOT_PRESENT         = 2       ' CARD not present
symbol FE_PARTITION_TYPE      = 3       ' WRONG partition type, not FAT16
symbol FE_INVALID_MBR         = 4       ' MBR sector invalid signature
symbol FE_INVALID_BR          = 5       ' Boot Record invalid signature
symbol FE_DISK_NOT_MNTD       = 6       ' Media not mounted
symbol FE_FILE_NOT_FOUND      = 7       ' File not found in open for read
symbol FE_INVALID_FILE        = 8       ' File not open
symbol FE_FAT_EOF             = 9       ' Fat attempt to read beyond EOF
symbol FE_EOF                 = 10      ' Reached the end of file
symbol FE_INVALID_CLUSTER     = 11      ' Invalid cluster value > maxcls
symbol FE_DIR_FULL            = 12      ' All root dir entry are taken
symbol FE_DISK_FULL           = 13      ' All clusters in partition are taken
symbol FE_FILE_OVERWRITE      = 14      ' A file with same name exist already
symbol FE_CANNOT_INIT         = 15      ' Cannot init the CARD
symbol FE_CANNOT_READ_MBR     = 16      ' Cannot read the MBR
symbol FE_MALLOC_FAILED       = 17      ' Malloc could not allocate the FILE struct
symbol FE_INVALID_MODE        = 18      ' Mode was not r.w.
symbol FE_FIND_ERROR          = 19      ' Failure during FILE search
symbol FE_INVALID_FNAME       = 20      ' bad filename
symbol FE_INVALID_MEDIA       = 21      ' bad media
symbol FE_SECTOR_READ_FAIL    = 22      ' sector read failed
symbol FE_SECTOR_WRITE_FAIL   = 23      ' sector write failed
symbol FE_FILE_TIMEOUT        = 26      ' Timeout during file I/O, probable unexpected media removal

' //------------------------------------------------------------------------------
' // DISK struct offsets
' //------------------------------------------------------------------------------
symbol DISK_FIRST_SECT_LO     = 0       ' DWORD address of the first sector of the FAT partition (LO word)
symbol DISK_FIRST_SECT_HI     = 1       '       address of the first sector of the FAT partition (HI word)
symbol DISK_FAT_LO            = 2       ' DWORD address of FAT (LO word)
symbol DISK_FAT_HI            = 3       '       address of FAT (HI word)
symbol DISK_ROOT_LO           = 4       ' DWORD address of root directory (LO word)
symbol DISK_ROOT_HI           = 5       '       address of root directory (HI word)
symbol DISK_DATA_LO           = 6       ' DWORD address of data area (LO word)
symbol DISK_DATA_HI           = 7       '       address of data area (HI word)
symbol DISK_MAXCLUS_LO        = 8       ' DWORD max number of clusters in partition (LO word)
symbol DISK_MAXCLUS_HI        = 9       '       max number of clusters in partition (HI word)
symbol DISK_MAXROOT           = 10      ' WORD  max entries in root directory
symbol DISK_FATSIZE           = 11      ' WORD  number of sectors in FAT
symbol DISK_FATCOPIES         = 12      ' WORD  number of fat copies
symbol DISK_SECT_PER_CLUS     = 13      ' WORD  number of sectors per cluster
symbol DISK_TYPE              = 14      ' WORD  type of fat
symbol DISK_BUF               = 15      ' WORD  pointer to 512 byte info buffer

' //------------------------------------------------------------------------------
' // FILE struct offsets
' //------------------------------------------------------------------------------
symbol FILE_FIRST_CLUSTER     = 0       ' WORD  first cluster
symbol FILE_CURR_CLUSTER      = 1       ' WORD  current cluster in file
symbol FILE_CURR_SECTOR       = 2       ' WORD  sector in current cluster
symbol FILE_CURR_SECTOR_POS   = 3       ' WORD  position in current sector
symbol FILE_CURR_SECTOR_TOP   = 4       ' WORD  number bytes in current sector buffer
symbol FILE_SEEK_POS_LO       = 5       ' DWORD position in the file (LO word)
symbol FILE_SEEK_POS_HI       = 6       '       position in the file (HI word)
symbol FILE_SIZE_LO           = 7       ' DWORD file size (LO word)
symbol FILE_SIZE_HI           = 8       '       file size (HI word)
symbol FILE_TIME              = 9       ' WORD  last update time
symbol FILE_DATE              = 10      ' WORD  last update date
symbol FILE_NAME              = 11      ' WORD  12 byte buffer for filename
symbol FILE_MODE              = 17      ' WORD  file mode 'r', 'w', 'a'
symbol FILE_ATTRIBUTES        = 18      ' WORD  files attributes
symbol FILE_PAGEFLAG          = 19      ' WORD  cache check flag
symbol FILE_ENTRY             = 20      ' WORD  entry position in cur directory
symbol FILE_DISK              = 21      ' WORD* pointer to DISK mount media structure
symbol FILE_BUFFER            = 22      ' WORD*  sector buffer



' //------------------------------------------------------------------//
' // pin counter mode constants                                       //
' //------------------------------------------------------------------//
symbol COUNT_OFF              = 0       ' Disconnect the counter from the pin, "OVFfunction" is therefore ignored, and counting is inhibited.
symbol COUNT_RISE             = 1       ' increment counter on every rising edge
symbol COUNT_FALL             = 2       ' increment counter on every falling edge
symbol COUNT_EDGE             = 3       ' increment on every rising and falling edge


' //------------------------------------------------------------------------------
' // PWM Constants
' //------------------------------------------------------------------------------
symbol PWM_OFF                = 0
symbol PWM_PLAIN              = 1
symbol PWM_SERVO              = 2

' //------------------------------------------------------------------//
' // CONSTANTS
' //------------------------------------------------------------------//

symbol SPI1                   = 1
symbol SPI2                   = 2
symbol SPI3                   = 3

' // generic constants
symbol ENABLE                 = 1
symbol DISABLE                = 0
symbol HI                     = 1
symbol LO                     = 0
symbol ON                     = 1
symbol OFF                    = 0
symbol hALL                   = $FF  ' argument for img_xxx functions to update all images (and other uses)
symbol lALL                   = $FF  ' low byte



' //gfx_Get() related constants
symbol X_MAX                  = 0       ' current orientations screen maximum X co-ordinate
symbol Y_MAX                  = 1       ' current orientations screen maximum Y co-ordinate
symbol LEFT_POS               = 2       ' last objects left co-ord
symbol TOP_POS                = 3       ' last objects top co-ord
symbol RIGHT_POS              = 4       ' last objects right co-ord
symbol BOTTOM_POS             = 5       ' last objects bottom co-ord
symbol X_ORG                  = 6       ' display position X offset
symbol Y_ORG                  = 7       ' display position X offset




symbol SOLID                  = 0       ' PEN_SIZE
symbol OUTLINE                = 1       ' PEN_SIZE
symbol STYLE1                 = 2
symbol STYLE2                 = 3

symbol LANDSCAPE              = 0       ' SCREEN_MODE (north)
symbol LANDSCAPE_R            = 1       ' SCREEN_MODE (south)
symbol PORTRAIT               = 2       ' SCREEN_MODE (west)
symbol PORTRAIT_R             = 3       ' SCREEN_MODE (east)

symbol COLOUR8                = 1       ' COLOUR_MODE 8 bit colour mode (not supported)
symbol COLOUR16               = 0       ' COLOUR_MODE 16 bit colour mode


symbol CHECKED                = 0
symbol UNCHECKED              = 1


symbol DOWN                   = 0
symbol UP                     = 1
symbol HIDE                   = 2
symbol HYPER                  = 3       ' text only, no frame

symbol BUTTON_DOWN            = 0
symbol BUTTON_UP              = 1

symbol SLIDER_SUNKEN          = 0
symbol SLIDER_RAISED          = 1
symbol SLIDER_HIDE            = 2

symbol hPROGRESSBAR_RAISED    = $FF     
symbol lPROGRESSBAR_RAISED    = $FF     ' low byte
symbol hPROGRESSBAR_SUNKEN    = $FF     
symbol lPROGRESSBAR_SUNKEN    = $FE     ' low byte
symbol PROGRESSBAR_HIDE       = 2

symbol PANEL_SUNKEN           = 0
symbol PANEL_RAISED           = 1
symbol PANEL_HIDE             = 2
symbol PANEL_FRAME            = 3




' // timer control  related constants
symbol TIMER0                 = 0
symbol TIMER1                 = 1
symbol TIMER2                 = 2
symbol TIMER3                 = 3
symbol TIMER4                 = 4
symbol TIMER5                 = 5
symbol TIMER6                 = 6
symbol TIMER7                 = 7



' //------------------------------------------------------------------------------
' // system WORD variables accesible with peekW and pokeW or pointer access
' // Note that the txt_Set variables (0-15) and gfx_set variables (16-31)
' // can also be accessed with peekW and pokeW
' //------------------------------------------------------------------------------

symbol RANDOM_LO              = 32      ' random number generator LO word
symbol RANDOM_HI              = 33      ' random number generator LO word
symbol SYSTEM_TIMER_LO        = 34      ' 1msec 32 bit free running timer LO word
symbol SYSTEM_TIMER_HI        = 35      ' 1msec 32 bit free running timer HI word
symbol TMR0                   = 36      ' user timer0
symbol TMR1                   = 37      ' user timer1
symbol TMR2                   = 38      ' user timer2
symbol TMR3                   = 39      ' user timer3 (10msec resolution)
symbol TMR4                   = 40      ' user timer0
symbol TMR5                   = 41      ' user timer1
symbol TMR6                   = 42      ' user timer2
symbol TMR7                   = 43      ' user timer3 (10msec resolution)
symbol SYS_X_MAX              = 44      ' display hardware X res-1
symbol SYS_Y_MAX              = 45      ' display hardware Y res-1
symbol GFX_XMAX               = 46      ' current display width-1 determined by portrait / landscape swapping
symbol GFX_YMAX               = 47      ' current display width-1 determined by portrait / landscape swapping
symbol GFX_LEFT               = 48      ' virtual left point for most recent object
symbol GFX_TOP                = 49      ' virtual top point for most recent object
symbol GFX_RIGHT              = 50      ' virtual right point for most recent object
symbol GFX_BOTTOM             = 51      ' virtual bottom point for most recent object
symbol GFX_X1                 = 52      ' clipped left point for current object
symbol GFX_Y1                 = 53      ' clipped top point for current object
symbol GFX_X2                 = 54      ' clipped right point for current object
symbol GFX_Y2                 = 55      ' clipped bottom point for current object
symbol GFX_X_ORG              = 56      ' current X origin
symbol GFX_Y_ORG              = 57      ' current Y origin

symbol GFX_THUMB_PERCENT      = 75      ' size of slider thumb as percentage
symbol GFX_THUMB_BORDER_DARK  = 76      ' darker shadow of thumb
symbol GFX_THUMB_BORDER_LIGHT = 77      ' lighter shadow of thumb
symbol TOUCH_XMINCAL          = 78      ' touch calibration value
symbol TOUCH_YMINCAL          = 79      ' touch calibration value
symbol TOUCH_XMAXCAL          = 80      ' touch calibration value
symbol TOUCH_YMAXCAL          = 81      ' touch calibration value
symbol IMG_WIDTH              = 82      ' width of currently loaded image
symbol IMG_HEIGHT             = 83      ' height of currently loaded image
symbol IMG_FRAME_DELAY        = 84      ' 0 if image, else inter frame delay for movie
symbol IMG_FLAGS              = 85      ' bit 4 determines colour mode, other bits reserved
symbol IMG_FRAME_COUNT        = 86      ' count of frames in a movie
symbol IMG_PIXEL_COUNT_LO     = 87      ' count of pixels in the current frame
symbol IMG_PIXEL_COUNT_HI     = 88      ' count of pixels in the current frame
symbol IMG_CURRENT_FRAME      = 89      ' last frame shown
symbol MEDIA_ADDRESS_LO       = 90      ' uSD byte address LO
symbol MEDIA_ADDRESS_HI       = 91      ' uSD byte address HI
symbol MEDIA_SECTOR_LO        = 92      ' uSD sector address LO
symbol MEDIA_SECTOR_HI        = 93      ' uSD sector address HI
symbol MEDIA_SECTOR_COUNT     = 94      ' uSD number of bytes remaining in sector
symbol TEXT_XPOS              = 95      ' text current x pixel position
symbol TEXT_YPOS              = 96      ' text current y pixel position
symbol TEXT_MARGIN            = 97      ' text left pixel pos for carriage return
symbol TXT_FONT_ID            = 98      ' font type, 0 = system font, else pointer to user font
symbol TXT_FONT_MAX           = 99      ' max number of chars in font
symbol TXT_FONT_OFFSET        = 100     ' starting offset (normally 0x20)
symbol TXT_FONT_WIDTH         = 101     ' current font width
symbol TXT_FONT_HEIGHT        = 102     ' current font height
symbol GFX_TOUCH_REGION_X1    = 103     ' touch capture region
symbol GFX_TOUCH_REGION_Y1    = 104
symbol GFX_TOUCH_REGION_X2    = 105
symbol GFX_TOUCH_REGION_Y2    = 106
symbol GFX_CLIP_LEFT_VAL      = 107     ' left clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_TOP_VAL       = 108     ' top clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_RIGHT_VAL     = 109     ' right clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_BOTTOM_VAL    = 110     ' bottom clipping point (set with gfx_ClipWindow(...)
symbol GFX_CLIP_LEFT          = 111     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_TOP           = 112     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_RIGHT         = 113     ' current clip value (reads full size if clipping turned off)
symbol GFX_CLIP_BOTTOM        = 114     ' current clip value (reads full size if clipping turned off)
symbol GRAM_PIXEL_COUNT_LO    = 115     ' LO word of count of pixels in the set GRAM area
symbol GRAM_PIXEL_COUNT_HI    = 116     ' HI word of count of pixels in the set GRAM area
symbol TOUCH_RAW_X            = 117     ' 12 bit raw A2D X value from touch screen
symbol TOUCH_RAW_Y            = 118     ' 12 bit raw A2D Y value from touch screen
symbol GFX_LAST_CHAR_WIDTH    = 119     ' calculated char width from last call to charWidth function
symbol GFX_LAST_CHAR_HEIGHT   = 120     ' calculated height from last call to charHeight function
symbol GFX_LAST_STR_WIDTH     = 121     ' calculated width from last call to strWidth function
symbol GFX_LAST_STR_HEIGHT    = 122     ' calculated height from last call to strHeight function
symbol PIN_COUNTER_PA4        = 123     ' pin counter for PA4
symbol PIN_COUNTER_PA5        = 124     ' pin counter for PA5
symbol PIN_COUNTER_PA6        = 125     ' pin counter for PA6
symbol PIN_COUNTER_PA7        = 126     ' pin counter for PA7
symbol PIN_COUNTER_PA8        = 127     ' pin counter for PA8
symbol PIN_COUNTER_PA9        = 128     ' pin counter for PA9
symbol PIN_EVENT_PA4          = 129     ' pin counter rollover event for PA4
symbol PIN_EVENT_PA5          = 130     ' pin counter rollover event for PA5
symbol PIN_EVENT_PA6          = 131     ' pin counter rollover event for PA6
symbol PIN_EVENT_PA7          = 132     ' pin counter rollover event for PA7
symbol PIN_EVENT_PA8          = 133     ' pin counter rollover event for PA8
symbol PIN_EVENT_PA9          = 134     ' pin counter rollover event for PA9
symbol QEN1_COUNTER_LO        = 135     ' quadrature encoder #1 counter LO
symbol QEN1_COUNTER_HI        = 136     ' quadrature encoder #1 counter HI
symbol QEN1_DELTA             = 137     ' quadrature encoder #1 delta count, reset when read
symbol QEN2_COUNTER_LO        = 138     ' quadrature encoder #2 counter LO
symbol QEN2_COUNTER_HI        = 139     ' quadrature encoder #2 counter HI
symbol QEN2_DELTA             = 140     ' quadrature encoder #2 delta count, reset when read
symbol FALSE_REASON           = 141     ' explanation 'false' results, currently only for flash_ functions

' //------------------------------------------------------------------//
' // string processing constants                                      //
' //------------------------------------------------------------------//
symbol STR                    = $0080  ' display as string
symbol CHR                    = $0081  ' display as single char


' //============================================================================
' // number formatting bits
' //============================================================================
' // bit 15 14 13 12 11 10 9  8  7  6  5  4  3  2  1  0
' //     |  |  |  |   \___ ___/  |  \  /  \_____ _____/
' //     |  |  |  |       V      |   V          V
' //     |  |  |  |       |      |   |          |
' //     |  |  |  |  digit count |   |          |
' //     |  |  |  |  (nb 0 = 16) |   |          |____BASE (usually 2,10 or 16)
' //     |  |  |  |              |   |
' //     |  |  |  |              |   |___reserved (not used on Goldelox)
' //     |  |  |  |              |
' //     |  |  |  |              |____ string indicatior
' //     |  |  |  |                      0x80 = [STR]
' //     |  |  |  |                      0x81 = [CHR]
' //     |  |  |  |______
' //     |  |  |           1 = leading zeros included
' //     |  |  |           0 = leading zeros suppressed
' //     |  |  |
' //     |  |  |_______
' //     |  |           1 = leading zero blanking
' //     |  |
' //     |  |_____ sign bit (0 = signed, 1 = unsigned)
' //     |
' //     |______ 1 = space before unsigned number



'   //=======================================================
'   // general number formatting constants
'   // for 'print' and 'putnum'
'   //=======================================================
'   // binary, no leading zeroes
symbol BIN                    = $0002  ' binary, 16 digits, no leading zeroes
symbol hBIN1                  = $01  ' binary, 1 digit, no leading zeroes
symbol lBIN1                  = $02  ' low byte
symbol hBIN2                  = $02  ' binary, 2 digits, no leading zeroes
symbol lBIN2                  = $02  ' low byte
symbol hBIN3                  = $03  ' binary, 3 digits, no leading zeroes
symbol lBIN3                  = $02  ' low byte
symbol hBIN4                  = $04  ' binary, 4 digits, no leading zeroes
symbol lBIN4                  = $02  ' low byte
symbol hBIN5                  = $05  ' binary, 5 digits, no leading zeroes
symbol lBIN5                  = $02  ' low byte
symbol hBIN6                  = $06  ' binary, 6 digits, no leading zeroes
symbol lBIN6                  = $02  ' low byte
symbol hBIN7                  = $07  ' binary, 7 digits, no leading zeroes
symbol lBIN7                  = $02  ' low byte
symbol hBIN8                  = $08  ' binary, 8 digits, no leading zeroes
symbol lBIN8                  = $02  ' low byte
symbol hBIN9                  = $09  ' binary, 9 digits, no leading zeroes
symbol lBIN9                  = $02  ' low byte
symbol hBIN10                 = $0A  ' binary, 10 digits, no leading zeroes
symbol lBIN10                 = $02  ' low byte
symbol hBIN11                 = $0B  ' binary, 11 digits, no leading zeroes
symbol lBIN11                 = $02  ' low byte
symbol hBIN12                 = $0C  ' binary, 12 digits, no leading zeroes
symbol lBIN12                 = $02  ' low byte
symbol hBIN13                 = $0D  ' binary, 13 digits, no leading zeroes
symbol lBIN13                 = $02  ' low byte
symbol hBIN14                 = $0E  ' binary, 14 digits, no leading zeroes
symbol lBIN14                 = $02  ' low byte
symbol hBIN15                 = $0F  ' binary, 15 digits, no leading zeroes
symbol lBIN15                 = $02  ' low byte
symbol BIN16                  = $0002  ' binary, 16 digits, no leading zeroes

'   // binary, with leading zeroes
symbol hBINZ                  = $10  ' binary, 16 digits, leading zeroes
symbol lBINZ                  = $02  ' low byte
symbol hBIN1Z                 = $11  ' binary, 1 digit, leading zeroes
symbol lBIN1Z                 = $02  ' low byte
symbol hBIN2Z                 = $12  ' binary, 2 digits, leading zeroes
symbol lBIN2Z                 = $02  ' low byte
symbol hBIN3Z                 = $13  ' binary, 3 digits, leading zeroes
symbol lBIN3Z                 = $02  ' low byte
symbol hBIN4Z                 = $14  ' binary, 4 digits, leading zeroes
symbol lBIN4Z                 = $02  ' low byte
symbol hBIN5Z                 = $15  ' binary, 5 digits, leading zeroes
symbol lBIN5Z                 = $02  ' low byte
symbol hBIN6Z                 = $16  ' binary, 6 digits, leading zeroes
symbol lBIN6Z                 = $02  ' low byte
symbol hBIN7Z                 = $17  ' binary, 7 digits, leading zeroes
symbol lBIN7Z                 = $02  ' low byte
symbol hBIN8Z                 = $18  ' binary, 8 digits, leading zeroes
symbol lBIN8Z                 = $02  ' low byte
symbol hBIN9Z                 = $19  ' binary, 9 digits, leading zeroes
symbol lBIN9Z                 = $02  ' low byte
symbol hBIN10Z                = $1A  ' binary, 10 digits, leading zeroes
symbol lBIN10Z                = $02  ' low byte
symbol hBIN11Z                = $1B  ' binary, 11 digits, leading zeroes
symbol lBIN11Z                = $02  ' low byte
symbol hBIN12Z                = $1C  ' binary, 12 digits, leading zeroes
symbol lBIN12Z                = $02  ' low byte
symbol hBIN13Z                = $1D  ' binary, 13 digits, leading zeroes
symbol lBIN13Z                = $02  ' low byte
symbol hBIN14Z                = $1E  ' binary, 14 digits, leading zeroes
symbol lBIN14Z                = $02  ' low byte
symbol hBIN15Z                = $1F  ' binary, 15 digits, leading zeroes
symbol lBIN15Z                = $02  ' low byte
symbol hBIN16Z                = $10  ' binary, 16 digits, leading zeroes
symbol lBIN16Z                = $02  ' low byte

'   // binary, with leading blanked
symbol hBINZB                 = $20  ' binary, 16 digits, leading blanks
symbol lBINZB                 = $02  ' low byte
symbol hBIN1ZB                = $21  ' binary, 1 digit, leading blanks
symbol lBIN1ZB                = $02  ' low byte
symbol hBIN2ZB                = $22  ' binary, 2 digits, leading blanks
symbol lBIN2ZB                = $02  ' low byte
symbol hBIN3ZB                = $23  ' binary, 3 digits, leading blanks
symbol lBIN3ZB                = $02  ' low byte
symbol hBIN4ZB                = $24  ' binary, 4 digits, leading blanks
symbol lBIN4ZB                = $02  ' low byte
symbol hBIN5ZB                = $25  ' binary, 5 digits, leading blanks
symbol lBIN5ZB                = $02  ' low byte
symbol hBIN6ZB                = $26  ' binary, 6 digits, leading blanks
symbol lBIN6ZB                = $02  ' low byte
symbol hBIN7ZB                = $27  ' binary, 7 digits, leading blanks
symbol lBIN7ZB                = $02  ' low byte
symbol hBIN8ZB                = $28  ' binary, 8 digits, leading blanks
symbol lBIN8ZB                = $02  ' low byte
symbol hBIN9ZB                = $29  ' binary, 9 digits, leading blanks
symbol lBIN9ZB                = $02  ' low byte
symbol hBIN10ZB               = $2A  ' binary, 10 digits, leading blanks
symbol lBIN10ZB               = $02  ' low byte
symbol hBIN11ZB               = $2B  ' binary, 11 digits, leading blanks
symbol lBIN11ZB               = $02  ' low byte
symbol hBIN12ZB               = $2C  ' binary, 12 digits, leading blanks
symbol lBIN12ZB               = $02  ' low byte
symbol hBIN13ZB               = $2D  ' binary, 13 digits, leading blanks
symbol lBIN13ZB               = $02  ' low byte
symbol hBIN14ZB               = $2E  ' binary, 14 digits, leading blanks
symbol lBIN14ZB               = $02  ' low byte
symbol hBIN15ZB               = $2F  ' binary, 15 digits, leading blanks
symbol lBIN15ZB               = $02  ' low byte
symbol hBIN16ZB               = $20  ' binary, 16 digits, leading blanks
symbol lBIN16ZB               = $02  ' low byte

'   // signed decimal, no leading zeroes
symbol hDEC                   = $05  ' signed decimal, 5 digits, no leading zeroes
symbol lDEC                   = $0A  ' low byte
symbol hDEC1                  = $01  ' signed decimal, 1 digit, no leading zeroes
symbol lDEC1                  = $0A  ' low byte
symbol hDEC2                  = $02  ' signed decimal, 2 digits, no leading zeroes
symbol lDEC2                  = $0A  ' low byte
symbol hDEC3                  = $03  ' signed decimal, 3 digits, no leading zeroes
symbol lDEC3                  = $0A  ' low byte
symbol hDEC4                  = $04  ' signed decimal, 4 digits, no leading zeroes
symbol lDEC4                  = $0A  ' low byte
symbol hDEC5                  = $05  ' signed decimal, 5 digits, no leading zeroes
symbol lDEC5                  = $0A  ' low byte

'   // signed decimal, with leading zeroes
symbol hDECZ                  = $15  ' signed decimal, 5 digits, leading zeroes
symbol lDECZ                  = $0A  ' low byte
symbol hDEC1Z                 = $11  ' signed decimal, 1 digit, leading zeroes
symbol lDEC1Z                 = $0A  ' low byte
symbol hDEC2Z                 = $12  ' signed decimal, 2 digits, leading zeroes
symbol lDEC2Z                 = $0A  ' low byte
symbol hDEC3Z                 = $13  ' signed decimal, 3 digits, leading zeroes
symbol lDEC3Z                 = $0A  ' low byte
symbol hDEC4Z                 = $14  ' signed decimal, 4 digits, leading zeroes
symbol lDEC4Z                 = $0A  ' low byte
symbol hDEC5Z                 = $15  ' signed decimal, 5 digits, leading zeroes
symbol lDEC5Z                 = $0A  ' low byte

'   // signed decimal, leading zeroes blanked
symbol hDECZB                 = $25  ' signed decimal, 5 digits, leading blanks
symbol lDECZB                 = $0A  ' low byte
symbol hDEC1ZB                = $21  ' signed decimal, 1 digit, leading blanks
symbol lDEC1ZB                = $0A  ' low byte
symbol hDEC2ZB                = $22  ' signed decimal, 2 digits, leading blanks
symbol lDEC2ZB                = $0A  ' low byte
symbol hDEC3ZB                = $23  ' signed decimal, 3 digits, leading blanks
symbol lDEC3ZB                = $0A  ' low byte
symbol hDEC4ZB                = $24  ' signed decimal, 4 digits, leading blanks
symbol lDEC4ZB                = $0A  ' low byte
symbol hDEC5ZB                = $25  ' signed decimal, 5 digits, leading blanks
symbol lDEC5ZB                = $0A  ' low byte

'   // unsigned decimal, no leading zeroes
symbol hUDEC                  = $45  ' unsigned decimal, 5 digits, no leading zeroes
symbol lUDEC                  = $0A  ' low byte
symbol hUDEC1                 = $41  ' unsigned decimal, 1 digit, no leading zeroes
symbol lUDEC1                 = $0A  ' low byte
symbol hUDEC2                 = $42  ' unsigned decimal, 2 digits, no leading zeroes
symbol lUDEC2                 = $0A  ' low byte
symbol hUDEC3                 = $43  ' unsigned decimal, 3 digits, no leading zeroes
symbol lUDEC3                 = $0A  ' low byte
symbol hUDEC4                 = $44  ' unsigned decimal, 4 digits, no leading zeroes
symbol lUDEC4                 = $0A  ' low byte
symbol hUDEC5                 = $45  ' unsigned decimal, 5 digits, no leading zeroes
symbol lUDEC5                 = $0A  ' low byte

'   // unsigned decimal, with leading zero's
symbol hUDECZ                 = $55  ' unsigned decimal, 5 digits, leading zeroes
symbol lUDECZ                 = $0A  ' low byte
symbol hUDEC1Z                = $51  ' unsigned decimal, 1 digit, leading zeroes
symbol lUDEC1Z                = $0A  ' low byte
symbol hUDEC2Z                = $52  ' unsigned decimal, 2 digits, leading zeroes
symbol lUDEC2Z                = $0A  ' low byte
symbol hUDEC3Z                = $53  ' unsigned decimal, 3 digits, leading zeroes
symbol lUDEC3Z                = $0A  ' low byte
symbol hUDEC4Z                = $54  ' unsigned decimal, 4 digits, leading zeroes
symbol lUDEC4Z                = $0A  ' low byte
symbol hUDEC5Z                = $55  ' unsigned decimal, 5 digits, leading zeroes
symbol lUDEC5Z                = $0A  ' low byte

'   // unsigned decimal, leading zeroes blanked
symbol hUDECZB                = $65  ' unsigned decimal, 5 digits, leading blanks
symbol lUDECZB                = $0A  ' low byte
symbol hUDEC1ZB               = $61  ' unsigned decimal, 1 digit, leading blanks
symbol lUDEC1ZB               = $0A  ' low byte
symbol hUDEC2ZB               = $62  ' unsigned decimal, 2 digits, leading blanks
symbol lUDEC2ZB               = $0A  ' low byte
symbol hUDEC3ZB               = $63  ' unsigned decimal, 3 digits, leading blanks
symbol lUDEC3ZB               = $0A  ' low byte
symbol hUDEC4ZB               = $64  ' unsigned decimal, 4 digits, leading blanks
symbol lUDEC4ZB               = $0A  ' low byte
symbol hUDEC5ZB               = $65  ' unsigned decimal, 5 digits, leading blanks
symbol lUDEC5ZB               = $0A  ' low byte

'   // hex, with leading zero's
symbol hHEX                   = $14  ' hex, 4 digits, leading zeroes
symbol lHEX                   = $10  ' low byte
symbol hHEX1                  = $11  ' hex, 1 digit, leading zeroes
symbol lHEX1                  = $10  ' low byte
symbol hHEX2                  = $12  ' hex, 2 digits, leading zeroes
symbol lHEX2                  = $10  ' low byte
symbol hHEX3                  = $13  ' hex, 3 digits, leading zeroes
symbol lHEX3                  = $10  ' low byte
symbol hHEX4                  = $14  ' hex, 4 digits, leading zeroes
symbol lHEX4                  = $10  ' low byte

'   // hex, no leading zero's
symbol hHEXZ                  = $04  ' hex, 4 digits, no leading zeroes
symbol lHEXZ                  = $10  ' low byte
symbol hHEX1Z                 = $01  ' hex, 1 digit, no leading zeroes
symbol lHEX1Z                 = $10  ' low byte
symbol hHEX2Z                 = $02  ' hex, 2 digits, no leading zeroes
symbol lHEX2Z                 = $10  ' low byte
symbol hHEX3Z                 = $03  ' hex, 3 digits, no leading zeroes
symbol lHEX3Z                 = $10  ' low byte
symbol hHEX4Z                 = $04  ' hex, 4 digits, no leading zeroes
symbol lHEX4Z                 = $10  ' low byte

'   // hex, leading zero's blanked
symbol hHEXZB                 = $24  ' hex, 4 digits, leading blanks
symbol lHEXZB                 = $10  ' low byte
symbol hHEX1ZB                = $21  ' hex, 1 digit, leading blanks
symbol lHEX1ZB                = $10  ' low byte
symbol hHEX2ZB                = $22  ' hex, 2 digits, leading blanks
symbol lHEX2ZB                = $10  ' low byte
symbol hHEX3ZB                = $23  ' hex, 3 digits, leading blanks
symbol lHEX3ZB                = $10  ' low byte
symbol hHEX4ZB                = $24  ' hex, 4 digits, leading blanks
symbol lHEX4ZB                = $10  ' low byte



' //==================================================================================================



' /*
'     16 bit RGB (565) Colour Chart
'     Original work by 4D Forum Member: skadoo
' */



symbol hALICEBLUE             = $F7     
symbol lALICEBLUE             = $DF     ' low byte
symbol hANTIQUEWHITE          = $FF     
symbol lANTIQUEWHITE          = $5A     ' low byte
symbol hAQUA                  = $07     
symbol lAQUA                  = $FF     ' low byte
symbol hAQUAMARINE            = $7F     
symbol lAQUAMARINE            = $FA     ' low byte
symbol hAZURE                 = $F7     
symbol lAZURE                 = $FF     ' low byte
symbol hBEIGE                 = $F7     
symbol lBEIGE                 = $BB     ' low byte
symbol hBISQUE                = $FF     
symbol lBISQUE                = $38     ' low byte
symbol hBLACK                 = $00     
symbol lBLACK                 = $00     ' low byte
symbol hBLANCHEDALMOND        = $FF     
symbol lBLANCHEDALMOND        = $59     ' low byte
symbol hBLUE                  = $00     
symbol lBLUE                  = $1F     ' low byte
symbol hBLUEVIOLET            = $89     
symbol lBLUEVIOLET            = $5C     ' low byte
symbol hBROWN                 = $A1     
symbol lBROWN                 = $45     ' low byte
symbol hBURLYWOOD             = $DD     
symbol lBURLYWOOD             = $D0     ' low byte
symbol hCADETBLUE             = $5C     
symbol lCADETBLUE             = $F4     ' low byte
symbol hCHARTREUSE            = $7F     
symbol lCHARTREUSE            = $E0     ' low byte
symbol hCHOCOLATE             = $D3     
symbol lCHOCOLATE             = $43     ' low byte
symbol hCORAL                 = $FB     
symbol lCORAL                 = $EA     ' low byte
symbol hCORNFLOWERBLUE        = $64     
symbol lCORNFLOWERBLUE        = $BD     ' low byte
symbol hCORNSILK              = $FF     
symbol lCORNSILK              = $DB     ' low byte
symbol hCRIMSON               = $D8     
symbol lCRIMSON               = $A7     ' low byte
symbol hCYAN                  = $07     
symbol lCYAN                  = $FF     ' low byte
symbol hDARKBLUE              = $00     
symbol lDARKBLUE              = $11     ' low byte
symbol hDARKCYAN              = $04     
symbol lDARKCYAN              = $51     ' low byte
symbol hDARKGOLDENROD         = $BC     
symbol lDARKGOLDENROD         = $21     ' low byte
symbol hDARKGRAY              = $AD     
symbol lDARKGRAY              = $55     ' low byte
symbol hDARKGREEN             = $03     
symbol lDARKGREEN             = $20     ' low byte
symbol hDARKKHAKI             = $BD     
symbol lDARKKHAKI             = $AD     ' low byte
symbol hDARKMAGENTA           = $88     
symbol lDARKMAGENTA           = $11     ' low byte
symbol hDARKOLIVEGREEN        = $53     
symbol lDARKOLIVEGREEN        = $45     ' low byte
symbol hDARKORANGE            = $FC     
symbol lDARKORANGE            = $60     ' low byte
symbol hDARKORCHID            = $99     
symbol lDARKORCHID            = $99     ' low byte
symbol hDARKRED               = $88     
symbol lDARKRED               = $00     ' low byte
symbol hDARKSALMON            = $EC     
symbol lDARKSALMON            = $AF     ' low byte
symbol hDARKSEAGREEN          = $8D     
symbol lDARKSEAGREEN          = $F1     ' low byte
symbol hDARKSLATEBLUE         = $49     
symbol lDARKSLATEBLUE         = $F1     ' low byte
symbol hDARKSLATEGRAY         = $2A     
symbol lDARKSLATEGRAY         = $69     ' low byte
symbol hDARKTURQUOISE         = $06     
symbol lDARKTURQUOISE         = $7A     ' low byte
symbol hDARKVIOLET            = $90     
symbol lDARKVIOLET            = $1A     ' low byte
symbol hDEEPPINK              = $F8     
symbol lDEEPPINK              = $B2     ' low byte
symbol hDEEPSKYBLUE           = $05     
symbol lDEEPSKYBLUE           = $FF     ' low byte
symbol hDIMGRAY               = $6B     
symbol lDIMGRAY               = $4D     ' low byte
symbol hDODGERBLUE            = $1C     
symbol lDODGERBLUE            = $9F     ' low byte
symbol hFIREBRICK             = $B1     
symbol lFIREBRICK             = $04     ' low byte
symbol hFLORALWHITE           = $FF     
symbol lFLORALWHITE           = $DE     ' low byte
symbol hFORESTGREEN           = $24     
symbol lFORESTGREEN           = $44     ' low byte
symbol hFUCHSIA               = $F8     
symbol lFUCHSIA               = $1F     ' low byte
symbol hGAINSBORO             = $DE     
symbol lGAINSBORO             = $FB     ' low byte
symbol hGHOSTWHITE            = $FF     
symbol lGHOSTWHITE            = $DF     ' low byte
symbol hGOLD                  = $FE     
symbol lGOLD                  = $A0     ' low byte
symbol hGOLDENROD             = $DD     
symbol lGOLDENROD             = $24     ' low byte
symbol hGRAY                  = $84     
symbol lGRAY                  = $10     ' low byte
symbol hGREEN                 = $04     
symbol lGREEN                 = $00     ' low byte
symbol hGREENYELLOW           = $AF     
symbol lGREENYELLOW           = $E5     ' low byte
symbol hHONEYDEW              = $F7     
symbol lHONEYDEW              = $FE     ' low byte
symbol hHOTPINK               = $FB     
symbol lHOTPINK               = $56     ' low byte
symbol hINDIANRED             = $CA     
symbol lINDIANRED             = $EB     ' low byte
symbol hINDIGO                = $48     
symbol lINDIGO                = $10     ' low byte
symbol hIVORY                 = $FF     
symbol lIVORY                 = $FE     ' low byte
symbol hKHAKI                 = $F7     
symbol lKHAKI                 = $31     ' low byte
symbol hLAVENDER              = $E7     
symbol lLAVENDER              = $3F     ' low byte
symbol hLAVENDERBLUSH         = $FF     
symbol lLAVENDERBLUSH         = $9E     ' low byte
symbol hLAWNGREEN             = $7F     
symbol lLAWNGREEN             = $E0     ' low byte
symbol hLEMONCHIFFON          = $FF     
symbol lLEMONCHIFFON          = $D9     ' low byte
symbol hLIGHTBLUE             = $AE     
symbol lLIGHTBLUE             = $DC     ' low byte
symbol hLIGHTCORAL            = $F4     
symbol lLIGHTCORAL            = $10     ' low byte
symbol hLIGHTCYAN             = $E7     
symbol lLIGHTCYAN             = $FF     ' low byte
symbol hLIGHTGOLD             = $FF     
symbol lLIGHTGOLD             = $DA     ' low byte
symbol hLIGHTGREEN            = $97     
symbol lLIGHTGREEN            = $72     ' low byte
symbol hLIGHTGREY             = $D6     
symbol lLIGHTGREY             = $9A     ' low byte
symbol hLIGHTPINK             = $FD     
symbol lLIGHTPINK             = $B8     ' low byte
symbol hLIGHTSALMON           = $FD     
symbol lLIGHTSALMON           = $0F     ' low byte
symbol hLIGHTSEAGREEN         = $25     
symbol lLIGHTSEAGREEN         = $95     ' low byte
symbol hLIGHTSKYBLUE          = $86     
symbol lLIGHTSKYBLUE          = $7F     ' low byte
symbol hLIGHTSLATEGRAY        = $74     
symbol lLIGHTSLATEGRAY        = $53     ' low byte
symbol hLIGHTSTEELBLUE        = $B6     
symbol lLIGHTSTEELBLUE        = $3B     ' low byte
symbol hLIGHTYELLOW           = $FF     
symbol lLIGHTYELLOW           = $FC     ' low byte
symbol hLIME                  = $07     
symbol lLIME                  = $E0     ' low byte
symbol hLIMEGREEN             = $36     
symbol lLIMEGREEN             = $66     ' low byte
symbol hLINEN                 = $FF     
symbol lLINEN                 = $9C     ' low byte
symbol hMAGENTA               = $F8     
symbol lMAGENTA               = $1F     ' low byte
symbol hMAROON                = $80     
symbol lMAROON                = $00     ' low byte
symbol hMEDIUMAQUAMARINE      = $66     
symbol lMEDIUMAQUAMARINE      = $75     ' low byte
symbol hMEDIUMBLUE            = $00     
symbol lMEDIUMBLUE            = $19     ' low byte
symbol hMEDIUMORCHID          = $BA     
symbol lMEDIUMORCHID          = $BA     ' low byte
symbol hMEDIUMPURPLE          = $93     
symbol lMEDIUMPURPLE          = $9B     ' low byte
symbol hMEDIUMSEAGREEN        = $3D     
symbol lMEDIUMSEAGREEN        = $8E     ' low byte
symbol hMEDIUMSLATEBLUE       = $7B     
symbol lMEDIUMSLATEBLUE       = $5D     ' low byte
symbol hMEDIUMSPRINGGREEN     = $07     
symbol lMEDIUMSPRINGGREEN     = $D3     ' low byte
symbol hMEDIUMTURQUOISE       = $4E     
symbol lMEDIUMTURQUOISE       = $99     ' low byte
symbol hMEDIUMVIOLETRED       = $C0     
symbol lMEDIUMVIOLETRED       = $B0     ' low byte
symbol hMIDNIGHTBLUE          = $18     
symbol lMIDNIGHTBLUE          = $CE     ' low byte
symbol hMINTCREAM             = $F7     
symbol lMINTCREAM             = $FF     ' low byte
symbol hMISTYROSE             = $FF     
symbol lMISTYROSE             = $3C     ' low byte
symbol hMOCCASIN              = $FF     
symbol lMOCCASIN              = $36     ' low byte
symbol hNAVAJOWHITE           = $FE     
symbol lNAVAJOWHITE           = $F5     ' low byte
symbol hNAVY                  = $00     
symbol lNAVY                  = $10     ' low byte
symbol hOLDLACE               = $FF     
symbol lOLDLACE               = $BC     ' low byte
symbol hOLIVE                 = $84     
symbol lOLIVE                 = $00     ' low byte
symbol hOLIVEDRAB             = $6C     
symbol lOLIVEDRAB             = $64     ' low byte
symbol hORANGE                = $FD     
symbol lORANGE                = $20     ' low byte
symbol hORANGERED             = $FA     
symbol lORANGERED             = $20     ' low byte
symbol hORCHID                = $DB     
symbol lORCHID                = $9A     ' low byte
symbol hPALEGOLDENROD         = $EF     
symbol lPALEGOLDENROD         = $55     ' low byte
symbol hPALEGREEN             = $9F     
symbol lPALEGREEN             = $D3     ' low byte
symbol hPALETURQUOISE         = $AF     
symbol lPALETURQUOISE         = $7D     ' low byte
symbol hPALEVIOLETRED         = $DB     
symbol lPALEVIOLETRED         = $92     ' low byte
symbol hPAPAYAWHIP            = $FF     
symbol lPAPAYAWHIP            = $7A     ' low byte
symbol hPEACHPUFF             = $FE     
symbol lPEACHPUFF             = $D7     ' low byte
symbol hPERU                  = $CC     
symbol lPERU                  = $27     ' low byte
symbol hPINK                  = $FE     
symbol lPINK                  = $19     ' low byte
symbol hPLUM                  = $DD     
symbol lPLUM                  = $1B     ' low byte
symbol hPOWDERBLUE            = $B7     
symbol lPOWDERBLUE            = $1C     ' low byte
symbol hPURPLE                = $80     
symbol lPURPLE                = $10     ' low byte
symbol hRED                   = $F8     
symbol lRED                   = $00     ' low byte
symbol hROSYBROWN             = $BC     
symbol lROSYBROWN             = $71     ' low byte
symbol hROYALBLUE             = $43     
symbol lROYALBLUE             = $5C     ' low byte
symbol hSADDLEBROWN           = $8A     
symbol lSADDLEBROWN           = $22     ' low byte
symbol hSALMON                = $FC     
symbol lSALMON                = $0E     ' low byte
symbol hSANDYBROWN            = $F5     
symbol lSANDYBROWN            = $2C     ' low byte
symbol hSEAGREEN              = $2C     
symbol lSEAGREEN              = $4A     ' low byte
symbol hSEASHELL              = $FF     
symbol lSEASHELL              = $BD     ' low byte
symbol hSIENNA                = $A2     
symbol lSIENNA                = $85     ' low byte
symbol hSILVER                = $C6     
symbol lSILVER                = $18     ' low byte
symbol hSKYBLUE               = $86     
symbol lSKYBLUE               = $7D     ' low byte
symbol hSLATEBLUE             = $6A     
symbol lSLATEBLUE             = $D9     ' low byte
symbol hSLATEGRAY             = $74     
symbol lSLATEGRAY             = $12     ' low byte
symbol hSNOW                  = $FF     
symbol lSNOW                  = $DF     ' low byte
symbol hSPRINGGREEN           = $07     
symbol lSPRINGGREEN           = $EF     ' low byte
symbol hSTEELBLUE             = $44     
symbol lSTEELBLUE             = $16     ' low byte
symbol hTAN                   = $D5     
symbol lTAN                   = $B1     ' low byte
symbol hTEAL                  = $04     
symbol lTEAL                  = $10     ' low byte
symbol hTHISTLE               = $DD     
symbol lTHISTLE               = $FB     ' low byte
symbol hTOMATO                = $FB     
symbol lTOMATO                = $08     ' low byte
symbol hTURQUOISE             = $47     
symbol lTURQUOISE             = $1A     ' low byte
symbol hVIOLET                = $EC     
symbol lVIOLET                = $1D     ' low byte
symbol hWHEAT                 = $F6     
symbol lWHEAT                 = $F6     ' low byte
symbol hWHITE                 = $FF     
symbol lWHITE                 = $FF     ' low byte
symbol hWHITESMOKE            = $F7     
symbol lWHITESMOKE            = $BE     ' low byte
symbol hYELLOW                = $FF     
symbol lYELLOW                = $E0     ' low byte
symbol hYELLOWGREEN           = $9E     
symbol lYELLOWGREEN           = $66     ' low byte

