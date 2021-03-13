/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_EUTRA_ParametersXDD_Diff_H_
#define	_NR_EUTRA_ParametersXDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_EUTRA_ParametersXDD_Diff__rsrqMeasWidebandEUTRA {
	NR_EUTRA_ParametersXDD_Diff__rsrqMeasWidebandEUTRA_supported	= 0
} e_NR_EUTRA_ParametersXDD_Diff__rsrqMeasWidebandEUTRA;

/* NR_EUTRA-ParametersXDD-Diff */
typedef struct NR_EUTRA_ParametersXDD_Diff {
	long	*rsrqMeasWidebandEUTRA;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_EUTRA_ParametersXDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rsrqMeasWidebandEUTRA_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_ParametersXDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_EUTRA_ParametersXDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_EUTRA_ParametersXDD_Diff_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_EUTRA_ParametersXDD_Diff_H_ */
#include <asn_internal.h>
