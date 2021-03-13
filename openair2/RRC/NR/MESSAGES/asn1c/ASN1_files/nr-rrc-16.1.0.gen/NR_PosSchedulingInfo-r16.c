/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_PosSchedulingInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_offsetToSI_Used_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_posSI_Periodicity_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_posSI_BroadcastStatus_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_offsetToSI_Used_r16_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_offsetToSI_Used_r16_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_offsetToSI_Used_r16_specs_2 = {
	asn_MAP_NR_offsetToSI_Used_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_offsetToSI_Used_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_offsetToSI_Used_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_offsetToSI_Used_r16_2 = {
	"offsetToSI-Used-r16",
	"offsetToSI-Used-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_offsetToSI_Used_r16_tags_2,
	sizeof(asn_DEF_NR_offsetToSI_Used_r16_tags_2)
		/sizeof(asn_DEF_NR_offsetToSI_Used_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_offsetToSI_Used_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_offsetToSI_Used_r16_tags_2)
		/sizeof(asn_DEF_NR_offsetToSI_Used_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_offsetToSI_Used_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_offsetToSI_Used_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_posSI_Periodicity_r16_value2enum_4[] = {
	{ 0,	3,	"rf8" },
	{ 1,	4,	"rf16" },
	{ 2,	4,	"rf32" },
	{ 3,	4,	"rf64" },
	{ 4,	5,	"rf128" },
	{ 5,	5,	"rf256" },
	{ 6,	5,	"rf512" }
};
static const unsigned int asn_MAP_NR_posSI_Periodicity_r16_enum2value_4[] = {
	4,	/* rf128(4) */
	1,	/* rf16(1) */
	5,	/* rf256(5) */
	2,	/* rf32(2) */
	6,	/* rf512(6) */
	3,	/* rf64(3) */
	0	/* rf8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_posSI_Periodicity_r16_specs_4 = {
	asn_MAP_NR_posSI_Periodicity_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_posSI_Periodicity_r16_enum2value_4,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_posSI_Periodicity_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_posSI_Periodicity_r16_4 = {
	"posSI-Periodicity-r16",
	"posSI-Periodicity-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_posSI_Periodicity_r16_tags_4,
	sizeof(asn_DEF_NR_posSI_Periodicity_r16_tags_4)
		/sizeof(asn_DEF_NR_posSI_Periodicity_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_posSI_Periodicity_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_posSI_Periodicity_r16_tags_4)
		/sizeof(asn_DEF_NR_posSI_Periodicity_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_posSI_Periodicity_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_posSI_Periodicity_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_posSI_BroadcastStatus_r16_value2enum_12[] = {
	{ 0,	12,	"broadcasting" },
	{ 1,	15,	"notBroadcasting" }
};
static const unsigned int asn_MAP_NR_posSI_BroadcastStatus_r16_enum2value_12[] = {
	0,	/* broadcasting(0) */
	1	/* notBroadcasting(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_posSI_BroadcastStatus_r16_specs_12 = {
	asn_MAP_NR_posSI_BroadcastStatus_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_posSI_BroadcastStatus_r16_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_posSI_BroadcastStatus_r16_12 = {
	"posSI-BroadcastStatus-r16",
	"posSI-BroadcastStatus-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12,
	sizeof(asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12)
		/sizeof(asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12)
		/sizeof(asn_DEF_NR_posSI_BroadcastStatus_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_posSI_BroadcastStatus_r16_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_posSI_BroadcastStatus_r16_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PosSchedulingInfo_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PosSchedulingInfo_r16, offsetToSI_Used_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_offsetToSI_Used_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offsetToSI-Used-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PosSchedulingInfo_r16, posSI_Periodicity_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_posSI_Periodicity_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSI-Periodicity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PosSchedulingInfo_r16, posSI_BroadcastStatus_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_posSI_BroadcastStatus_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSI-BroadcastStatus-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PosSchedulingInfo_r16, posSIB_MappingInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PosSIB_MappingInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSIB-MappingInfo-r16"
		},
};
static const int asn_MAP_NR_PosSchedulingInfo_r16_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_PosSchedulingInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PosSchedulingInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* offsetToSI-Used-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* posSI-Periodicity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* posSI-BroadcastStatus-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* posSIB-MappingInfo-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PosSchedulingInfo_r16_specs_1 = {
	sizeof(struct NR_PosSchedulingInfo_r16),
	offsetof(struct NR_PosSchedulingInfo_r16, _asn_ctx),
	asn_MAP_NR_PosSchedulingInfo_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_PosSchedulingInfo_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PosSchedulingInfo_r16 = {
	"PosSchedulingInfo-r16",
	"PosSchedulingInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PosSchedulingInfo_r16_tags_1,
	sizeof(asn_DEF_NR_PosSchedulingInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_PosSchedulingInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_PosSchedulingInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PosSchedulingInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_PosSchedulingInfo_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_PosSchedulingInfo_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_PosSchedulingInfo_r16_specs_1	/* Additional specs */
};

