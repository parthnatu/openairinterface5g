/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PDCP_Parameters_H_
#define	_NR_PDCP_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PDCP_Parameters__maxNumberROHC_ContextSessions {
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs2	= 0,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs4	= 1,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs8	= 2,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs12	= 3,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs16	= 4,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs24	= 5,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs32	= 6,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs48	= 7,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs64	= 8,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs128	= 9,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs256	= 10,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs512	= 11,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs1024	= 12,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_cs16384	= 13,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_spare2	= 14,
	NR_PDCP_Parameters__maxNumberROHC_ContextSessions_spare1	= 15
} e_NR_PDCP_Parameters__maxNumberROHC_ContextSessions;
typedef enum NR_PDCP_Parameters__uplinkOnlyROHC_Profiles {
	NR_PDCP_Parameters__uplinkOnlyROHC_Profiles_supported	= 0
} e_NR_PDCP_Parameters__uplinkOnlyROHC_Profiles;
typedef enum NR_PDCP_Parameters__continueROHC_Context {
	NR_PDCP_Parameters__continueROHC_Context_supported	= 0
} e_NR_PDCP_Parameters__continueROHC_Context;
typedef enum NR_PDCP_Parameters__outOfOrderDelivery {
	NR_PDCP_Parameters__outOfOrderDelivery_supported	= 0
} e_NR_PDCP_Parameters__outOfOrderDelivery;
typedef enum NR_PDCP_Parameters__shortSN {
	NR_PDCP_Parameters__shortSN_supported	= 0
} e_NR_PDCP_Parameters__shortSN;
typedef enum NR_PDCP_Parameters__pdcp_DuplicationSRB {
	NR_PDCP_Parameters__pdcp_DuplicationSRB_supported	= 0
} e_NR_PDCP_Parameters__pdcp_DuplicationSRB;
typedef enum NR_PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB {
	NR_PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB_supported	= 0
} e_NR_PDCP_Parameters__pdcp_DuplicationMCG_OrSCG_DRB;
typedef enum NR_PDCP_Parameters__ext1__drb_IAB_r16 {
	NR_PDCP_Parameters__ext1__drb_IAB_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__drb_IAB_r16;
typedef enum NR_PDCP_Parameters__ext1__non_DRB_IAB_r16 {
	NR_PDCP_Parameters__ext1__non_DRB_IAB_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__non_DRB_IAB_r16;
typedef enum NR_PDCP_Parameters__ext1__extendedDiscardTimer_r16 {
	NR_PDCP_Parameters__ext1__extendedDiscardTimer_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__extendedDiscardTimer_r16;
typedef enum NR_PDCP_Parameters__ext1__continueEHC_Context_r16 {
	NR_PDCP_Parameters__ext1__continueEHC_Context_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__continueEHC_Context_r16;
typedef enum NR_PDCP_Parameters__ext1__ehc_r16 {
	NR_PDCP_Parameters__ext1__ehc_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__ehc_r16;
typedef enum NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16 {
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs2	= 0,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs4	= 1,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs8	= 2,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs16	= 3,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs32	= 4,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs64	= 5,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs128	= 6,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs256	= 7,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs512	= 8,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs1024	= 9,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs2048	= 10,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs4096	= 11,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs8192	= 12,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs16384	= 13,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs32768	= 14,
	NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16_cs65536	= 15
} e_NR_PDCP_Parameters__ext1__maxNumberEHC_Contexts_r16;
typedef enum NR_PDCP_Parameters__ext1__jointEHC_ROHC_Config_r16 {
	NR_PDCP_Parameters__ext1__jointEHC_ROHC_Config_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__jointEHC_ROHC_Config_r16;
typedef enum NR_PDCP_Parameters__ext1__pdcp_DuplicationMoreThanTwoRLC_r16 {
	NR_PDCP_Parameters__ext1__pdcp_DuplicationMoreThanTwoRLC_r16_supported	= 0
} e_NR_PDCP_Parameters__ext1__pdcp_DuplicationMoreThanTwoRLC_r16;

/* NR_PDCP-Parameters */
typedef struct NR_PDCP_Parameters {
	struct NR_PDCP_Parameters__supportedROHC_Profiles {
		BOOLEAN_t	 profile0x0000;
		BOOLEAN_t	 profile0x0001;
		BOOLEAN_t	 profile0x0002;
		BOOLEAN_t	 profile0x0003;
		BOOLEAN_t	 profile0x0004;
		BOOLEAN_t	 profile0x0006;
		BOOLEAN_t	 profile0x0101;
		BOOLEAN_t	 profile0x0102;
		BOOLEAN_t	 profile0x0103;
		BOOLEAN_t	 profile0x0104;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedROHC_Profiles;
	long	 maxNumberROHC_ContextSessions;
	long	*uplinkOnlyROHC_Profiles;	/* OPTIONAL */
	long	*continueROHC_Context;	/* OPTIONAL */
	long	*outOfOrderDelivery;	/* OPTIONAL */
	long	*shortSN;	/* OPTIONAL */
	long	*pdcp_DuplicationSRB;	/* OPTIONAL */
	long	*pdcp_DuplicationMCG_OrSCG_DRB;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PDCP_Parameters__ext1 {
		long	*drb_IAB_r16;	/* OPTIONAL */
		long	*non_DRB_IAB_r16;	/* OPTIONAL */
		long	*extendedDiscardTimer_r16;	/* OPTIONAL */
		long	*continueEHC_Context_r16;	/* OPTIONAL */
		long	*ehc_r16;	/* OPTIONAL */
		long	*maxNumberEHC_Contexts_r16;	/* OPTIONAL */
		long	*jointEHC_ROHC_Config_r16;	/* OPTIONAL */
		long	*pdcp_DuplicationMoreThanTwoRLC_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PDCP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberROHC_ContextSessions_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uplinkOnlyROHC_Profiles_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_continueROHC_Context_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_outOfOrderDelivery_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_shortSN_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_DuplicationSRB_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_DuplicationMCG_OrSCG_DRB_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_drb_IAB_r16_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_non_DRB_IAB_r16_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedDiscardTimer_r16_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_continueEHC_Context_r16_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ehc_r16_52;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberEHC_Contexts_r16_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_jointEHC_ROHC_Config_r16_71;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_DuplicationMoreThanTwoRLC_r16_73;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PDCP_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PDCP_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PDCP_Parameters_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PDCP_Parameters_H_ */
#include <asn_internal.h>
