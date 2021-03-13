/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_AffectedCarrierFreqCombInfoMRDC_H_
#define	_NR_AffectedCarrierFreqCombInfoMRDC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_VictimSystemType.h"
#include <NativeEnumerated.h>
#include "NR_AffectedCarrierFreqCombNR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC {
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_eutra_nr	= 0,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_nr	= 1,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_other	= 2,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_utra_nr_other	= 3,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_nr_other	= 4,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_spare3	= 5,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_spare2	= 6,
	NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC_spare1	= 7
} e_NR_AffectedCarrierFreqCombInfoMRDC__interferenceDirectionMRDC;

/* Forward declarations */
struct NR_AffectedCarrierFreqCombEUTRA;

/* NR_AffectedCarrierFreqCombInfoMRDC */
typedef struct NR_AffectedCarrierFreqCombInfoMRDC {
	NR_VictimSystemType_t	 victimSystemType;
	long	 interferenceDirectionMRDC;
	struct NR_AffectedCarrierFreqCombInfoMRDC__affectedCarrierFreqCombMRDC {
		struct NR_AffectedCarrierFreqCombEUTRA	*affectedCarrierFreqCombEUTRA;	/* OPTIONAL */
		NR_AffectedCarrierFreqCombNR_t	 affectedCarrierFreqCombNR;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *affectedCarrierFreqCombMRDC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_AffectedCarrierFreqCombInfoMRDC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interferenceDirectionMRDC_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_AffectedCarrierFreqCombInfoMRDC;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_AffectedCarrierFreqCombInfoMRDC_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_AffectedCarrierFreqCombInfoMRDC_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_AffectedCarrierFreqCombEUTRA.h"

#endif	/* _NR_AffectedCarrierFreqCombInfoMRDC_H_ */
#include <asn_internal.h>
