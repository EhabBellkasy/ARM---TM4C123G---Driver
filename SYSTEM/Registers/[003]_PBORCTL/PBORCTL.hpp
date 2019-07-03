/*
 * PBORCTL.h
 *
 *  Created on: 2019/03/09
 *      Author: Ehab Bellkasy
 */
 
#ifndef PBORCTL_H_
#define PBORCTL_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 3: Brown-Out Reset Control (PBORCTL), offset 0x030
This register is responsible for controlling reset conditions after initial power-on reset.
Note: The BOR voltage values and center points are based on simulation only. These values are
yet to be characterized and are subject to change.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	PBORCTL_ADDRESS			0x400FE030		// Brown-Out Reset Control

//SYSTEM	registers 				Offset		Description
#define 	PBORCTL_OFFSET			0x030		// Brown-Out Reset Control




//>>------------------>>BITS:-			Number	Description	:-
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
// reserved	#define 	BIT11			11		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT10			10		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT09			9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT08			8		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT07			7		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT06			6		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT05			5		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT04			4		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
// reserved	#define 	BIT03			3		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			// VDD under BOR0 Event Action
												// VDD under BOR0 Event Action: The VDD BOR0 trip value is 3.02V +/- 90mv.
			#define 	PBORCTL_BOR0	2		// Value	Description
												// 0		A BOR0 event causes an interrupt to be generated in the interrupt controller.
												// 1		A BOR0 event causes a reset of the microcontroller.
			
			// VDD under BOR1 Event Action
										// VDD under BOR1 Event Action: The VDD BOR1 trip value is 2.88V +/- 90mv.
			#define 	PBORCTL_BOR1	1		// Value	Description
										// 0		A BOR1 event causes an interrupt to be generated to the interrupt controller.
										// 1		A BOR1 event causes a reset of the microcontroller.
			
			// reserved
// reserved	#define 	BIT00	0		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	INTERRUPT	 		= 0x0,
	RESET	 			= 0x1
	
} gPBORCTL_EventAction_t;


typedef enum  {
	NO_ERRORS	 		= 0x0,
	INVALID_INPUT	 	= 0x1
	
} gPBORCTL_StdErr_t;

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

gPBORCTL_EventAction_t 		ReadBOR0EventAction () ;
gPBORCTL_EventAction_t 		ReadBOR1EventAction () ;
gPBORCTL_StdErr_t 			SetBOR0EventAction (gPBORCTL_EventAction_t input) ;
gPBORCTL_StdErr_t 			SetBOR1EventAction (gPBORCTL_EventAction_t input) ;

#endif /* PBORCTL_H_ */