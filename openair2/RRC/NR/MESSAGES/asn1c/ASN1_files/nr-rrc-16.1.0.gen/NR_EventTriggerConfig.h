/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_EventTriggerConfig_H_
#define	_NR_EventTriggerConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_NR-RS-Type.h"
#include "NR_ReportInterval.h"
#include <NativeEnumerated.h>
#include "NR_MeasReportQuantity.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "NR_MeasTriggerQuantity.h"
#include "NR_Hysteresis.h"
#include "NR_TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include "NR_MeasTriggerQuantityOffset.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_EventTriggerConfig__eventId_PR {
	NR_EventTriggerConfig__eventId_PR_NOTHING,	/* No components present */
	NR_EventTriggerConfig__eventId_PR_eventA1,
	NR_EventTriggerConfig__eventId_PR_eventA2,
	NR_EventTriggerConfig__eventId_PR_eventA3,
	NR_EventTriggerConfig__eventId_PR_eventA4,
	NR_EventTriggerConfig__eventId_PR_eventA5,
	NR_EventTriggerConfig__eventId_PR_eventA6
	/* Extensions may appear below */
	
} NR_EventTriggerConfig__eventId_PR;
typedef enum NR_EventTriggerConfig__reportAmount {
	NR_EventTriggerConfig__reportAmount_r1	= 0,
	NR_EventTriggerConfig__reportAmount_r2	= 1,
	NR_EventTriggerConfig__reportAmount_r4	= 2,
	NR_EventTriggerConfig__reportAmount_r8	= 3,
	NR_EventTriggerConfig__reportAmount_r16	= 4,
	NR_EventTriggerConfig__reportAmount_r32	= 5,
	NR_EventTriggerConfig__reportAmount_r64	= 6,
	NR_EventTriggerConfig__reportAmount_infinity	= 7
} e_NR_EventTriggerConfig__reportAmount;
typedef enum NR_EventTriggerConfig__reportAddNeighMeas {
	NR_EventTriggerConfig__reportAddNeighMeas_setup	= 0
} e_NR_EventTriggerConfig__reportAddNeighMeas;
typedef enum NR_EventTriggerConfig__ext1__includeCommonLocationInfo_r16 {
	NR_EventTriggerConfig__ext1__includeCommonLocationInfo_r16_true	= 0
} e_NR_EventTriggerConfig__ext1__includeCommonLocationInfo_r16;

/* Forward declarations */
struct NR_MeasReportQuantity;
struct NR_MeasRSSI_ReportConfig_r16;
struct NR_SetupRelease_BT_NameList_r16;
struct NR_SetupRelease_WLAN_NameList_r16;
struct NR_SetupRelease_Sensor_NameList_r16;

/* NR_EventTriggerConfig */
typedef struct NR_EventTriggerConfig {
	struct NR_EventTriggerConfig__eventId {
		NR_EventTriggerConfig__eventId_PR present;
		union NR_EventTriggerConfig__NR_eventId_u {
			struct NR_EventTriggerConfig__eventId__eventA1 {
				NR_MeasTriggerQuantity_t	 a1_Threshold;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA1;
			struct NR_EventTriggerConfig__eventId__eventA2 {
				NR_MeasTriggerQuantity_t	 a2_Threshold;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA2;
			struct NR_EventTriggerConfig__eventId__eventA3 {
				NR_MeasTriggerQuantityOffset_t	 a3_Offset;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA3;
			struct NR_EventTriggerConfig__eventId__eventA4 {
				NR_MeasTriggerQuantity_t	 a4_Threshold;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA4;
			struct NR_EventTriggerConfig__eventId__eventA5 {
				NR_MeasTriggerQuantity_t	 a5_Threshold1;
				NR_MeasTriggerQuantity_t	 a5_Threshold2;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA5;
			struct NR_EventTriggerConfig__eventId__eventA6 {
				NR_MeasTriggerQuantityOffset_t	 a6_Offset;
				BOOLEAN_t	 reportOnLeave;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA6;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} eventId;
	NR_NR_RS_Type_t	 rsType;
	NR_ReportInterval_t	 reportInterval;
	long	 reportAmount;
	NR_MeasReportQuantity_t	 reportQuantityCell;
	long	 maxReportCells;
	struct NR_MeasReportQuantity	*reportQuantityRS_Indexes;	/* OPTIONAL */
	long	*maxNrofRS_IndexesToReport;	/* OPTIONAL */
	BOOLEAN_t	 includeBeamMeasurements;
	long	*reportAddNeighMeas;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_EventTriggerConfig__ext1 {
		struct NR_MeasRSSI_ReportConfig_r16	*measRSSI_ReportConfig_r16;	/* OPTIONAL */
		BOOLEAN_t	*useT312_r16;	/* OPTIONAL */
		long	*includeCommonLocationInfo_r16;	/* OPTIONAL */
		struct NR_SetupRelease_BT_NameList_r16	*includeBT_Meas_r16;	/* OPTIONAL */
		struct NR_SetupRelease_WLAN_NameList_r16	*includeWLAN_Meas_r16;	/* OPTIONAL */
		struct NR_SetupRelease_Sensor_NameList_r16	*includeSensor_Meas_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EventTriggerConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportAmount_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportAddNeighMeas_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_includeCommonLocationInfo_r16_61;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_EventTriggerConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_EventTriggerConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EventTriggerConfig_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasReportQuantity.h"
#include "NR_MeasRSSI-ReportConfig-r16.h"
#include "NR_SetupRelease.h"

#endif	/* _NR_EventTriggerConfig_H_ */
#include <asn_internal.h>
