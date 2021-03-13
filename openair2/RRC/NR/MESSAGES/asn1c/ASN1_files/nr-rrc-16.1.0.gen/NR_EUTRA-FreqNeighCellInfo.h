/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_EUTRA_FreqNeighCellInfo_H_
#define	_NR_EUTRA_FreqNeighCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_EUTRA-PhysCellId.h"
#include "NR_EUTRA-Q-OffsetRange.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_EUTRA-FreqNeighCellInfo */
typedef struct NR_EUTRA_FreqNeighCellInfo {
	NR_EUTRA_PhysCellId_t	 physCellId;
	NR_EUTRA_Q_OffsetRange_t	 dummy;
	long	*q_RxLevMinOffsetCell;	/* OPTIONAL */
	long	*q_QualMinOffsetCell;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EUTRA_FreqNeighCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_FreqNeighCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_EUTRA_FreqNeighCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EUTRA_FreqNeighCellInfo_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_EUTRA_FreqNeighCellInfo_H_ */
#include <asn_internal.h>
