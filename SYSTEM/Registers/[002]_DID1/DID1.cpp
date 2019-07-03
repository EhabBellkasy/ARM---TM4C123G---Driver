/*
 * DID1.cpp
 *
 *  Created on: 2019/03/06
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "DID1.hpp"


gDID1Version_t 				ReadDID1Version () {
	
	/// Read DID1 Version 
	/**
	 ** @brief this function will return back version number 
	 ** 	The value of the VER field is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			Initial DID1 register format definition, indicating a Stellaris LM3Snnn device.
	 ** 	0x1			Second version of the DID1 register format.
	 ** @param 		void
	 ** @return   	gDID1Version_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_VER3 , DID1_VER0) ;
	 
	
} // End of Function.

gFamily_t 					ReadFamily () {
	
	/// Read Family 
	/**
	 ** @brief this function will return back  family identification of the device 
	 ** 	The value is encoded as follows
	 ** 	Value		Description
	 ** 	0x1			Tiva™ C Series microcontrollers and legacy Stellaris microcontrollers, that is, all devices with external part numbers starting with TM4C, LM4F or LM3S.
	 ** @param 		void
	 ** @return   	gFamily_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_FAM3 , DID1_FAM0) ;
	 
	
} // End of Function.

uint8_t 					ReadPartNumber () {
	
	/// Read Part Number 
	/**
	 ** @brief this function will return back  the part number of the device. 
	 ** 	The value 0xA1 indicates the TM4C123GH6PM microcontroller.
	 ** @param 		void
	 ** @return   	uint8_t
	 */
	
	return (uint8_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_PARTNO7 , DID1_PARTNO0) ;
	
} // End of Function.

gPackagePinCount_t 			ReadPackagePinCount () {
	
	// Read Package Pin Count 
	/**
	 ** @brief this function will return back the number of pins on the device package 
	 ** 	The value is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			reserved
	 ** 	0x1			reserved
	 ** 	0x2			100-pin package
	 ** 	0x3			64-pin package
	 ** 	0x4			144-pin package
	 ** 	0x5			157-pin package
	 ** 	0x6			168-pin package			
	 ** @param 		void
	 ** @return   	gPackagePinCount_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_PINCOUNT2 , DID1_PINCOUNT0) ;
	
} // End of Function.

gTemperatureRange_t 		ReadTemperatureRange () {
	
	// Read Temperature Range 
	/**
	 ** @brief this function will return back the temperature rating of the device.  
	 ** 	The value is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			reserved
	 ** 	0x1			Industrial temperature range (-40°C to 85°C)
	 ** 	0x2			Extended temperature range (-40°C to 105°C)
	 ** 	0x3			Available in both industrial temperature range (-40°C to 85°C) , and extended temperature range (-40°C to 105°C) devices.  See “Package Information” on page 1402 for specific order numbers.
	 ** @param 		void
	 ** @return   	gTemperatureRange_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_TEMP2 , DID1_TEMP0) ;
	
} // End of Function.

gPackageType_t 				ReadPackageType () {
	
	
	// Read Package Type 
	/**
	 ** @brief this function will return back  the package type.
	 ** 	The value is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			reserved
	 ** 	0x1			LQFP package
	 ** 	0x2			BGA package		
	 ** @param 		void
	 ** @return   	gPackageType_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_PKG1 , DID1_PKG0) ;
	
} // End of Function.

uint8_t						ReadRoHS_Compliance () {
	
	/// Read RoHS-Compliance 
	/**
	 ** @brief this function will return back  whether the device is RoHS-compliant 
	 ** 	The value 0x01 indicates the part is RoHS-compliant.
	 ** @param 		void
	 ** @return   	uint8_t
	 */
	
	return (uint8_t) ( ( HW_32REG(DID1_ADDRESS) & (1<< DID1_ROHS) ) >> DID1_ROHS ) ;
	
} // End of Function.

gQualificationStatus_t		ReadQualificationStatus () {
	
	// Read Qualification Status 
	/**
	 ** @brief this function will return back the qualification status of the device.
	 ** 	The value is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			Engineering Sample (unqualified)
	 ** 	0x1			Pilot Production (unqualified)
	 ** 	0x2			Fully Qualified		
	 ** @param 		void
	 ** @return   	gQualificationStatus_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID1_ADDRESS , DID1_QUAL1 , DID1_QUAL0) ;
	
} // End of Function.

