/*
 * RESC.h
 *
 *  Created on: 2019/03/13
 *      Author: Ehab Bellkasy
 */
 
#ifndef RESC_H_
#define RESC_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 7: Reset Cause (RESC), offset 0x05C
This register is set with the reset cause after reset. The bits in this register are sticky and maintain
their state across multiple reset sequences, except when an power-on reset is the cause, in which
case, all bits other than POR in the RESC register are cleared.*/

//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	RESC_ADDRESS			0x400FE05C		// Reset Cause

//SYSTEM	registers 				Offset		Description
#define 	RESC_OFFSET				0x05C		// Reset Cause




//>>------------------>>BITS:-				Number	Description	
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
			
			// MOSC Failure Reset
												// MOSC Failure Reset
			#define 	RESC_MOSCFAIL	16		// Value	Description
												// 0		When read, this bit indicates that a MOSC failure has not generated a reset since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that the MOSC circuit was enabled for clock validation and failed while the MOSCIM bit in the MOSCCTL register is clear, generating a reset event.
			
			// reserved
// reserved	#define 	BIT15			15		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT14			14		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT13			13		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT12			12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT11			11		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT10			10		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT09			9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT08			8		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT07			7		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT06			6		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			// Watchdog Timer 1 Reset
												// Watchdog Timer 1 Reset:
			#define 	RESC_WDT1		5		// Value	Description
												// 0		When read, this bit indicates that Watchdog Timer 1 has not generated a reset since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that Watchdog Timer 1 timed out and generated a reset.
			
			
			// Software Reset
												// Software Reset:
			#define 	RESC_SW			4		// Value	Description
												// 0		When read, this bit indicates that a software reset has not generated a reset since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that a software reset has caused a reset event.
			
			// Watchdog Timer 0 Reset
												// Watchdog Timer 0 Reset:
			#define 	RESC_WDT0		3		// Value	Description
												// 0		When read, this bit indicates that Watchdog Timer 0 has not generated a reset since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that Watchdog Timer 0 timed out and generated a reset.
			
			
			// Brown-Out Reset
												// Brown-Out Reset:
			#define 	RESC_BOR		2		// Value	Description
												// 0		When read, this bit indicates that a brown-out (BOR0 or BOR1) reset has not generated a reset since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that a brown-out (BOR0 or BOR1) reset has caused a reset event.
			
			
			// Power-On Reset
												// Power-On Reset:
			#define 	RESC_POR		1		// Value	Description
												// 0		When read, this bit indicates that a power-on reset has not generated a reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that a power-on reset has caused a reset event.
			
			
			// External Reset
												// External Reset:
			#define 	RESC_EXT		0		// Value	Description
												// 0		When read, this bit indicates that an external reset (RST assertion) has not caused a reset event since the previous power-on reset.
												//			Writing a 0 to this bit clears it.
												// 1		When read, this bit indicates that an external reset (RST assertion) has caused a reset event.
			

						
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

#endif /* RESC_H_ */



