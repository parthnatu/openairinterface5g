/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_FailureReportSCG-EUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_failureType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_failureType_value2enum_2[] = {
	{ 0,	11,	"t313-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	17,	"scg-ChangeFailure" },
	{ 4,	18,	"scg-lbtFailure-r16" },
	{ 5,	30,	"beamFailureRecoveryFailure-r16" },
	{ 6,	15,	"t312-Expiry-r16" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_NR_failureType_enum2value_2[] = {
	5,	/* beamFailureRecoveryFailure-r16(5) */
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	3,	/* scg-ChangeFailure(3) */
	4,	/* scg-lbtFailure-r16(4) */
	7,	/* spare(7) */
	6,	/* t312-Expiry-r16(6) */
	0	/* t313-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_failureType_specs_2 = {
	asn_MAP_NR_failureType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_failureType_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_failureType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failureType_2 = {
	"failureType",
	"failureType",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_failureType_tags_2,
	sizeof(asn_DEF_NR_failureType_tags_2)
		/sizeof(asn_DEF_NR_failureType_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_failureType_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_failureType_tags_2)
		/sizeof(asn_DEF_NR_failureType_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_failureType_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_failureType_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_FailureReportSCG_EUTRA__ext1, locationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_LocationInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* locationInfo-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_14 = {
	sizeof(struct NR_FailureReportSCG_EUTRA__ext1),
	offsetof(struct NR_FailureReportSCG_EUTRA__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_14,
	sizeof(asn_DEF_NR_ext1_tags_14)
		/sizeof(asn_DEF_NR_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_14)
		/sizeof(asn_DEF_NR_ext1_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_14,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_FailureReportSCG_EUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_FailureReportSCG_EUTRA, failureType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_failureType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_FailureReportSCG_EUTRA, measResultFreqListMRDC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultFreqListFailMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFreqListMRDC"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_FailureReportSCG_EUTRA, measResultSCG_FailureMRDC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCG-FailureMRDC"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FailureReportSCG_EUTRA, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext1_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_FailureReportSCG_EUTRA_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_FailureReportSCG_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_FailureReportSCG_EUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultFreqListMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultSCG-FailureMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_FailureReportSCG_EUTRA_specs_1 = {
	sizeof(struct NR_FailureReportSCG_EUTRA),
	offsetof(struct NR_FailureReportSCG_EUTRA, _asn_ctx),
	asn_MAP_NR_FailureReportSCG_EUTRA_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_FailureReportSCG_EUTRA_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_FailureReportSCG_EUTRA = {
	"FailureReportSCG-EUTRA",
	"FailureReportSCG-EUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_FailureReportSCG_EUTRA_tags_1,
	sizeof(asn_DEF_NR_FailureReportSCG_EUTRA_tags_1)
		/sizeof(asn_DEF_NR_FailureReportSCG_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_NR_FailureReportSCG_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_FailureReportSCG_EUTRA_tags_1)
		/sizeof(asn_DEF_NR_FailureReportSCG_EUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_FailureReportSCG_EUTRA_1,
	4,	/* Elements count */
	&asn_SPC_NR_FailureReportSCG_EUTRA_specs_1	/* Additional specs */
};

