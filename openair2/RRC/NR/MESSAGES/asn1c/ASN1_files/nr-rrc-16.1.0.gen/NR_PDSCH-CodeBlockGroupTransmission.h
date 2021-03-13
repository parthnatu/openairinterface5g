/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PDSCH_CodeBlockGroupTransmission_H_
#define	_NR_PDSCH_CodeBlockGroupTransmission_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock {
	NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n2	= 0,
	NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n4	= 1,
	NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n6	= 2,
	NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n8	= 3
} e_NR_PDSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock;

/* NR_PDSCH-CodeBlockGroupTransmission */
typedef struct NR_PDSCH_CodeBlockGroupTransmission {
	long	 maxCodeBlockGroupsPerTransportBlock;
	BOOLEAN_t	 codeBlockGroupFlushIndicator;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PDSCH_CodeBlockGroupTransmission_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxCodeBlockGroupsPerTransportBlock_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PDSCH_CodeBlockGroupTransmission;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PDSCH_CodeBlockGroupTransmission_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PDSCH_CodeBlockGroupTransmission_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PDSCH_CodeBlockGroupTransmission_H_ */
#include <asn_internal.h>
