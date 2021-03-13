/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_LBT-FailureRecoveryConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_lbt_FailureInstanceMaxCount_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_lbt_FailureDetectionTimer_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_lbt_FailureInstanceMaxCount_r16_value2enum_2[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" },
	{ 4,	3,	"n64" },
	{ 5,	4,	"n128" }
};
static const unsigned int asn_MAP_NR_lbt_FailureInstanceMaxCount_r16_enum2value_2[] = {
	5,	/* n128(5) */
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	4,	/* n64(4) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_lbt_FailureInstanceMaxCount_r16_specs_2 = {
	asn_MAP_NR_lbt_FailureInstanceMaxCount_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_lbt_FailureInstanceMaxCount_r16_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_2 = {
	"lbt-FailureInstanceMaxCount-r16",
	"lbt-FailureInstanceMaxCount-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2,
	sizeof(asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2)
		/sizeof(asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2)
		/sizeof(asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_lbt_FailureInstanceMaxCount_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_lbt_FailureInstanceMaxCount_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_lbt_FailureDetectionTimer_r16_value2enum_9[] = {
	{ 0,	4,	"ms10" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms40" },
	{ 3,	4,	"ms80" },
	{ 4,	5,	"ms160" },
	{ 5,	5,	"ms320" }
};
static const unsigned int asn_MAP_NR_lbt_FailureDetectionTimer_r16_enum2value_9[] = {
	0,	/* ms10(0) */
	4,	/* ms160(4) */
	1,	/* ms20(1) */
	5,	/* ms320(5) */
	2,	/* ms40(2) */
	3	/* ms80(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_lbt_FailureDetectionTimer_r16_specs_9 = {
	asn_MAP_NR_lbt_FailureDetectionTimer_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_lbt_FailureDetectionTimer_r16_enum2value_9,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_lbt_FailureDetectionTimer_r16_9 = {
	"lbt-FailureDetectionTimer-r16",
	"lbt-FailureDetectionTimer-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9,
	sizeof(asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9)
		/sizeof(asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9)
		/sizeof(asn_DEF_NR_lbt_FailureDetectionTimer_r16_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_NR_lbt_FailureDetectionTimer_r16_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_lbt_FailureDetectionTimer_r16_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_LBT_FailureRecoveryConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_LBT_FailureRecoveryConfig_r16, lbt_FailureInstanceMaxCount_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_lbt_FailureInstanceMaxCount_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lbt-FailureInstanceMaxCount-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_LBT_FailureRecoveryConfig_r16, lbt_FailureDetectionTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_lbt_FailureDetectionTimer_r16_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lbt-FailureDetectionTimer-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_LBT_FailureRecoveryConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lbt-FailureInstanceMaxCount-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lbt-FailureDetectionTimer-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_LBT_FailureRecoveryConfig_r16_specs_1 = {
	sizeof(struct NR_LBT_FailureRecoveryConfig_r16),
	offsetof(struct NR_LBT_FailureRecoveryConfig_r16, _asn_ctx),
	asn_MAP_NR_LBT_FailureRecoveryConfig_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_LBT_FailureRecoveryConfig_r16 = {
	"LBT-FailureRecoveryConfig-r16",
	"LBT-FailureRecoveryConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1,
	sizeof(asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_LBT_FailureRecoveryConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_LBT_FailureRecoveryConfig_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_LBT_FailureRecoveryConfig_r16_specs_1	/* Additional specs */
};

