/*
 * DID1.h
 *
 *  Created on: 2019/03/06
 *      Author: Ehab Bellkasy
 */
 
#ifndef DID1_H_
#define DID1_H_


//*****************************************************************************
//
// The Description for register .
//
//*****************************************************************************

/*Register 2: Device Identification 1 (DID1), offset 0x004
This register identifies the device family, part number, temperature range, pin count, and package
type. Each microcontroller is uniquely identified by the combined values of the CLASS field in the
DID0 register and the PARTNO field in the DID1 register.*/


//*****************************************************************************
//
// The following are Definitions for the hardware register .
//
//*****************************************************************************

//SYSTEM	registers 				Address			Description
#define 	DID1_ADDRESS			0x400FE004		// Device Identification 1

//SYSTEM	registers 				Offset		Description
#define 	DID1_OFFSET				0x004		// Device Identification 1




//>>------------------>>BITS:-		Number	Description	:-
			// DID1 Version
			#define 	DID1_VER3	31		// DID1 Version:- This field defines the DID1 register format version. The version number is numeric. The value of the VER field is encoded as follows (all other encodings are reserved):
			#define 	DID1_VER2	30		// Value	Description
			#define 	DID1_VER1	29		// 0x0		Initial DID1 register format definition, indicating a Stellaris LM3Snnn device.
			#define 	DID1_VER0	28		// 0x1		Second version of the DID1 register format.
			
			// Family
			#define 	DID1_FAM3	27		// Family
			#define 	DID1_FAM2	26		// This field provides the family identification of the device within the product portfolio. The value is encoded as follows (all other encodings are reserved):
			#define 	DID1_FAM1	25		// Value	Description
			#define 	DID1_FAM0	24		// 0x0		Tiva™ C Series microcontrollers and legacy Stellaris microcontrollers, that is, all devices with external part numbers starting with TM4C, LM4F or LM3S.
			
			// Part Number
			#define 	DID1_PARTNO7	23		// Part Number:
			#define 	DID1_PARTNO6	22		// This field provides the part number of the device within the family. The
			#define 	DID1_PARTNO5	21		//reset value shown indicates the TM4C123GH6PM microcontroller.
			#define 	DID1_PARTNO4	20		// reset value [10100001]
			#define 	DID1_PARTNO3	19		//
			#define 	DID1_PARTNO2	18		//
			#define 	DID1_PARTNO1	17		//
			#define 	DID1_PARTNO0	16		//
			
			//Package Pin Count
			#define 	DID1_PINCOUNT2	15		// Package Pin Count :- This field specifies the number of pins on the device package. The value is encoded as follows (all other encodings are reserved):
			#define 	DID1_PINCOUNT1	14		// Value:-			0x0		|	0x1		|	0x2				|	0x3				|	0x4				|	0x5				|	0x6	
			#define 	DID1_PINCOUNT0	13		// Description:-	reserved|	reserved|	100-pin package	|	64-pin package	|	144-pin package	|	157-pin package	|	168-pin package
			
			// reserved
//reserved	#define 	BIT12	12		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT11	11		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT10	10		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT09	9		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
//reserved	#define 	BIT08	8		// Software should not rely on the value of a reserved bit. To provide compatibility with future products, the value of a reserved bit should be preserved across a read-modify-write operation.
			
			// Temperature Range
			#define 	DID1_TEMP2	7		// Temperature Range: This field specifies the temperature rating of the device. The value is encoded as follows (all other encodings are reserved):
			#define 	DID1_TEMP1	6		// Value		0x0		|	0x1											|	0x2											|	0x3
			#define 	DID1_TEMP0	5		// Description	Reserved|	Industrial temperature range (-40°C to 85°C)|	Extended temperature range (-40°C to 105°C)	|	Available in both industrial temperature range (-40°C to 85°C) and extended temperature range (-40°C to 105°C) devices. See “Package Information” on page 1402 for specific order numbers.
			
			// Package Type
											// Package Type: This field specifies the package type. The value is encoded as follows (all other encodings are reserved):
			#define 	DID1_PKG1	4		// Value		0x0		|	0x1			|	0x2
			#define 	DID1_PKG0	3		// Description	Reserved|	LQFP package|	BGA package
			
			// BGA package
			#define 	DID1_ROHS	2		// BGA package:- This bit specifies whether the device is RoHS-compliant. A 1 indicates the part is RoHS-compliant.
			
			// Qualification Status
										// Qualification Status: This field specifies the qualification status of the device. The value is encoded as follows (all other encodings are reserved):
			#define 	DID1_QUAL1	1		// Value		0x0								|	0x1								|	0x2
			#define 	DID1_QUAL0	0		// Description	Engineering Sample (unqualified)|	Pilot Production (unqualified)	|	Fully Qualified	

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


//*****************************************************************************
//
//  typedef's  .
//
//*****************************************************************************

typedef enum  {
	INITIAL_VERSION	 			= 0x0,
	SECOND_VERSION	 			= 0x1
	
} gDID1Version_t;

typedef enum  {
	TIVA_C_SERIES	 			= 0x0
	
} gFamily_t;

typedef enum  {
	PACKAGE_100_PIN	 			= 0x2,
	PACKAGE_64_PIN	 			= 0x3,
	PACKAGE_144_PIN	 			= 0x4,
	PACKAGE_157_PIN	 			= 0x5,
	PACKAGE_168_PIN	 			= 0x6
	
} gPackagePinCount_t;


typedef enum  {
	INDUSTRIAL_TEMPERATURE	 	= 0x1,
	EXTENDED_TEMPERATURE	 	= 0x2,
	INDUSTRIAL_EXTENDED	 		= 0x6
	
} gTemperatureRange_t;


typedef enum  {
	LQFP	 					= 0x1,
	BGA	 						= 0x2
	
} gPackageType_t;


typedef enum  {
	ENGINEERING_SAMPLE	 		= 0x0,
	PILOT_PRODUCTION	 		= 0x1,
	FULLY_QUALIFIED			 	= 0x2
	
} gQualificationStatus_t;





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

gDID1Version_t 				ReadDID1Version () ;
gFamily_t 					ReadFamily () ;
uint8_t 					ReadPartNumber () ;
gPackagePinCount_t 			ReadPackagePinCount () ;
gTemperatureRange_t 		ReadTemperatureRange () ;
gPackageType_t 				ReadPackageType () ;
uint8_t						ReadRoHS_Compliance () ;
gQualificationStatus_t		ReadQualificationStatus () ;

#endif /* DID1_H_ */