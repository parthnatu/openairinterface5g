/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RA_Report_r16_H_
#define	_NR_RA_Report_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CGI-Info-Logging-r16.h"
#include "NR_RA-InformationCommon-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RA_Report_r16__raPurpose_r16 {
	NR_RA_Report_r16__raPurpose_r16_accessRelated	= 0,
	NR_RA_Report_r16__raPurpose_r16_beamFailureRecovery	= 1,
	NR_RA_Report_r16__raPurpose_r16_reconfigurationWithSync	= 2,
	NR_RA_Report_r16__raPurpose_r16_ulUnSynchronized	= 3,
	NR_RA_Report_r16__raPurpose_r16_schedulingRequestFailure	= 4,
	NR_RA_Report_r16__raPurpose_r16_noPUCCHResourceAvailable	= 5,
	NR_RA_Report_r16__raPurpose_r16_requestForOtherSI	= 6,
	NR_RA_Report_r16__raPurpose_r16_spare9	= 7,
	NR_RA_Report_r16__raPurpose_r16_spare8	= 8,
	NR_RA_Report_r16__raPurpose_r16_spare7	= 9,
	NR_RA_Report_r16__raPurpose_r16_spare6	= 10,
	NR_RA_Report_r16__raPurpose_r16_spare5	= 11,
	NR_RA_Report_r16__raPurpose_r16_spare4	= 12,
	NR_RA_Report_r16__raPurpose_r16_spare3	= 13,
	NR_RA_Report_r16__raPurpose_r16_spare2	= 14,
	NR_RA_Report_r16__raPurpose_r16_spare1	= 15
} e_NR_RA_Report_r16__raPurpose_r16;

/* NR_RA-Report-r16 */
typedef struct NR_RA_Report_r16 {
	NR_CGI_Info_Logging_r16_t	 cellId_r16;
	NR_RA_InformationCommon_r16_t	 ra_InformationCommon_r16;
	long	 raPurpose_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RA_Report_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_raPurpose_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RA_Report_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RA_Report_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RA_Report_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RA_Report_r16_H_ */
#include <asn_internal.h>
