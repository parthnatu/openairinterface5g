/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_UEInformationRequest-r16-IEs.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_idleModeMeasurementReq_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_logMeasReportReq_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_connEstFailReportReq_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_ra_ReportReq_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_rlf_ReportReq_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_mobilityHistoryReportReq_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_idleModeMeasurementReq_r16_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_idleModeMeasurementReq_r16_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_idleModeMeasurementReq_r16_specs_2 = {
	asn_MAP_NR_idleModeMeasurementReq_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_idleModeMeasurementReq_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_idleModeMeasurementReq_r16_2 = {
	"idleModeMeasurementReq-r16",
	"idleModeMeasurementReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_idleModeMeasurementReq_r16_tags_2,
	sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2)
		/sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_idleModeMeasurementReq_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2)
		/sizeof(asn_DEF_NR_idleModeMeasurementReq_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_idleModeMeasurementReq_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_idleModeMeasurementReq_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_logMeasReportReq_r16_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_logMeasReportReq_r16_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_logMeasReportReq_r16_specs_4 = {
	asn_MAP_NR_logMeasReportReq_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_logMeasReportReq_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_logMeasReportReq_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_logMeasReportReq_r16_4 = {
	"logMeasReportReq-r16",
	"logMeasReportReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_logMeasReportReq_r16_tags_4,
	sizeof(asn_DEF_NR_logMeasReportReq_r16_tags_4)
		/sizeof(asn_DEF_NR_logMeasReportReq_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_logMeasReportReq_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_logMeasReportReq_r16_tags_4)
		/sizeof(asn_DEF_NR_logMeasReportReq_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_logMeasReportReq_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_logMeasReportReq_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_connEstFailReportReq_r16_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_connEstFailReportReq_r16_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_connEstFailReportReq_r16_specs_6 = {
	asn_MAP_NR_connEstFailReportReq_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_connEstFailReportReq_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_connEstFailReportReq_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_connEstFailReportReq_r16_6 = {
	"connEstFailReportReq-r16",
	"connEstFailReportReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_connEstFailReportReq_r16_tags_6,
	sizeof(asn_DEF_NR_connEstFailReportReq_r16_tags_6)
		/sizeof(asn_DEF_NR_connEstFailReportReq_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_connEstFailReportReq_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_connEstFailReportReq_r16_tags_6)
		/sizeof(asn_DEF_NR_connEstFailReportReq_r16_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_connEstFailReportReq_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_connEstFailReportReq_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_ra_ReportReq_r16_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_ra_ReportReq_r16_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ra_ReportReq_r16_specs_8 = {
	asn_MAP_NR_ra_ReportReq_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ra_ReportReq_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ra_ReportReq_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ra_ReportReq_r16_8 = {
	"ra-ReportReq-r16",
	"ra-ReportReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ra_ReportReq_r16_tags_8,
	sizeof(asn_DEF_NR_ra_ReportReq_r16_tags_8)
		/sizeof(asn_DEF_NR_ra_ReportReq_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_ra_ReportReq_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_ra_ReportReq_r16_tags_8)
		/sizeof(asn_DEF_NR_ra_ReportReq_r16_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_ra_ReportReq_r16_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ra_ReportReq_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_rlf_ReportReq_r16_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_rlf_ReportReq_r16_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_rlf_ReportReq_r16_specs_10 = {
	asn_MAP_NR_rlf_ReportReq_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_rlf_ReportReq_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_rlf_ReportReq_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_rlf_ReportReq_r16_10 = {
	"rlf-ReportReq-r16",
	"rlf-ReportReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_rlf_ReportReq_r16_tags_10,
	sizeof(asn_DEF_NR_rlf_ReportReq_r16_tags_10)
		/sizeof(asn_DEF_NR_rlf_ReportReq_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_rlf_ReportReq_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_rlf_ReportReq_r16_tags_10)
		/sizeof(asn_DEF_NR_rlf_ReportReq_r16_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_NR_rlf_ReportReq_r16_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_rlf_ReportReq_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mobilityHistoryReportReq_r16_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_mobilityHistoryReportReq_r16_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mobilityHistoryReportReq_r16_specs_12 = {
	asn_MAP_NR_mobilityHistoryReportReq_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mobilityHistoryReportReq_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mobilityHistoryReportReq_r16_12 = {
	"mobilityHistoryReportReq-r16",
	"mobilityHistoryReportReq-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12,
	sizeof(asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12)
		/sizeof(asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12)
		/sizeof(asn_DEF_NR_mobilityHistoryReportReq_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_mobilityHistoryReportReq_r16_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mobilityHistoryReportReq_r16_specs_12	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_15 = {
	sizeof(struct NR_UEInformationRequest_r16_IEs__nonCriticalExtension),
	offsetof(struct NR_UEInformationRequest_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_15 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_15,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_15)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_15)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UEInformationRequest_r16_IEs_1[] = {
	{ ATF_POINTER, 8, offsetof(struct NR_UEInformationRequest_r16_IEs, idleModeMeasurementReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_idleModeMeasurementReq_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleModeMeasurementReq-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_UEInformationRequest_r16_IEs, logMeasReportReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_logMeasReportReq_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasReportReq-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_UEInformationRequest_r16_IEs, connEstFailReportReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_connEstFailReportReq_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connEstFailReportReq-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_UEInformationRequest_r16_IEs, ra_ReportReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ra_ReportReq_r16_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-ReportReq-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_UEInformationRequest_r16_IEs, rlf_ReportReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_rlf_ReportReq_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-ReportReq-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_UEInformationRequest_r16_IEs, mobilityHistoryReportReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mobilityHistoryReportReq_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityHistoryReportReq-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UEInformationRequest_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UEInformationRequest_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_UEInformationRequest_r16_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UEInformationRequest_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleModeMeasurementReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logMeasReportReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* connEstFailReportReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ra-ReportReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rlf-ReportReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mobilityHistoryReportReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UEInformationRequest_r16_IEs_specs_1 = {
	sizeof(struct NR_UEInformationRequest_r16_IEs),
	offsetof(struct NR_UEInformationRequest_r16_IEs, _asn_ctx),
	asn_MAP_NR_UEInformationRequest_r16_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NR_UEInformationRequest_r16_IEs_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UEInformationRequest_r16_IEs = {
	"UEInformationRequest-r16-IEs",
	"UEInformationRequest-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1,
	sizeof(asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_UEInformationRequest_r16_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_UEInformationRequest_r16_IEs_1,
	8,	/* Elements count */
	&asn_SPC_NR_UEInformationRequest_r16_IEs_specs_1	/* Additional specs */
};

