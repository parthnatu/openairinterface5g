/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_RadioBearerConfig_r16_H_
#define	_NR_SL_RadioBearerConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SLRB-Uu-ConfigIndex-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_RadioBearerConfig_r16__sl_TransRange_r16 {
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m20	= 0,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m50	= 1,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m80	= 2,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m100	= 3,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m120	= 4,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m150	= 5,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m180	= 6,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m200	= 7,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m220	= 8,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m250	= 9,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m270	= 10,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m300	= 11,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m350	= 12,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m370	= 13,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m400	= 14,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m420	= 15,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m450	= 16,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m480	= 17,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m500	= 18,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m550	= 19,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m600	= 20,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m700	= 21,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_m1000	= 22,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare9	= 23,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare8	= 24,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare7	= 25,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare6	= 26,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare5	= 27,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare4	= 28,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare3	= 29,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare2	= 30,
	NR_SL_RadioBearerConfig_r16__sl_TransRange_r16_spare1	= 31
} e_NR_SL_RadioBearerConfig_r16__sl_TransRange_r16;

/* Forward declarations */
struct NR_SL_SDAP_Config_r16;
struct NR_SL_PDCP_Config_r16;

/* NR_SL-RadioBearerConfig-r16 */
typedef struct NR_SL_RadioBearerConfig_r16 {
	NR_SLRB_Uu_ConfigIndex_r16_t	 slrb_Uu_ConfigIndex_r16;
	struct NR_SL_SDAP_Config_r16	*sl_SDAP_Config_r16;	/* OPTIONAL */
	struct NR_SL_PDCP_Config_r16	*sl_PDCP_Config_r16;	/* OPTIONAL */
	long	*sl_TransRange_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_RadioBearerConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_TransRange_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_RadioBearerConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_RadioBearerConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_RadioBearerConfig_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-SDAP-Config-r16.h"
#include "NR_SL-PDCP-Config-r16.h"

#endif	/* _NR_SL_RadioBearerConfig_r16_H_ */
#include <asn_internal.h>
