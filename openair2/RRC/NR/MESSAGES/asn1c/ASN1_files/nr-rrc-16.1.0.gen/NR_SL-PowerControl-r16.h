/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_PowerControl_r16_H_
#define	_NR_SL_PowerControl_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16 {
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha0	= 0,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha04	= 1,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha05	= 2,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha06	= 3,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha07	= 4,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha08	= 5,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha09	= 6,
	NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16_alpha1	= 7
} e_NR_SL_PowerControl_r16__sl_Alpha_PSSCH_PSCCH_r16;
typedef enum NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16 {
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha0	= 0,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha04	= 1,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha05	= 2,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha06	= 3,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha07	= 4,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha08	= 5,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha09	= 6,
	NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16_alpha1	= 7
} e_NR_SL_PowerControl_r16__dl_Alpha_PSSCH_PSCCH_r16;
typedef enum NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16 {
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha0	= 0,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha04	= 1,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha05	= 2,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha06	= 3,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha07	= 4,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha08	= 5,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha09	= 6,
	NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16_alpha1	= 7
} e_NR_SL_PowerControl_r16__dl_Alpha_PSFCH_r16;

/* NR_SL-PowerControl-r16 */
typedef struct NR_SL_PowerControl_r16 {
	long	 sl_MaxTransPower_r16;
	long	*sl_Alpha_PSSCH_PSCCH_r16;	/* OPTIONAL */
	long	*dl_Alpha_PSSCH_PSCCH_r16;	/* OPTIONAL */
	long	*sl_P0_PSSCH_PSCCH_r16;	/* OPTIONAL */
	long	*dl_P0_PSSCH_PSCCH_r16;	/* OPTIONAL */
	long	*dl_Alpha_PSFCH_r16;	/* OPTIONAL */
	long	*dl_P0_PSFCH_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PowerControl_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_Alpha_PSFCH_r16_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PowerControl_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PowerControl_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PowerControl_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PowerControl_r16_H_ */
#include <asn_internal.h>
