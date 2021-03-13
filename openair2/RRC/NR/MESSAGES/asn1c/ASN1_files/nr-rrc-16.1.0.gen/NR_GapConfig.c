/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_GapConfig.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_gapOffset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_mgl_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_mgrp_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_mgta_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_refServCellIndicator_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_gapOffset_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_mgl_value2enum_3[] = {
	{ 0,	7,	"ms1dot5" },
	{ 1,	3,	"ms3" },
	{ 2,	7,	"ms3dot5" },
	{ 3,	3,	"ms4" },
	{ 4,	7,	"ms5dot5" },
	{ 5,	3,	"ms6" }
};
static const unsigned int asn_MAP_NR_mgl_enum2value_3[] = {
	0,	/* ms1dot5(0) */
	1,	/* ms3(1) */
	2,	/* ms3dot5(2) */
	3,	/* ms4(3) */
	4,	/* ms5dot5(4) */
	5	/* ms6(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgl_specs_3 = {
	asn_MAP_NR_mgl_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgl_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgl_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgl_3 = {
	"mgl",
	"mgl",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgl_tags_3,
	sizeof(asn_DEF_NR_mgl_tags_3)
		/sizeof(asn_DEF_NR_mgl_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_mgl_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_mgl_tags_3)
		/sizeof(asn_DEF_NR_mgl_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_mgl_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgl_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mgrp_value2enum_10[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms80" },
	{ 3,	5,	"ms160" }
};
static const unsigned int asn_MAP_NR_mgrp_enum2value_10[] = {
	3,	/* ms160(3) */
	0,	/* ms20(0) */
	1,	/* ms40(1) */
	2	/* ms80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgrp_specs_10 = {
	asn_MAP_NR_mgrp_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgrp_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgrp_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgrp_10 = {
	"mgrp",
	"mgrp",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgrp_tags_10,
	sizeof(asn_DEF_NR_mgrp_tags_10)
		/sizeof(asn_DEF_NR_mgrp_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_mgrp_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_mgrp_tags_10)
		/sizeof(asn_DEF_NR_mgrp_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_NR_mgrp_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgrp_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mgta_value2enum_15[] = {
	{ 0,	3,	"ms0" },
	{ 1,	8,	"ms0dot25" },
	{ 2,	7,	"ms0dot5" }
};
static const unsigned int asn_MAP_NR_mgta_enum2value_15[] = {
	0,	/* ms0(0) */
	1,	/* ms0dot25(1) */
	2	/* ms0dot5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgta_specs_15 = {
	asn_MAP_NR_mgta_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgta_enum2value_15,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgta_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgta_15 = {
	"mgta",
	"mgta",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgta_tags_15,
	sizeof(asn_DEF_NR_mgta_tags_15)
		/sizeof(asn_DEF_NR_mgta_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_mgta_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_mgta_tags_15)
		/sizeof(asn_DEF_NR_mgta_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_NR_mgta_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgta_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_refServCellIndicator_value2enum_21[] = {
	{ 0,	5,	"pCell" },
	{ 1,	6,	"pSCell" },
	{ 2,	7,	"mcg-FR2" }
};
static const unsigned int asn_MAP_NR_refServCellIndicator_enum2value_21[] = {
	2,	/* mcg-FR2(2) */
	0,	/* pCell(0) */
	1	/* pSCell(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_refServCellIndicator_specs_21 = {
	asn_MAP_NR_refServCellIndicator_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_refServCellIndicator_enum2value_21,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_refServCellIndicator_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_refServCellIndicator_21 = {
	"refServCellIndicator",
	"refServCellIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_refServCellIndicator_tags_21,
	sizeof(asn_DEF_NR_refServCellIndicator_tags_21)
		/sizeof(asn_DEF_NR_refServCellIndicator_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_refServCellIndicator_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_refServCellIndicator_tags_21)
		/sizeof(asn_DEF_NR_refServCellIndicator_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_NR_refServCellIndicator_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_refServCellIndicator_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_20[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_GapConfig__ext1, refServCellIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_refServCellIndicator_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refServCellIndicator"
		},
};
static const int asn_MAP_NR_ext1_oms_20[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* refServCellIndicator */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_20 = {
	sizeof(struct NR_GapConfig__ext1),
	offsetof(struct NR_GapConfig__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_20,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_20 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_20,
	sizeof(asn_DEF_NR_ext1_tags_20)
		/sizeof(asn_DEF_NR_ext1_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_20)
		/sizeof(asn_DEF_NR_ext1_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_20,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_25[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_GapConfig__ext2, refFR2ServCellAsyncCA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refFR2ServCellAsyncCA-r16"
		},
};
static const int asn_MAP_NR_ext2_oms_25[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* refFR2ServCellAsyncCA-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_25 = {
	sizeof(struct NR_GapConfig__ext2),
	offsetof(struct NR_GapConfig__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_25,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_25,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_25 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_25,
	sizeof(asn_DEF_NR_ext2_tags_25)
		/sizeof(asn_DEF_NR_ext2_tags_25[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_25,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_25)
		/sizeof(asn_DEF_NR_ext2_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext2_25,
	1,	/* Elements count */
	&asn_SPC_NR_ext2_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_GapConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig, gapOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_gapOffset_constr_2,  memb_NR_gapOffset_constraint_1 },
		0, 0, /* No default value */
		"gapOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig, mgl),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgl_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig, mgrp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgrp_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgrp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig, mgta),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgta_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mgta"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_GapConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_GapConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext2_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_NR_GapConfig_oms_1[] = { 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_GapConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_GapConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mgl */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mgrp */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mgta */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_GapConfig_specs_1 = {
	sizeof(struct NR_GapConfig),
	offsetof(struct NR_GapConfig, _asn_ctx),
	asn_MAP_NR_GapConfig_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_GapConfig_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_GapConfig = {
	"GapConfig",
	"GapConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_GapConfig_tags_1,
	sizeof(asn_DEF_NR_GapConfig_tags_1)
		/sizeof(asn_DEF_NR_GapConfig_tags_1[0]), /* 1 */
	asn_DEF_NR_GapConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_GapConfig_tags_1)
		/sizeof(asn_DEF_NR_GapConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_GapConfig_1,
	6,	/* Elements count */
	&asn_SPC_NR_GapConfig_specs_1	/* Additional specs */
};

