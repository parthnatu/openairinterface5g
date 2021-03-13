/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_RF-ParametersMRDC.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_srs_SwitchingTimeRequested_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_srs_SwitchingTimeRequested_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_srs_SwitchingTimeRequested_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_srs_SwitchingTimeRequested_specs_6 = {
	asn_MAP_NR_srs_SwitchingTimeRequested_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_srs_SwitchingTimeRequested_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_srs_SwitchingTimeRequested_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_srs_SwitchingTimeRequested_6 = {
	"srs-SwitchingTimeRequested",
	"srs-SwitchingTimeRequested",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_srs_SwitchingTimeRequested_tags_6,
	sizeof(asn_DEF_NR_srs_SwitchingTimeRequested_tags_6)
		/sizeof(asn_DEF_NR_srs_SwitchingTimeRequested_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_srs_SwitchingTimeRequested_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_srs_SwitchingTimeRequested_tags_6)
		/sizeof(asn_DEF_NR_srs_SwitchingTimeRequested_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_srs_SwitchingTimeRequested_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_srs_SwitchingTimeRequested_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_5[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_RF_ParametersMRDC__ext1, srs_SwitchingTimeRequested),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_srs_SwitchingTimeRequested_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-SwitchingTimeRequested"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext1, supportedBandCombinationList_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1540"
		},
};
static const int asn_MAP_NR_ext1_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-SwitchingTimeRequested */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedBandCombinationList-v1540 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_5 = {
	sizeof(struct NR_RF_ParametersMRDC__ext1),
	offsetof(struct NR_RF_ParametersMRDC__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_5,
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_5,
	2,	/* Elements count */
	&asn_SPC_NR_ext1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_9[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext2, supportedBandCombinationList_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1550"
		},
};
static const int asn_MAP_NR_ext2_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationList-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_9 = {
	sizeof(struct NR_RF_ParametersMRDC__ext2),
	offsetof(struct NR_RF_ParametersMRDC__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_9 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_9,
	sizeof(asn_DEF_NR_ext2_tags_9)
		/sizeof(asn_DEF_NR_ext2_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_9)
		/sizeof(asn_DEF_NR_ext2_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext2_9,
	1,	/* Elements count */
	&asn_SPC_NR_ext2_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext3_11[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_RF_ParametersMRDC__ext3, supportedBandCombinationList_v1560),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1560"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext3, supportedBandCombinationListNEDC_Only),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationListNEDC-Only"
		},
};
static const int asn_MAP_NR_ext3_oms_11[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_ext3_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext3_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombinationList-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedBandCombinationListNEDC-Only */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext3_specs_11 = {
	sizeof(struct NR_RF_ParametersMRDC__ext3),
	offsetof(struct NR_RF_ParametersMRDC__ext3, _asn_ctx),
	asn_MAP_NR_ext3_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ext3_oms_11,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext3_11 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext3_tags_11,
	sizeof(asn_DEF_NR_ext3_tags_11)
		/sizeof(asn_DEF_NR_ext3_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ext3_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ext3_tags_11)
		/sizeof(asn_DEF_NR_ext3_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext3_11,
	2,	/* Elements count */
	&asn_SPC_NR_ext3_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext4_14[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext4, supportedBandCombinationList_v1570),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1570,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1570"
		},
};
static const int asn_MAP_NR_ext4_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext4_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext4_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationList-v1570 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext4_specs_14 = {
	sizeof(struct NR_RF_ParametersMRDC__ext4),
	offsetof(struct NR_RF_ParametersMRDC__ext4, _asn_ctx),
	asn_MAP_NR_ext4_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext4_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext4_14 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext4_tags_14,
	sizeof(asn_DEF_NR_ext4_tags_14)
		/sizeof(asn_DEF_NR_ext4_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_ext4_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_ext4_tags_14)
		/sizeof(asn_DEF_NR_ext4_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext4_14,
	1,	/* Elements count */
	&asn_SPC_NR_ext4_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext5_16[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext5, supportedBandCombinationList_v1580),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1580,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1580"
		},
};
static const int asn_MAP_NR_ext5_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext5_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext5_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationList-v1580 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext5_specs_16 = {
	sizeof(struct NR_RF_ParametersMRDC__ext5),
	offsetof(struct NR_RF_ParametersMRDC__ext5, _asn_ctx),
	asn_MAP_NR_ext5_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext5_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext5_16 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext5_tags_16,
	sizeof(asn_DEF_NR_ext5_tags_16)
		/sizeof(asn_DEF_NR_ext5_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_ext5_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_ext5_tags_16)
		/sizeof(asn_DEF_NR_ext5_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext5_16,
	1,	/* Elements count */
	&asn_SPC_NR_ext5_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext6_18[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext6, supportedBandCombinationList_v1590),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1590,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1590"
		},
};
static const int asn_MAP_NR_ext6_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext6_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext6_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationList-v1590 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext6_specs_18 = {
	sizeof(struct NR_RF_ParametersMRDC__ext6),
	offsetof(struct NR_RF_ParametersMRDC__ext6, _asn_ctx),
	asn_MAP_NR_ext6_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext6_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext6_18 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext6_tags_18,
	sizeof(asn_DEF_NR_ext6_tags_18)
		/sizeof(asn_DEF_NR_ext6_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_ext6_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_ext6_tags_18)
		/sizeof(asn_DEF_NR_ext6_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext6_18,
	1,	/* Elements count */
	&asn_SPC_NR_ext6_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_supportedBandCombinationListNEDC_Only_v15a0_21[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, supportedBandCombinationList_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1540"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, supportedBandCombinationList_v1560),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1560,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1560"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, supportedBandCombinationList_v1570),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1570,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1570"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, supportedBandCombinationList_v1580),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1580,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1580"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, supportedBandCombinationList_v1590),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1590,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1590"
		},
};
static const int asn_MAP_NR_supportedBandCombinationListNEDC_Only_v15a0_oms_21[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_supportedBandCombinationListNEDC_Only_v15a0_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombinationList-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationList-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportedBandCombinationList-v1570 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supportedBandCombinationList-v1580 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* supportedBandCombinationList-v1590 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_supportedBandCombinationListNEDC_Only_v15a0_specs_21 = {
	sizeof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0),
	offsetof(struct NR_RF_ParametersMRDC__ext7__supportedBandCombinationListNEDC_Only_v15a0, _asn_ctx),
	asn_MAP_NR_supportedBandCombinationListNEDC_Only_v15a0_tag2el_21,
	5,	/* Count of tags in the map */
	asn_MAP_NR_supportedBandCombinationListNEDC_Only_v15a0_oms_21,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_21 = {
	"supportedBandCombinationListNEDC-Only-v15a0",
	"supportedBandCombinationListNEDC-Only-v15a0",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21,
	sizeof(asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21)
		/sizeof(asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21)
		/sizeof(asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_supportedBandCombinationListNEDC_Only_v15a0_21,
	5,	/* Elements count */
	&asn_SPC_NR_supportedBandCombinationListNEDC_Only_v15a0_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext7_20[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext7, supportedBandCombinationListNEDC_Only_v15a0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_supportedBandCombinationListNEDC_Only_v15a0_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationListNEDC-Only-v15a0"
		},
};
static const int asn_MAP_NR_ext7_oms_20[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext7_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext7_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandCombinationListNEDC-Only-v15a0 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext7_specs_20 = {
	sizeof(struct NR_RF_ParametersMRDC__ext7),
	offsetof(struct NR_RF_ParametersMRDC__ext7, _asn_ctx),
	asn_MAP_NR_ext7_tag2el_20,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext7_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext7_20 = {
	"ext7",
	"ext7",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext7_tags_20,
	sizeof(asn_DEF_NR_ext7_tags_20)
		/sizeof(asn_DEF_NR_ext7_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_ext7_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_ext7_tags_20)
		/sizeof(asn_DEF_NR_ext7_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext7_20,
	1,	/* Elements count */
	&asn_SPC_NR_ext7_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext8_27[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_RF_ParametersMRDC__ext8, supportedBandCombinationList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RF_ParametersMRDC__ext8, supportedBandCombinationListNEDC_Only_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationListNEDC-Only-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC__ext8, supportedBandCombinationList_UplinkTxSwitch_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList_UplinkTxSwitch_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList-UplinkTxSwitch-r16"
		},
};
static const int asn_MAP_NR_ext8_oms_27[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_ext8_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext8_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombinationList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationListNEDC-Only-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportedBandCombinationList-UplinkTxSwitch-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext8_specs_27 = {
	sizeof(struct NR_RF_ParametersMRDC__ext8),
	offsetof(struct NR_RF_ParametersMRDC__ext8, _asn_ctx),
	asn_MAP_NR_ext8_tag2el_27,
	3,	/* Count of tags in the map */
	asn_MAP_NR_ext8_oms_27,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext8_27 = {
	"ext8",
	"ext8",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext8_tags_27,
	sizeof(asn_DEF_NR_ext8_tags_27)
		/sizeof(asn_DEF_NR_ext8_tags_27[0]) - 1, /* 1 */
	asn_DEF_NR_ext8_tags_27,	/* Same as above */
	sizeof(asn_DEF_NR_ext8_tags_27)
		/sizeof(asn_DEF_NR_ext8_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext8_27,
	3,	/* Elements count */
	&asn_SPC_NR_ext8_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RF_ParametersMRDC_1[] = {
	{ ATF_POINTER, 10, offsetof(struct NR_RF_ParametersMRDC, supportedBandCombinationList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombinationList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationList"
		},
	{ ATF_POINTER, 9, offsetof(struct NR_RF_ParametersMRDC, appliedFreqBandListFilter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FreqBandList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"appliedFreqBandListFilter"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_RF_ParametersMRDC, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_RF_ParametersMRDC, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext2_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_RF_ParametersMRDC, ext3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext3_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_RF_ParametersMRDC, ext4),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext4_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RF_ParametersMRDC, ext5),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext5_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RF_ParametersMRDC, ext6),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_NR_ext6_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext6"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RF_ParametersMRDC, ext7),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_NR_ext7_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext7"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RF_ParametersMRDC, ext8),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_NR_ext8_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext8"
		},
};
static const int asn_MAP_NR_RF_ParametersMRDC_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_NR_RF_ParametersMRDC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RF_ParametersMRDC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombinationList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* appliedFreqBandListFilter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext6 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext7 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ext8 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RF_ParametersMRDC_specs_1 = {
	sizeof(struct NR_RF_ParametersMRDC),
	offsetof(struct NR_RF_ParametersMRDC, _asn_ctx),
	asn_MAP_NR_RF_ParametersMRDC_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_NR_RF_ParametersMRDC_oms_1,	/* Optional members */
	2, 8,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RF_ParametersMRDC = {
	"RF-ParametersMRDC",
	"RF-ParametersMRDC",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RF_ParametersMRDC_tags_1,
	sizeof(asn_DEF_NR_RF_ParametersMRDC_tags_1)
		/sizeof(asn_DEF_NR_RF_ParametersMRDC_tags_1[0]), /* 1 */
	asn_DEF_NR_RF_ParametersMRDC_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RF_ParametersMRDC_tags_1)
		/sizeof(asn_DEF_NR_RF_ParametersMRDC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RF_ParametersMRDC_1,
	10,	/* Elements count */
	&asn_SPC_NR_RF_ParametersMRDC_specs_1	/* Additional specs */
};

