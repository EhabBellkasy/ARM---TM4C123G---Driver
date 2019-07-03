/*
 * RCC.h
 *
 *  Created on: 2019/03/13
 *      Author: Ehab Bellkasy
 */
 
#ifndef RCC_H_
#define RCC_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 8: Run-Mode Clock Configuration (RCC), offset 0x060
The bits in this register configure the system clock and oscillators.
Important: Write the RCC register prior to writing the RCC2 register.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	RCC_ADDRESS				0x400FE060		// Run-Mode Clock Configuration



//SYSTEM	registers 				Offset		Description
#define 	RCC_OFFSET				0x060		// Run-Mode Clock Configuration






//>>------------------>>BITS:-				Number	Description	
			
			
// reserved	#define 	BIT31			31		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT30			30		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT29			29		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT28			28		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			
			// Auto Clock Gating
												// Auto Clock Gating: This bit specifies whether the system uses the Sleep-Mode Clock Gating Control (SCGCn) registers and Deep-Sleep-Mode Clock Gating Control (DCGCn) registers if the microcontroller enters a Sleep or Deep-Sleep mode (respectively). The RCGCn registers are always used to control the clocks in Run mode.
			#define 	RCC_ACG			27		// Value	Description
												// 0		The Run-Mode Clock Gating Control (RCGCn) registers are used when the microcontroller enters a sleep mode.
												// 1		The SCGCn or DCGCn registers are used to control the clocks distributed to the peripherals when the microcontroller is in a sleep mode. The SCGCn and DCGCn registers allow unused peripherals to consume less power when the microcontroller is in a sleep mode.
			
			
			// System Clock Divisor
			#define 	RCC_SYSDIV3		26		// System Clock Divisor:
			#define 	RCC_SYSDIV2		25		// Specifies which divisor is used to generate the system clock from either the PLL output or the oscillator source (depending on how the BYPASS bit in this register is configured). See Table 5-4 on page 223 for bit encodings.
			#define 	RCC_SYSDIV1		24		// If the SYSDIV value is less than MINSYSDIV (see page 427), and the PLL is being used, then the MINSYSDIV value is used as the divisor.
			#define 	RCC_SYSDIV0		23		// If the PLL is not being used, the SYSDIV value can be less than MINSYSDIV.
			
			
			// Enable System Clock Divider
												// Enable System Clock Divider: If the USERCC2 bit in the RCC2 register is set, then the SYSDIV2 field in the RCC2 register is used as the system clock divider rather than the SYSDIV field in this register.
			#define 	RCC_USESYSDIV	22		// Value	Description
												// 0		The system clock is used undivided.
												// 1		The system clock divider is the source for the system clock. The system clock divider is forced to be used when the PLL is selected as the source.
			
// reserved	#define 	BIT21			21		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			
			// Enable PWM Clock Divisor
												// Enable PWM Clock Divisor: Note that when the PWM divisor is used, it is applied to the clock for both PWM modules.
			#define 	RCC_USEPWMDIV	20		// Value	Description
												// 0		The system clock is the source for the PWM clock.
												// 1		The PWM clock divider is the source for the PWM clock.
			
			// PWM Unit Clock Divisor
												// PWM Unit Clock Divisor
			#define 	RCC_PWMDIV2		19		// This field specifies the binary divisor used to predivide the system clock down for use as the timing reference for the PWM module. The rising edge of this clock is synchronous with the system clock.
			#define 	RCC_PWMDIV1		18		// Value:	0x0	|	0x1	|	0x2	|	0x3	|	0x4	|	0x5	|	0x6	|	0x7			|
			#define 	RCC_PWMDIV0		17		// Divisor:	/2	|	/4	|	/8	|	/16	|	/31	|	/64	|	/64	|	/64(default)|
			
// reserved	#define 	BIT16			16		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT15			15		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT14			14		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			
			// PLL Power Down
												// PLL Power Down:
			#define 	RCC_PWRDN		13		// Value	Description
												// 0		The PLL is operating normally.
												// 1		The PLL is powered down. Care must be taken to ensure that another clock source is functioning and that the BYPASS bit is set before setting this bit.
			
