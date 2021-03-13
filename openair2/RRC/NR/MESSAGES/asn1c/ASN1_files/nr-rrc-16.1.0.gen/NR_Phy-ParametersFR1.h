/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_Phy_ParametersFR1_H_
#define	_NR_Phy_ParametersFR1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_Phy_ParametersFR1__pdcch_MonitoringSingleOccasion {
	NR_Phy_ParametersFR1__pdcch_MonitoringSingleOccasion_supported	= 0
} e_NR_Phy_ParametersFR1__pdcch_MonitoringSingleOccasion;
typedef enum NR_Phy_ParametersFR1__scs_60kHz {
	NR_Phy_ParametersFR1__scs_60kHz_supported	= 0
} e_NR_Phy_ParametersFR1__scs_60kHz;
typedef enum NR_Phy_ParametersFR1__pdsch_256QAM_FR1 {
	NR_Phy_ParametersFR1__pdsch_256QAM_FR1_supported	= 0
} e_NR_Phy_ParametersFR1__pdsch_256QAM_FR1;
typedef enum NR_Phy_ParametersFR1__pdsch_RE_MappingFR1_PerSymbol {
	NR_Phy_ParametersFR1__pdsch_RE_MappingFR1_PerSymbol_n10	= 0,
	NR_Phy_ParametersFR1__pdsch_RE_MappingFR1_PerSymbol_n20	= 1
} e_NR_Phy_ParametersFR1__pdsch_RE_MappingFR1_PerSymbol;
typedef enum NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot {
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n16	= 0,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n32	= 1,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n48	= 2,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n64	= 3,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n80	= 4,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n96	= 5,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n112	= 6,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n128	= 7,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n144	= 8,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n160	= 9,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n176	= 10,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n192	= 11,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n208	= 12,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n224	= 13,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n240	= 14,
	NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot_n256	= 15
} e_NR_Phy_ParametersFR1__ext1__pdsch_RE_MappingFR1_PerSlot;

/* NR_Phy-ParametersFR1 */
typedef struct NR_Phy_ParametersFR1 {
	long	*pdcch_MonitoringSingleOccasion;	/* OPTIONAL */
	long	*scs_60kHz;	/* OPTIONAL */
	long	*pdsch_256QAM_FR1;	/* OPTIONAL */
	long	*pdsch_RE_MappingFR1_PerSymbol;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_Phy_ParametersFR1__ext1 {
		long	*pdsch_RE_MappingFR1_PerSlot;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_Phy_ParametersFR1_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcch_MonitoringSingleOccasion_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_256QAM_FR1_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_RE_MappingFR1_PerSymbol_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_RE_MappingFR1_PerSlot_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_Phy_ParametersFR1;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_Phy_ParametersFR1_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_Phy_ParametersFR1_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_Phy_ParametersFR1_H_ */
#include <asn_internal.h>
