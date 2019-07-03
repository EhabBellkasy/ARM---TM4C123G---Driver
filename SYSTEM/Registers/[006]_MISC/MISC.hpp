/*
 * MISC.h
 *
 *  Created on: 2019/03/09
 *      Author: Ehab Bellkasy
 */
 
#ifndef MISC_H_
#define MISC_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 6: Masked Interrupt Status and Clear (MISC), offset 0x058
On a read, this register gives the current masked status value of the corresponding interrupt in the
Raw Interrupt Status (RIS) register. All of the bits are RW1C, thus writing a 1 to a bit clears the
corresponding raw interrupt bit in the RIS register (see page 244).*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	MISC_ADDRESS			0x400FE058		// Masked Interrupt Status and Clear

//SYSTEM	registers 				Offset		Description
#define 	MISC_OFFSET				0x058		// Masked Interrupt Status and Clear




//>>------------------>>BITS:-				Number	Description	
						
			// reserved
// reserved	#define 	BIT31				31		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT30				30		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT29				29		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT28				28		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT27				27		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT26				26		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT25				25		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT24				24		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT23				23		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT22				22		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT21				21		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT20				20		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT19				19		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT18				18		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT17				17		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT16				16		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT15				15		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT14				14		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT13				13		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT12				12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			//VDD under BOR0 Masked Interrupt Status
													// VDD under BOR0 Masked Interrupt Status
			#define 	MISC_BOR0MIS		11		// Value	Description
													// 0		When read, a 0 indicates that a BOR0 condition has not occurred.
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because of a BOR0 condition
													//			Writing a 1 to this bit clears it and also the BOR0RIS bit in the RIS register.
			
			//VDDA Power OK Masked Interrupt Status
													// VDDA Power OK Masked Interrupt Status
			#define 	MISC_VDDAMIS		10		// Value	Description
													// 0		When read, a 0 indicates that VDDA power is good. 
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because VDDA was below the proper functioning voltage.
													//			Writing a 1 to this bit clears it and also the VDDARIS bit in the RIS register
			
			// reserved
// reserved	#define 	BIT09				9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			//MOSC Power Up Masked Interrupt Status
													// MOSC Power Up Masked Interrupt Status
			#define 	MISC_MOSCPUPMIS		8		// Value	Description
													// 0		When read, a 0 indicates that sufficient time has not passed for the MOSC PLL to lock.
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the MOSC PLL to lock.
													//			Writing a 1 to this bit clears it and also the MOSCPUPRIS bit in the RIS register.
			
			// USB PLL Lock Masked Interrupt Status
													// USB PLL Lock Masked Interrupt Status :
			#define 	MISC_USBPLLLMIS		7		// Value	Description
													// 0		When read, a 0 indicates that sufficient time has not passed for the USB PLL to lock.
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the USB PLL to lock.
													//			Writing a 1 to this bit clears it and also the USBPLLLRIS bit in the RIS register.
											
			// PLL Lock Masked Interrupt Status
													// PLL Lock Masked Interrupt Status:
			#define 	MISC_PLLLMIS		6		// Value	Description
													// 0		When read, a 0 indicates that sufficient time has not passed for the PLL to lock.
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the PLL to lock.
													//			Writing a 1 to this bit clears it and also the PLLLRIS bit in the RIS register.
											
											
			// reserved			
// reserved	#define 	BIT05				5		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT04				4		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			
			// Main Oscillator Failure Masked Interrupt Status
													// Main Oscillator Failure Masked Interrupt Status:
			#define 	MISC_MOFMIS			3		// Value	Description
													// 0		When read, a 0 indicates that the main oscillator has not failed. 
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because the main oscillator failed.
													//			Writing a 1 to this bit clears it and also the MOFRIS bit in the RIS register.
											
											
			// reserved			
// reserved	#define 	BIT02				2		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			// VDD under BOR1 Masked Interrupt Status
													// VDD under BOR1 Masked Interrupt Status:
			#define 	MISC_BOR1MIS		1		// Value	Description
													// 0		When read, a 0 indicates that a BOR1 condition has not occurred.
													//			A write of 0 has no effect on the state of this bit.
													// 1		When read, a 1 indicates that an unmasked interrupt was signaled because of a BOR1 condition.
													//			Writing a 1 to this bit clears it and also the BOR1RIS bit in the RIS register.
											
			// reserved			
// reserved	#define 	BIT00				0		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.

			
			
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	DISABLE	 		= 0x0,
	ENABLE	 		= 0x1
	
} gMISC_Status_t;

typedef enum  {
	NO_EFFECT	 	= 0x0,
	CLEAR	 		= 0x1
	
} gMISC_Input_t;

typedef enum  {
	NO_ERRORS	 	= 0x0,
	INVALID_INPUT	= 0x1
	
} gMISC_StdErr_t;


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

gMISC_Status_t	ReadBOR0MIS () ;
gMISC_Status_t	ReadVDDAMIS () ;
gMISC_Status_t	ReadMOSCPUPMIS () ;
gMISC_Status_t	ReadUSBPLLLMIS () ;
gMISC_Status_t	ReadPLLLMIS () ;
gMISC_Status_t	ReadMOFMIS () ;
gMISC_Status_t	ReadBOR1MIS () ;


gMISC_StdErr_t	ClearBOR0MIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearVDDAMIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearMOSCPUPMIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearUSBPLLLMIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearPLLLMIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearMOFMIS (gMISC_Input_t input) ;
gMISC_StdErr_t	ClearBOR1MIS (gMISC_Input_t input) ;

#endif /* MISC_H_ */