// reserved	#define 	BIT12			12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			
			// PLL Bypass
												// PLL Bypass: Note: The ADC must be clocked from the PLL or directly from a 16-MHz clock source to operate properly.
			#define 	RCC_BYPASS		11		// Value	Description
												// 0		The system clock is the PLL output clock divided by the divisor specified by SYSDIV.
												// 1		The system clock is derived from the OSC source and divided by the divisor specified by SYSDIV.
			
			// Crystal Value
			#define 	RCC_XTAL4		10		// This field specifies the crystal value attached to the main oscillator. The encoding for this field is provided below. Frequencies that may be used with the USB interface are indicated in the table. To function within the clocking requirements of the USB specification, a crystal of 5, 6, 8, 10, 12, or 16 MHz must be used.
			#define 	RCC_XTAL3		9		//
			#define 	RCC_XTAL2		8		// Value										|	0x00-0x5	|	0x06		|	0x07		|	0x08		|	0x09		|	0x0A		|	0x0B		|	0x0C		|	0x0D		|	0x0E		|	0x0F		|	0x10			|	0x11			|	0x12		|	0x13		|	0x14			|	0x15			|	0x16		|	0x17			|	0x18			|	0x19			|	0x1A			|														
			#define 	RCC_XTAL1		7		// Crystal Frequency (MHz) Not Using the PLL	|	reserved	|	4 MHz		|	4.096 MHz	|	4.9152 MHz	|	5 MHz (USB)	|	5.12 MHz	|	6 MHz (USB)	|	6.144 MHz	|	7.3728 MHz	|	8 MHz (USB)	|	8.192 MHz	|	10.0 MHz (USB)	|	12.0 MHz (USB)	|	12.288 MHz	|	13.56 MHz	|	14.31818 MHz	|	16.0 MHz (USB)	|	16.384 MHz	|	18.0 MHz (USB)	|	20.0 MHz (USB)	|	24.0 MHz (USB)	|	25.0 MHz (USB)	|
			#define 	RCC_XTAL0		6		// Crystal Frequency (MHz) Using the PLL		|	reserved	|	reserved	|	reserved	|	reserved	|	5 MHz (USB)	|	5.12 MHz	|	6 MHz (USB)	|	6.144 MHz	|	7.3728 MHz	|	8 MHz (USB)	|	8.192 MHz	|	10.0 MHz (USB)	|	12.0 MHz (USB)	|	12.288 MHz	|	13.56 MHz	|	14.31818 MHz	|	16.0 MHz (USB)	|	16.384 MHz	|	18.0 MHz (USB)	|	20.0 MHz (USB)	|	24.0 MHz (USB)	|	25.0 MHz (USB)	|
			
			// Oscillator Source
												// Oscillator Source : For additional oscillator sources, see the RCC2 register.
			#define 	RCC_OSCSRC1		5		// Value:			|	0x0						|	0x1												|	0x2											|	0x3																																	
			#define 	RCC_OSCSRC0		4		// Input Source :	|	MOSC (Main oscillator)	|	PIOSC(Precision internal oscillator (default) )	|	PIOSC/4 (Precision internal oscillator / 4)	|	LFIOSC (Low-frequency internal oscillator)																																	
			
// reserved	#define 	BIT03			3		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT02			2		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT01			1		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			
			// Main Oscillator Disable
												// Main Oscillator Disable: 
			#define 	RCC_MOSCDIS		0		// Value	Description
												// 0		The main oscillator is disabled (default).
												// 1		The main oscillator is enabled.
			


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************
typedef enum  {
	READ	 	= 0,
	SET	 		= 1,
	CLEAR	 	= 2
	
} gRESC_Input_t;


typedef enum  {
	MOSC_FAILURE_RESET	 		= 16,
	WATCHDOG_TIMER_1_RESET	 	= 5,
	SOFTWARE_RESET	 			= 4,
	WATCHDOG_TIMER_0_RESET	 	= 3,
	BROWN_OUT_RESET	 			= 2,
	POWER_ON_RESET	 			= 1,
	EXTERNAL_RESET	 			= 0
	
	
} gRESC_Choice_t;


typedef enum  {
	NO_ERRORS	 	= 0,
	INVALID_INPUT	= 1,
	OCCURRED	 	= 1,
	NOT_OCCURRED	= 2
	
} gRESC_Output_t;


//*****************************************************************************
//
// Variabels .
//
//*****************************************************************************



//*****************************************************************************
//
// Functions .
//
//*****************************************************************************

gRESC_Output_t	RESCstatus (gRESC_Choice_t choice , gRESC_Input_t input);

#endif /* RCC_H_ */



