/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasObjectEUTRA_H_
#define	_NR_MeasObjectEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include "NR_EUTRA-AllowedMeasBandwidth.h"
#include "NR_EUTRA-PresenceAntennaPort1.h"
#include "NR_EUTRA-Q-OffsetRange.h"
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_EUTRA_CellIndexList;
struct NR_EUTRA_Cell;
struct NR_EUTRA_BlackCell;

/* NR_MeasObjectEUTRA */
typedef struct NR_MeasObjectEUTRA {
	NR_ARFCN_ValueEUTRA_t	 carrierFreq;
	NR_EUTRA_AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	struct NR_EUTRA_CellIndexList	*cellsToRemoveListEUTRAN;	/* OPTIONAL */
	struct NR_MeasObjectEUTRA__cellsToAddModListEUTRAN {
		A_SEQUENCE_OF(struct NR_EUTRA_Cell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellsToAddModListEUTRAN;
	struct NR_EUTRA_CellIndexList	*blackCellsToRemoveListEUTRAN;	/* OPTIONAL */
	struct NR_MeasObjectEUTRA__blackCellsToAddModListEUTRAN {
		A_SEQUENCE_OF(struct NR_EUTRA_BlackCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *blackCellsToAddModListEUTRAN;
	NR_EUTRA_PresenceAntennaPort1_t	 eutra_PresenceAntennaPort1;
	NR_EUTRA_Q_OffsetRange_t	*eutra_Q_OffsetRange;	/* OPTIONAL */
	BOOLEAN_t	 widebandRSRQ_Meas;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasObjectEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasObjectEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasObjectEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasObjectEUTRA_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_EUTRA-CellIndexList.h"
#include "NR_EUTRA-Cell.h"
#include "NR_EUTRA-BlackCell.h"

#endif	/* _NR_MeasObjectEUTRA_H_ */
#include <asn_internal.h>
