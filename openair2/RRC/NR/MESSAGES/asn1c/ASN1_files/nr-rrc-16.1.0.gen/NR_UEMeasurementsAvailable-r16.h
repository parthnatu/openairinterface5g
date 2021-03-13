/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UEMeasurementsAvailable_r16_H_
#define	_NR_UEMeasurementsAvailable_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UEMeasurementsAvailable_r16__logMeasAvailable_r16 {
	NR_UEMeasurementsAvailable_r16__logMeasAvailable_r16_true	= 0
} e_NR_UEMeasurementsAvailable_r16__logMeasAvailable_r16;
typedef enum NR_UEMeasurementsAvailable_r16__logMeasAvailableBT_r16 {
	NR_UEMeasurementsAvailable_r16__logMeasAvailableBT_r16_true	= 0
} e_NR_UEMeasurementsAvailable_r16__logMeasAvailableBT_r16;
typedef enum NR_UEMeasurementsAvailable_r16__logMeasAvailableWLAN_r16 {
	NR_UEMeasurementsAvailable_r16__logMeasAvailableWLAN_r16_true	= 0
} e_NR_UEMeasurementsAvailable_r16__logMeasAvailableWLAN_r16;
typedef enum NR_UEMeasurementsAvailable_r16__connEstFailInfoAvailable_r16 {
	NR_UEMeasurementsAvailable_r16__connEstFailInfoAvailable_r16_true	= 0
} e_NR_UEMeasurementsAvailable_r16__connEstFailInfoAvailable_r16;
typedef enum NR_UEMeasurementsAvailable_r16__rlf_InfoAvailable_r16 {
	NR_UEMeasurementsAvailable_r16__rlf_InfoAvailable_r16_true	= 0
} e_NR_UEMeasurementsAvailable_r16__rlf_InfoAvailable_r16;

/* NR_UEMeasurementsAvailable-r16 */
typedef struct NR_UEMeasurementsAvailable_r16 {
	long	*logMeasAvailable_r16;	/* OPTIONAL */
	long	*logMeasAvailableBT_r16;	/* OPTIONAL */
	long	*logMeasAvailableWLAN_r16;	/* OPTIONAL */
	long	*connEstFailInfoAvailable_r16;	/* OPTIONAL */
	long	*rlf_InfoAvailable_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UEMeasurementsAvailable_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_logMeasAvailable_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_logMeasAvailableBT_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_logMeasAvailableWLAN_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_connEstFailInfoAvailable_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rlf_InfoAvailable_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UEMeasurementsAvailable_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UEMeasurementsAvailable_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UEMeasurementsAvailable_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UEMeasurementsAvailable_r16_H_ */
#include <asn_internal.h>
