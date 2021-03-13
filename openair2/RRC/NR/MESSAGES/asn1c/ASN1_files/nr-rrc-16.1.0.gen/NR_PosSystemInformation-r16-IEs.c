/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_PosSystemInformation-r16-IEs.h"

static int
memb_NR_posSIB_TypeAndInfo_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  36 }	/* (0..36,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_posSIB_TypeAndInfo_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_posSIB_TypeAndInfo_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_Member_3[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-2-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_3_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-3-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_4_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-4-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_5_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-5-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_6_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-6-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_7_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-7-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib1_8_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib1-8-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-2-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_3_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-3-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_4_r16),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-4-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_5_r16),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-5-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_6_r16),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-6-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_7_r16),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-7-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_8_r16),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-8-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_9_r16),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-9-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_10_r16),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-10-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_11_r16),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-11-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_12_r16),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-12-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_13_r16),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-13-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_14_r16),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-14-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_15_r16),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-15-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_16_r16),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-16-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_17_r16),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-17-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_18_r16),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-18-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_19_r16),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-19-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_20_r16),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-20-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_21_r16),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-21-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_22_r16),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-22-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib2_23_r16),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib2-23-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib3_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib3-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib4_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib4-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib5_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib5-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib6_1_r16),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib6-1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib6_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib6-2-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, choice.posSib6_3_r16),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SIBpos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSib6-3-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_Member_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSib1-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* posSib1-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* posSib1-3-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* posSib1-4-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* posSib1-5-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* posSib1-6-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* posSib1-7-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* posSib1-8-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* posSib2-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* posSib2-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* posSib2-3-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* posSib2-4-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* posSib2-5-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* posSib2-6-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* posSib2-7-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* posSib2-8-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* posSib2-9-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* posSib2-10-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* posSib2-11-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* posSib2-12-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* posSib2-13-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* posSib2-14-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* posSib2-15-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* posSib2-16-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* posSib2-17-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* posSib2-18-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* posSib2-19-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* posSib2-20-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* posSib2-21-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* posSib2-22-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* posSib2-23-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* posSib3-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* posSib4-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 }, /* posSib5-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 34, 0, 0 }, /* posSib6-1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 35, 0, 0 }, /* posSib6-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 36, 0, 0 } /* posSib6-3-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_Member_specs_3 = {
	sizeof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member),
	offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, _asn_ctx),
	offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member, present),
	sizeof(((struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member *)0)->present),
	asn_MAP_NR_Member_tag2el_3,
	37,	/* Count of tags in the map */
	0, 0,
	37	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_Member_3 = {
	"CHOICE",
	"CHOICE",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_Member_constr_3, CHOICE_constraint },
	asn_MBR_NR_Member_3,
	37,	/* Elements count */
	&asn_SPC_NR_Member_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_posSIB_TypeAndInfo_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_NR_Member_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_posSIB_TypeAndInfo_r16_specs_2 = {
	sizeof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16),
	offsetof(struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_posSIB_TypeAndInfo_r16_2 = {
	"posSIB-TypeAndInfo-r16",
	"posSIB-TypeAndInfo-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2,
	sizeof(asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2)
		/sizeof(asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2)
		/sizeof(asn_DEF_NR_posSIB_TypeAndInfo_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_posSIB_TypeAndInfo_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_posSIB_TypeAndInfo_r16_2,
	1,	/* Single element */
	&asn_SPC_NR_posSIB_TypeAndInfo_r16_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_43 = {
	sizeof(struct NR_PosSystemInformation_r16_IEs__nonCriticalExtension),
	offsetof(struct NR_PosSystemInformation_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_43 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_43,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_43)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_43[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_43,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_43)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_43[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_43	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PosSystemInformation_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PosSystemInformation_r16_IEs, posSIB_TypeAndInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_posSIB_TypeAndInfo_r16_2,
		0,
		{ 0, &asn_PER_memb_NR_posSIB_TypeAndInfo_r16_constr_2,  memb_NR_posSIB_TypeAndInfo_r16_constraint_1 },
		0, 0, /* No default value */
		"posSIB-TypeAndInfo-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PosSystemInformation_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PosSystemInformation_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_PosSystemInformation_r16_IEs_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PosSystemInformation_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSIB-TypeAndInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PosSystemInformation_r16_IEs_specs_1 = {
	sizeof(struct NR_PosSystemInformation_r16_IEs),
	offsetof(struct NR_PosSystemInformation_r16_IEs, _asn_ctx),
	asn_MAP_NR_PosSystemInformation_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_PosSystemInformation_r16_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PosSystemInformation_r16_IEs = {
	"PosSystemInformation-r16-IEs",
	"PosSystemInformation-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1,
	sizeof(asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_PosSystemInformation_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_PosSystemInformation_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_NR_PosSystemInformation_r16_IEs_specs_1	/* Additional specs */
};

