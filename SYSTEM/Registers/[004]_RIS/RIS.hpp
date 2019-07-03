/*
 * RIS.h
 *
 *  Created on: 2019/03/09
 *      Author: Ehab Bellkasy
 */
 
#ifndef RIS_H_
#define RIS_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************
/*Register 4: Raw Interrupt Status (RIS), offset 0x050
This register indicates the status for system control raw interrupts. An interrupt is sent to the interrupt
controller if the corresponding bit in the Interrupt Mask Control (IMC) register is set. Writing a 1
to the corresponding bit in the Masked Interrupt Status and Clear (MISC) register clears an interrupt
status bit.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	RIS_ADDRESS				0x400FE050		// Raw Interrupt Status

//SYSTEM	registers 				Offset		Description
#define 	RIS_OFFSET				0x050		// Raw Interrupt Status




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
// reserved #define 	BIT12			12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//VDD under BOR0 Raw Interrupt Status
												// VDD under BOR0 Raw Interrupt Status: Note the BOR0 bit in the PBORCTL register must be cleared to cause an interrupt due to a BOR0 Event. This bit is cleared by writing a 1 to the BOR0MIS bit in the MISC register.
			#define 	RIS_BOR0RIS		11		// Value	Description
												// 0		A VDD BOR0 condition is not currently active.
												// 1		A VDD BOR0 condition is currently active.
			
			//VDDA Power OK Event Raw Interrupt Status
												// VDDA Power OK Event Raw Interrupt Status: This bit is cleared by writing a 1 to the VDDAMIS bit in the MISC register.
			#define 	RIS_VDDARIS		10		// Value	Description
												// 0		VDDA power is not at its appropriate functional voltage.
												// 1		VDDA is at an appropriate functional voltage.
			
			// reserved
// reserved	#define 	BIT09	9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//MOSC Power Up Raw Interrupt Status
												// MOSC Power Up Raw Interrupt Status: This bit is cleared by writing a 1 to the MOSCPUPMIS bit in the MISC register.
			#define 	RIS_MOSCPUPRIS	8		// Value	Description
												// 0		Sufficient time has not passed for the MOSC to reach the expected frequency.
												// 1		Sufficient time has passed for the MOSC to reach the expected frequency. The value for this power-up time is indicated by T MOSC_START.
			
			// USB PLL Lock Raw Interrupt Status
												// USB PLL Lock Raw Interrupt Status: This bit is cleared by writing a 1 to the USBPLLLMIS bit in the MISC register.
			#define 	RIS_USBPLLLRIS	7		// Value	Description
												// 0		The USB PLL timer has not reached T READY.
												// 1		The USB PLL timer has reached T READY indicating that sufficient time has passed for the USB PLL to lock
			
			// PLL Lock Raw Interrupt Status
												//PLL Lock Raw Interrupt Status:This bit is cleared by writing a 1 to the PLLLMIS bit in the MISC register.
			#define 	RIS_PLLLRIS		6		// Value	Description
												// 0		The PLL timer has not reached T_READY.
												// 1		The PLL timer has reached T_READY indicating that sufficient time has passed for the PLL to lock.
			
			// reserved
// reserved	#define 	BIT05			5		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT04			4		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//Main Oscillator Failure Raw Interrupt Status
												//Main Oscillator Failure Raw Interrupt Status:This bit is cleared by writing a 1 to the MOFMIS bit in the MISC register.
			#define 	RIS_MOFRIS		3		// Value	Description
												// 0		The main oscillator has not failed.
												// 1		The MOSCIM bit in the MOSCCTL register is set and the main oscillator has failed.
			
			// reserved
// reserved	#define 	BIT02			2		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			//VDD under BOR1 Raw Interrupt Status
												//VDD under BOR1 Raw Interrupt Status:Note the BOR1 bit in the PBORCTL register must be cleared to cause an interrupt due to a BOR1 Event. This bit is cleared by writing a 1 to the BOR1MIS bit in the MISC register.
			#define 	RIS_BOR1RIS		1		// Value	Description
												// 0		A VDDS BOR1 condition is not currently active.
												// 1		A VDDS BOR1 condition is currently active.
			
			// reserved
// reserved	#define 	BIT00			0		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	NOT_ACTIVE	 	= 0x0,
	ACTIVE	 		= 0x1
	
} gRIS_Status_t;



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

gRIS_Status_t	ReadBOR0RIS () ;
gRIS_Status_t	ReadVDDARIS () ;
gRIS_Status_t	ReadMOSCPUPRIS () ;
gRIS_Status_t	ReadUSBPLLLRIS () ;
gRIS_Status_t	ReadPLLLRIS () ;
gRIS_Status_t	ReadMOFRIS () ;
gRIS_Status_t	ReadBOR1RIS () ;

#endif /* RIS_H_ */


