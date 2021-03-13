/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_DummyC.h"

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
memb_NR_maxNumberResources_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_totalNumberTxPorts_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_maxNumberCSI_RS_PerResourceSet_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_maxNumberTxPortsPerResource_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_supportedCodebookMode_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_supportedNumberPanels_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxNumberResources_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_totalNumberTxPorts_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxNumberCSI_RS_PerResourceSet_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_maxNumberTxPortsPerResource_value2enum_2[] = {
	{ 0,	2,	"p8" },
	{ 1,	3,	"p16" },
	{ 2,	3,	"p32" }
};
static const unsigned int asn_MAP_NR_maxNumberTxPortsPerResource_enum2value_2[] = {
	1,	/* p16(1) */
	2,	/* p32(2) */
	0	/* p8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxNumberTxPortsPerResource_specs_2 = {
	asn_MAP_NR_maxNumberTxPortsPerResource_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxNumberTxPortsPerResource_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxNumberTxPortsPerResource_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxNumberTxPortsPerResource_2 = {
	"maxNumberTxPortsPerResource",
	"maxNumberTxPortsPerResource",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxNumberTxPortsPerResource_tags_2,
	sizeof(asn_DEF_NR_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_NR_maxNumberTxPortsPerResource_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_maxNumberTxPortsPerResource_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_maxNumberTxPortsPerResource_tags_2)
		/sizeof(asn_DEF_NR_maxNumberTxPortsPerResource_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_maxNumberTxPortsPerResource_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxNumberTxPortsPerResource_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_supportedCodebookMode_value2enum_8[] = {
	{ 0,	5,	"mode1" },
	{ 1,	5,	"mode2" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_NR_supportedCodebookMode_enum2value_8[] = {
	2,	/* both(2) */
	0,	/* mode1(0) */
	1	/* mode2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_supportedCodebookMode_specs_8 = {
	asn_MAP_NR_supportedCodebookMode_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_supportedCodebookMode_enum2value_8,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_supportedCodebookMode_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedCodebookMode_8 = {
	"supportedCodebookMode",
	"supportedCodebookMode",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_supportedCodebookMode_tags_8,
	sizeof(asn_DEF_NR_supportedCodebookMode_tags_8)
		/sizeof(asn_DEF_NR_supportedCodebookMode_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_supportedCodebookMode_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_supportedCodebookMode_tags_8)
		/sizeof(asn_DEF_NR_supportedCodebookMode_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_supportedCodebookMode_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_supportedCodebookMode_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_supportedNumberPanels_value2enum_12[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_NR_supportedNumberPanels_enum2value_12[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_supportedNumberPanels_specs_12 = {
	asn_MAP_NR_supportedNumberPanels_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_supportedNumberPanels_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_supportedNumberPanels_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedNumberPanels_12 = {
	"supportedNumberPanels",
	"supportedNumberPanels",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_supportedNumberPanels_tags_12,
	sizeof(asn_DEF_NR_supportedNumberPanels_tags_12)
		/sizeof(asn_DEF_NR_supportedNumberPanels_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_supportedNumberPanels_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_supportedNumberPanels_tags_12)
		/sizeof(asn_DEF_NR_supportedNumberPanels_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_supportedNumberPanels_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_supportedNumberPanels_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DummyC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, maxNumberTxPortsPerResource),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxNumberTxPortsPerResource_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberTxPortsPerResource"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, maxNumberResources),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxNumberResources_constr_6,  memb_NR_maxNumberResources_constraint_1 },
		0, 0, /* No default value */
		"maxNumberResources"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, totalNumberTxPorts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_totalNumberTxPorts_constr_7,  memb_NR_totalNumberTxPorts_constraint_1 },
		0, 0, /* No default value */
		"totalNumberTxPorts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, supportedCodebookMode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_supportedCodebookMode_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCodebookMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, supportedNumberPanels),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_supportedNumberPanels_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedNumberPanels"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DummyC, maxNumberCSI_RS_PerResourceSet),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxNumberCSI_RS_PerResourceSet_constr_15,  memb_NR_maxNumberCSI_RS_PerResourceSet_constraint_1 },
		0, 0, /* No default value */
		"maxNumberCSI-RS-PerResourceSet"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_DummyC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DummyC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberTxPortsPerResource */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberResources */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* totalNumberTxPorts */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supportedCodebookMode */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* supportedNumberPanels */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* maxNumberCSI-RS-PerResourceSet */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DummyC_specs_1 = {
	sizeof(struct NR_DummyC),
	offsetof(struct NR_DummyC, _asn_ctx),
	asn_MAP_NR_DummyC_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DummyC = {
	"DummyC",
	"DummyC",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DummyC_tags_1,
	sizeof(asn_DEF_NR_DummyC_tags_1)
		/sizeof(asn_DEF_NR_DummyC_tags_1[0]), /* 1 */
	asn_DEF_NR_DummyC_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DummyC_tags_1)
		/sizeof(asn_DEF_NR_DummyC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_DummyC_1,
	6,	/* Elements count */
	&asn_SPC_NR_DummyC_specs_1	/* Additional specs */
};

