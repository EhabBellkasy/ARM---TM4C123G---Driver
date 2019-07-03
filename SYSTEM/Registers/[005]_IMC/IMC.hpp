/*
 * IMC.h
 *
 *  Created on: 2019/03/09
 *      Author: Ehab Bellkasy
 */
 
#ifndef IMC_H_
#define IMC_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 5: Interrupt Mask Control (IMC), offset 0x054
This register contains the mask bits for system control raw interrupts. A raw interrupt, indicated by
a bit being set in the Raw Interrupt Status (RIS) register, is sent to the interrupt controller if the
corresponding bit in this register is set.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	IMC_ADDRESS				0x400FE054		// Interrupt Mask Control

//SYSTEM	registers 				Offset		Description
#define 	IMC_OFFSET				0x054		// Interrupt Mask Control




//>>------------------>>BITS:-			Number	Description	
			
			// reserved
// reserved	#define 	BIT31			31		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT30			30		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT29			29		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT28			28		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT27			27		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT26			26		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT25			25		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT24			24		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT23			23		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT22			22		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT21			21		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT20			20		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT19			19		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT18			18		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT17			17		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT16			16		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT15			15		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT14			14		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT13			13		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT12			12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//VDD under BOR0 Interrupt Mask
												//VDD under BOR0 Interrupt Mask:
			#define 	IMC_BOR0IM		11		// Value	Description
												// 0		The BOR0RIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the BOR0RIS bit in the RIS register is set.
			
			//VDDA Power OK Interrupt Mask
												// VDDA Power OK Interrupt Mask
			#define 	IMC_VDDAIM		10		// Value	Description
												// 0		The VDDARIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the VDDARIS bit in the RIS register is set.
			
// reserved	#define 	BIT09			9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//MOSC Power Up Interrupt Mask
												// MOSC Power Up Interrupt Mask
			#define 	IMC_MOSCPUPIM	8		// Value	Description
												// 0		The MOSCPUPRIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the MOSCPUPRIS bit in the RIS register is set.
			
			//USB PLL Lock Interrupt Mask
												// USB PLL Lock Interrupt Mask
			#define 	IMC_USBPLLLIM	7		// Value	Description
												// 0		The USBPLLLRIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the USBPLLLRIS bit in the RIS register is set.
			
			//PLL Lock Interrupt Mask
												// PLL Lock Interrupt Mask
			#define 	IMC_PLLLIM		6		// Value	Description
												// 0		The PLLLRIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the PLLLRIS bit in the RIS register is set.
			
// reserved	#define 	BIT05			5		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT04			4		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//Main Oscillator Failure Interrupt Mask
												// Main Oscillator Failure Interrupt Mask:
			#define 	IMC_MOFIM		3		// Value	Description
												// 0		The MOFRIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the MOFRIS bit in the RIS register is set.
			
// reserved	#define 	BIT02			2		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//VDD under BOR1 Interrupt Mask
											// VDD under BOR1 Interrupt Mask
			#define 	IMC_BOR1IM		1		// Value	Description
												// 0		The BOR1RIS interrupt is suppressed and not sent to the interrupt controller.
												// 1		An interrupt is sent to the interrupt controller when the BOR1RIS bit in the RIS register is set.
			
// reserved	#define 	BIT00			0		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	DISABLE	 	= 0x0,
	ENABLE	 	= 0x1
	
} gIMC_Status_t;

typedef enum  {
	NO_ERRORS	 		= 0x0,
	INVALID_INPUT	 	= 0x1
	
} gIMC_StdErr_t;


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

gIMC_Status_t	ReadBOR0IM () ;
gIMC_Status_t	ReadVDDAIM () ;
gIMC_Status_t	ReadMOSCPUPIM () ;
gIMC_Status_t	ReadUSBPLLLIM () ;
gIMC_Status_t	ReadPLLLIM () ;
gIMC_Status_t	ReadMOFIM () ;
gIMC_Status_t	ReadBOR1IM () ;


gIMC_StdErr_t	SetBOR0IM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetVDDAIM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetMOSCPUPIM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetUSBPLLLIM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetPLLLIM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetMOFIM (gIMC_Status_t input) ;
gIMC_StdErr_t	SetBOR1IM (gIMC_Status_t input) ;

#endif /* IMC_H_ */


