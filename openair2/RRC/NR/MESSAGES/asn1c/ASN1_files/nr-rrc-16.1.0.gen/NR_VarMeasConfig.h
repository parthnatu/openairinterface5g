/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_VarMeasConfig_H_
#define	_NR_VarMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_VarMeasConfig__s_MeasureConfig_PR {
	NR_VarMeasConfig__s_MeasureConfig_PR_NOTHING,	/* No components present */
	NR_VarMeasConfig__s_MeasureConfig_PR_ssb_RSRP,
	NR_VarMeasConfig__s_MeasureConfig_PR_csi_RSRP
} NR_VarMeasConfig__s_MeasureConfig_PR;

/* Forward declarations */
struct NR_MeasIdToAddModList;
struct NR_MeasObjectToAddModList;
struct NR_ReportConfigToAddModList;
struct NR_QuantityConfig;

/* NR_VarMeasConfig */
typedef struct NR_VarMeasConfig {
	struct NR_MeasIdToAddModList	*measIdList;	/* OPTIONAL */
	struct NR_MeasObjectToAddModList	*measObjectList;	/* OPTIONAL */
	struct NR_ReportConfigToAddModList	*reportConfigList;	/* OPTIONAL */
	struct NR_QuantityConfig	*quantityConfig;	/* OPTIONAL */
	struct NR_VarMeasConfig__s_MeasureConfig {
		NR_VarMeasConfig__s_MeasureConfig_PR present;
		union NR_VarMeasConfig__NR_s_MeasureConfig_u {
			NR_RSRP_Range_t	 ssb_RSRP;
			NR_RSRP_Range_t	 csi_RSRP;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_MeasureConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarMeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarMeasConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasIdToAddModList.h"
#include "NR_MeasObjectToAddModList.h"
#include "NR_ReportConfigToAddModList.h"
#include "NR_QuantityConfig.h"

#endif	/* _NR_VarMeasConfig_H_ */
#include <asn_internal.h>
