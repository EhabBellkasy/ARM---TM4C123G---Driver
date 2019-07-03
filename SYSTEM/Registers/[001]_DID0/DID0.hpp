/*
 * DID0.h
 *
 *  Created on: 2019/03/03
 *      Author: Ehab Bellkasy
 */
 
#ifndef DID0_H_
#define DID0_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 1: Device Identification 0 (DID0), offset 0x000
This register identifies the version of the microcontroller. Each microcontroller is uniquely identified
by the combined values of the CLASS field in the DID0 register and the PARTNO field in the DID1
register. The MAJOR and MINOR bit fields indicate the die revision number. Combined, the MAJOR
and MINOR bit fields indicate the part revision number.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	DID0_ADDRESS			0x400FE000		// Device Identification 0

//SYSTEM	registers 				Offset		Description
#define 	DID0_OFFSET				0x000		// Device Identification 0




//>>------------------>>BITS:-		Number	Description	:-
//reserved	#define 	BIT31		31		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			// DID0 Version
			#define 	DID0_VER2	30		// DID0 Version : This field defines the DID0 register format version. The version number is numeric. The value of the VER field is encoded as follows (all other encodings are reserved):
			#define 	DID0_VER1	29		// Value	Description
			#define 	DID0_VER0	28		// 0x1		Second version of the DID0 register format.
			
			//reserved
//reserved	#define 	BIT27		27			//  Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT26		26			//  Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT25		25			//  Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT24		24			//  Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			// Device Class
			#define 	DID0_CLASS7	23		// 	Device Class:-
			#define 	DID0_CLASS6	22		// The CLASS field value identifies the internal design from which all mask sets are generated for all microcontrollers in a particular product line.
			#define 	DID0_CLASS5	21		// The CLASS field value is changed for new product lines, for changes in fab process (for example, a remap or shrink), or any case where the
			#define 	DID0_CLASS4	20		// MAJOR or MINOR fields require differentiation from prior microcontrollers. The value of the CLASS field is encoded as follows (all other encodings are reserved):
			#define 	DID0_CLASS3	19		// Value	Description
			#define 	DID0_CLASS2	18		// 0x05		Tiva™ TM4C123x microcontrollers.
			#define 	DID0_CLASS1	17		// ^^^
			#define 	DID0_CLASS0	16		// ^^^
			
			// Major Die Revision
			#define 	DID0_MAJOR7	15		// Major Die Revision : This field specifies the major revision number of the microcontroller.
			#define 	DID0_MAJOR6	14		// The major revision reflects changes to base layers of the design. This
			#define 	DID0_MAJOR5	13		// field is encoded as follows:
			#define 	DID0_MAJOR4	12		// Value	Description
			#define 	DID0_MAJOR3	11		// 0x0		Revision A (initial device)
			#define 	DID0_MAJOR2	10		// 0x1		Revision B (first base layer revision)
			#define 	DID0_MAJOR1	9		// 0x2		Revision C (second base layer revision)
			#define 	DID0_MAJOR0	8		// and so on...
			
			// Minor Die Revision
			#define 	DID0_MINOR7	7		// Minor Die Revision:- This field specifies the minor revision number of the microcontroller.
			#define 	DID0_MINOR6	6		// The minor revision reflects changes to the metal layers of the design. The MINOR field value is reset when the MAJOR field is changed.
			#define 	DID0_MINOR5	5		// This field is numeric and is encoded as follows:
			#define 	DID0_MINOR4	4		// Value	Description
			#define 	DID0_MINOR3	3		// 0x0		Initial device, or a major revision update.
			#define 	DID0_MINOR2	2		// 0x1		First metal layer change.
			#define 	DID0_MINOR1	1		// 0x2		Second metal layer change.
			#define 	DID0_MINOR0	0		// and so on...


//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	SECOND_VERSION	 							= 0x1
	
} gDID0Version_t;


typedef enum  {
	TIVA_TM4C123X_MICROCONTROLLERS	 			= 0x05
	
} gDeviceClass_t;


typedef enum  {
	REVISION_A__INITIAL_DEVICE	 				= 0x0,
	REVISION_B__FIRST_BASE_LAYER_REVISION	 	= 0x1,
	REVISION_C__SECOND_BASE_LAYER_REVISION	 	= 0x2
	
} gMajorDieRevision_t;



typedef enum  {
	INITIAL_DEVICE__MAJOR_REVISION_UPDATE	 	= 0x0,
	FIRST_METAL_LAYER_CHANGE	 				= 0x1,
	SECOND_METAL_LAYER_CHANGE	 				= 0x2
	
} gMinorDieRevision_t;




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

gDID0Version_t 			ReadDID0Version () ;
gDeviceClass_t 			ReadDeviceClass () ;
gMajorDieRevision_t 	ReadMajorDieRevision () ;
gMinorDieRevision_t 	ReadMinorDieRevision () ;

#endif /* DID0_H_ */