/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_RRCRelease-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_deprioritisationType_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_deprioritisationTimer_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_deprioritisationType_value2enum_6[] = {
	{ 0,	9,	"frequency" },
	{ 1,	2,	"nr" }
};
static const unsigned int asn_MAP_NR_deprioritisationType_enum2value_6[] = {
	0,	/* frequency(0) */
	1	/* nr(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_deprioritisationType_specs_6 = {
	asn_MAP_NR_deprioritisationType_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_deprioritisationType_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_deprioritisationType_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_deprioritisationType_6 = {
	"deprioritisationType",
	"deprioritisationType",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_deprioritisationType_tags_6,
	sizeof(asn_DEF_NR_deprioritisationType_tags_6)
		/sizeof(asn_DEF_NR_deprioritisationType_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_deprioritisationType_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_deprioritisationType_tags_6)
		/sizeof(asn_DEF_NR_deprioritisationType_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_deprioritisationType_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_deprioritisationType_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_deprioritisationTimer_value2enum_9[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min15" },
	{ 3,	5,	"min30" }
};
static const unsigned int asn_MAP_NR_deprioritisationTimer_enum2value_9[] = {
	1,	/* min10(1) */
	2,	/* min15(2) */
	3,	/* min30(3) */
	0	/* min5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_deprioritisationTimer_specs_9 = {
	asn_MAP_NR_deprioritisationTimer_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_deprioritisationTimer_enum2value_9,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_deprioritisationTimer_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_deprioritisationTimer_9 = {
	"deprioritisationTimer",
	"deprioritisationTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_deprioritisationTimer_tags_9,
	sizeof(asn_DEF_NR_deprioritisationTimer_tags_9)
		/sizeof(asn_DEF_NR_deprioritisationTimer_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_deprioritisationTimer_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_deprioritisationTimer_tags_9)
		/sizeof(asn_DEF_NR_deprioritisationTimer_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_NR_deprioritisationTimer_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_deprioritisationTimer_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_deprioritisationReq_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCRelease_IEs__deprioritisationReq, deprioritisationType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_deprioritisationType_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCRelease_IEs__deprioritisationReq, deprioritisationTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_deprioritisationTimer_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationTimer"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_deprioritisationReq_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_deprioritisationReq_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deprioritisationType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deprioritisationTimer */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_deprioritisationReq_specs_5 = {
	sizeof(struct NR_RRCRelease_IEs__deprioritisationReq),
	offsetof(struct NR_RRCRelease_IEs__deprioritisationReq, _asn_ctx),
	asn_MAP_NR_deprioritisationReq_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_deprioritisationReq_5 = {
	"deprioritisationReq",
	"deprioritisationReq",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_deprioritisationReq_tags_5,
	sizeof(asn_DEF_NR_deprioritisationReq_tags_5)
		/sizeof(asn_DEF_NR_deprioritisationReq_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_deprioritisationReq_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_deprioritisationReq_tags_5)
		/sizeof(asn_DEF_NR_deprioritisationReq_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_deprioritisationReq_5,
	2,	/* Elements count */
	&asn_SPC_NR_deprioritisationReq_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCRelease_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_RRCRelease_IEs, redirectedCarrierInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_RedirectedCarrierInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"redirectedCarrierInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_RRCRelease_IEs, cellReselectionPriorities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellReselectionPriorities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriorities"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RRCRelease_IEs, suspendConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SuspendConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"suspendConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RRCRelease_IEs, deprioritisationReq),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_deprioritisationReq_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationReq"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RRCRelease_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCRelease_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCRelease_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_RRCRelease_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_RRCRelease_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCRelease_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* redirectedCarrierInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriorities */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* suspendConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* deprioritisationReq */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCRelease_IEs_specs_1 = {
	sizeof(struct NR_RRCRelease_IEs),
	offsetof(struct NR_RRCRelease_IEs, _asn_ctx),
	asn_MAP_NR_RRCRelease_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_RRCRelease_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCRelease_IEs = {
	"RRCRelease-IEs",
	"RRCRelease-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCRelease_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCRelease_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCRelease_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCRelease_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCRelease_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCRelease_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RRCRelease_IEs_1,
	6,	/* Elements count */
	&asn_SPC_NR_RRCRelease_IEs_specs_1	/* Additional specs */
};

