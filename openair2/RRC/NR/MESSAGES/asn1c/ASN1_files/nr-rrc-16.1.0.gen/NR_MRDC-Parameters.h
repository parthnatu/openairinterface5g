/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MRDC_Parameters_H_
#define	_NR_MRDC_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MRDC_Parameters__singleUL_Transmission {
	NR_MRDC_Parameters__singleUL_Transmission_supported	= 0
} e_NR_MRDC_Parameters__singleUL_Transmission;
typedef enum NR_MRDC_Parameters__dynamicPowerSharingENDC {
	NR_MRDC_Parameters__dynamicPowerSharingENDC_supported	= 0
} e_NR_MRDC_Parameters__dynamicPowerSharingENDC;
typedef enum NR_MRDC_Parameters__tdm_Pattern {
	NR_MRDC_Parameters__tdm_Pattern_supported	= 0
} e_NR_MRDC_Parameters__tdm_Pattern;
typedef enum NR_MRDC_Parameters__ul_SharingEUTRA_NR {
	NR_MRDC_Parameters__ul_SharingEUTRA_NR_tdm	= 0,
	NR_MRDC_Parameters__ul_SharingEUTRA_NR_fdm	= 1,
	NR_MRDC_Parameters__ul_SharingEUTRA_NR_both	= 2
} e_NR_MRDC_Parameters__ul_SharingEUTRA_NR;
typedef enum NR_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR {
	NR_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR_type1	= 0,
	NR_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR_type2	= 1
} e_NR_MRDC_Parameters__ul_SwitchingTimeEUTRA_NR;
typedef enum NR_MRDC_Parameters__simultaneousRxTxInterBandENDC {
	NR_MRDC_Parameters__simultaneousRxTxInterBandENDC_supported	= 0
} e_NR_MRDC_Parameters__simultaneousRxTxInterBandENDC;
typedef enum NR_MRDC_Parameters__asyncIntraBandENDC {
	NR_MRDC_Parameters__asyncIntraBandENDC_supported	= 0
} e_NR_MRDC_Parameters__asyncIntraBandENDC;
typedef enum NR_MRDC_Parameters__ext1__dualPA_Architecture {
	NR_MRDC_Parameters__ext1__dualPA_Architecture_supported	= 0
} e_NR_MRDC_Parameters__ext1__dualPA_Architecture;
typedef enum NR_MRDC_Parameters__ext1__intraBandENDC_Support {
	NR_MRDC_Parameters__ext1__intraBandENDC_Support_non_contiguous	= 0,
	NR_MRDC_Parameters__ext1__intraBandENDC_Support_both	= 1
} e_NR_MRDC_Parameters__ext1__intraBandENDC_Support;
typedef enum NR_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR {
	NR_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR_required	= 0
} e_NR_MRDC_Parameters__ext1__ul_TimingAlignmentEUTRA_NR;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16;
typedef enum NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16 {
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n20	= 0,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n40	= 1,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n50	= 2,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n60	= 3,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n70	= 4,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n80	= 5,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n90	= 6,
	NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n100	= 7
} e_NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16;

/* NR_MRDC-Parameters */
typedef struct NR_MRDC_Parameters {
	long	*singleUL_Transmission;	/* OPTIONAL */
	long	*dynamicPowerSharingENDC;	/* OPTIONAL */
	long	*tdm_Pattern;	/* OPTIONAL */
	long	*ul_SharingEUTRA_NR;	/* OPTIONAL */
	long	*ul_SwitchingTimeEUTRA_NR;	/* OPTIONAL */
	long	*simultaneousRxTxInterBandENDC;	/* OPTIONAL */
	long	*asyncIntraBandENDC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MRDC_Parameters__ext1 {
		long	*dualPA_Architecture;	/* OPTIONAL */
		long	*intraBandENDC_Support;	/* OPTIONAL */
		long	*ul_TimingAlignmentEUTRA_NR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MRDC_Parameters__ext2 {
		struct NR_MRDC_Parameters__ext2__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16 {
			long	*eutra_TDD_Config0_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config1_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config2_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config3_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config4_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config5_r16;	/* OPTIONAL */
			long	*eutra_TDD_Config6_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MRDC_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_singleUL_Transmission_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dynamicPowerSharingENDC_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdm_Pattern_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_SharingEUTRA_NR_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_SwitchingTimeEUTRA_NR_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousRxTxInterBandENDC_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_asyncIntraBandENDC_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dualPA_Architecture_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraBandENDC_Support_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_TimingAlignmentEUTRA_NR_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config0_r16_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config1_r16_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config2_r16_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config3_r16_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config4_r16_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config5_r16_75;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config6_r16_84;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MRDC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MRDC_Parameters_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MRDC_Parameters_H_ */
#include <asn_internal.h>
