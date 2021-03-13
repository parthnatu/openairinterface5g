/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_H_
#define	_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TDD-UL-DL-SlotIndex.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR {
	NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR_NOTHING,	/* No components present */
	NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR_allDownlink_r16,
	NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR_allUplink_r16,
	NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR_explicit_r16,
	NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR_explicit_IAB_MT_r16
} NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR;

/* NR_TDD-UL-DL-SlotConfig-IAB-MT-r16 */
typedef struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16 {
	NR_TDD_UL_DL_SlotIndex_t	 slotIndex_r16;
	struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16 {
		NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16_PR present;
		union NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__NR_symbols_IAB_MT_r16_u {
			NULL_t	 allDownlink_r16;
			NULL_t	 allUplink_r16;
			struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_r16 {
				long	*nrofDownlinkSymbols_r16;	/* OPTIONAL */
				long	*nrofUplinkSymbols_r16;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *explicit_r16;
			struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_IAB_MT_r16 {
				long	*nrofDownlinkSymbols_r16;	/* OPTIONAL */
				long	*nrofUplinkSymbols_r16;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *explicit_IAB_MT_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} symbols_IAB_MT_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_H_ */
#include <asn_internal.h>
