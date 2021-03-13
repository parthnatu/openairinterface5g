/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RedirectedCarrierInfo_EUTRA_H_
#define	_NR_RedirectedCarrierInfo_EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RedirectedCarrierInfo_EUTRA__cnType {
	NR_RedirectedCarrierInfo_EUTRA__cnType_epc	= 0,
	NR_RedirectedCarrierInfo_EUTRA__cnType_fiveGC	= 1
} e_NR_RedirectedCarrierInfo_EUTRA__cnType;

/* NR_RedirectedCarrierInfo-EUTRA */
typedef struct NR_RedirectedCarrierInfo_EUTRA {
	NR_ARFCN_ValueEUTRA_t	 eutraFrequency;
	long	*cnType;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RedirectedCarrierInfo_EUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cnType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RedirectedCarrierInfo_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RedirectedCarrierInfo_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RedirectedCarrierInfo_EUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RedirectedCarrierInfo_EUTRA_H_ */
#include <asn_internal.h>
