/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SlotFormatIndicator_H_
#define	_NR_SlotFormatIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RNTI-Value.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_ServCellIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SlotFormatCombinationsPerCell;
struct NR_AvailableRB_SetsPerCell_r16;
struct NR_SearchSpaceSwitchTrigger_r16;
struct NR_CO_DurationsPerCell_r16;

/* NR_SlotFormatIndicator */
typedef struct NR_SlotFormatIndicator {
	NR_RNTI_Value_t	 sfi_RNTI;
	long	 dci_PayloadSize;
	struct NR_SlotFormatIndicator__slotFormatCombToAddModList {
		A_SEQUENCE_OF(struct NR_SlotFormatCombinationsPerCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *slotFormatCombToAddModList;
	struct NR_SlotFormatIndicator__slotFormatCombToReleaseList {
		A_SEQUENCE_OF(NR_ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *slotFormatCombToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SlotFormatIndicator__ext1 {
		struct NR_SlotFormatIndicator__ext1__availableRB_SetsToAddModList_r16 {
			A_SEQUENCE_OF(struct NR_AvailableRB_SetsPerCell_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *availableRB_SetsToAddModList_r16;
		struct NR_SlotFormatIndicator__ext1__availableRB_SetsToRelease_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *availableRB_SetsToRelease_r16;
		struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToAddModList_r16 {
			A_SEQUENCE_OF(struct NR_SearchSpaceSwitchTrigger_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *searchSpaceSwitchTriggerToAddModList_r16;
		struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToReleaseList_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *searchSpaceSwitchTriggerToReleaseList_r16;
		struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToAddModList_r16 {
			A_SEQUENCE_OF(struct NR_CO_DurationsPerCell_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *co_DurationsPerCellToAddModList_r16;
		struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToReleaseList_r16 {
			A_SEQUENCE_OF(NR_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *co_DurationsPerCellToReleaseList_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SlotFormatIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SlotFormatIndicator;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SlotFormatIndicator_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SlotFormatIndicator_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SlotFormatCombinationsPerCell.h"
#include "NR_AvailableRB-SetsPerCell-r16.h"
#include "NR_SearchSpaceSwitchTrigger-r16.h"
#include "NR_CO-DurationsPerCell-r16.h"

#endif	/* _NR_SlotFormatIndicator_H_ */
#include <asn_internal.h>
