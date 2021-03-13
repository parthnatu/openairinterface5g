/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_RadioLinkMonitoringConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_failureDetectionResourcesToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 10)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_failureDetectionResourcesToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 10)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_failureDetectionResourcesToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_failureDetectionResourcesToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_beamFailureInstanceMaxCount_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_beamFailureDetectionTimer_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_failureDetectionResourcesToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_failureDetectionResourcesToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (SIZE(1..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_failureDetectionResourcesToAddModList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_RadioLinkMonitoringRS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_failureDetectionResourcesToAddModList_specs_2 = {
	sizeof(struct NR_RadioLinkMonitoringConfig__failureDetectionResourcesToAddModList),
	offsetof(struct NR_RadioLinkMonitoringConfig__failureDetectionResourcesToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failureDetectionResourcesToAddModList_2 = {
	"failureDetectionResourcesToAddModList",
	"failureDetectionResourcesToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2,
	sizeof(asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2)
		/sizeof(asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2)
		/sizeof(asn_DEF_NR_failureDetectionResourcesToAddModList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_failureDetectionResourcesToAddModList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_failureDetectionResourcesToAddModList_2,
	1,	/* Single element */
	&asn_SPC_NR_failureDetectionResourcesToAddModList_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_failureDetectionResourcesToReleaseList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_RadioLinkMonitoringRS_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_failureDetectionResourcesToReleaseList_specs_4 = {
	sizeof(struct NR_RadioLinkMonitoringConfig__failureDetectionResourcesToReleaseList),
	offsetof(struct NR_RadioLinkMonitoringConfig__failureDetectionResourcesToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failureDetectionResourcesToReleaseList_4 = {
	"failureDetectionResourcesToReleaseList",
	"failureDetectionResourcesToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4,
	sizeof(asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4)
		/sizeof(asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4)
		/sizeof(asn_DEF_NR_failureDetectionResourcesToReleaseList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_failureDetectionResourcesToReleaseList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_failureDetectionResourcesToReleaseList_4,
	1,	/* Single element */
	&asn_SPC_NR_failureDetectionResourcesToReleaseList_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_beamFailureInstanceMaxCount_value2enum_6[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" }
};
static const unsigned int asn_MAP_NR_beamFailureInstanceMaxCount_enum2value_6[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_beamFailureInstanceMaxCount_specs_6 = {
	asn_MAP_NR_beamFailureInstanceMaxCount_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_beamFailureInstanceMaxCount_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_beamFailureInstanceMaxCount_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_beamFailureInstanceMaxCount_6 = {
	"beamFailureInstanceMaxCount",
	"beamFailureInstanceMaxCount",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_beamFailureInstanceMaxCount_tags_6,
	sizeof(asn_DEF_NR_beamFailureInstanceMaxCount_tags_6)
		/sizeof(asn_DEF_NR_beamFailureInstanceMaxCount_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_beamFailureInstanceMaxCount_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_beamFailureInstanceMaxCount_tags_6)
		/sizeof(asn_DEF_NR_beamFailureInstanceMaxCount_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_beamFailureInstanceMaxCount_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_beamFailureInstanceMaxCount_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_beamFailureDetectionTimer_value2enum_15[] = {
	{ 0,	5,	"pbfd1" },
	{ 1,	5,	"pbfd2" },
	{ 2,	5,	"pbfd3" },
	{ 3,	5,	"pbfd4" },
	{ 4,	5,	"pbfd5" },
	{ 5,	5,	"pbfd6" },
	{ 6,	5,	"pbfd8" },
	{ 7,	6,	"pbfd10" }
};
static const unsigned int asn_MAP_NR_beamFailureDetectionTimer_enum2value_15[] = {
	0,	/* pbfd1(0) */
	7,	/* pbfd10(7) */
	1,	/* pbfd2(1) */
	2,	/* pbfd3(2) */
	3,	/* pbfd4(3) */
	4,	/* pbfd5(4) */
	5,	/* pbfd6(5) */
	6	/* pbfd8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_beamFailureDetectionTimer_specs_15 = {
	asn_MAP_NR_beamFailureDetectionTimer_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_beamFailureDetectionTimer_enum2value_15,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_beamFailureDetectionTimer_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_beamFailureDetectionTimer_15 = {
	"beamFailureDetectionTimer",
	"beamFailureDetectionTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_beamFailureDetectionTimer_tags_15,
	sizeof(asn_DEF_NR_beamFailureDetectionTimer_tags_15)
		/sizeof(asn_DEF_NR_beamFailureDetectionTimer_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_beamFailureDetectionTimer_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_beamFailureDetectionTimer_tags_15)
		/sizeof(asn_DEF_NR_beamFailureDetectionTimer_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_NR_beamFailureDetectionTimer_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_beamFailureDetectionTimer_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RadioLinkMonitoringConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_RadioLinkMonitoringConfig, failureDetectionResourcesToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_failureDetectionResourcesToAddModList_2,
		0,
		{ 0, &asn_PER_memb_NR_failureDetectionResourcesToAddModList_constr_2,  memb_NR_failureDetectionResourcesToAddModList_constraint_1 },
		0, 0, /* No default value */
		"failureDetectionResourcesToAddModList"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RadioLinkMonitoringConfig, failureDetectionResourcesToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_failureDetectionResourcesToReleaseList_4,
		0,
		{ 0, &asn_PER_memb_NR_failureDetectionResourcesToReleaseList_constr_4,  memb_NR_failureDetectionResourcesToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"failureDetectionResourcesToReleaseList"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RadioLinkMonitoringConfig, beamFailureInstanceMaxCount),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_beamFailureInstanceMaxCount_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamFailureInstanceMaxCount"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RadioLinkMonitoringConfig, beamFailureDetectionTimer),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_beamFailureDetectionTimer_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamFailureDetectionTimer"
		},
};
static const int asn_MAP_NR_RadioLinkMonitoringConfig_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_RadioLinkMonitoringConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RadioLinkMonitoringConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureDetectionResourcesToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* failureDetectionResourcesToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* beamFailureInstanceMaxCount */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* beamFailureDetectionTimer */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RadioLinkMonitoringConfig_specs_1 = {
	sizeof(struct NR_RadioLinkMonitoringConfig),
	offsetof(struct NR_RadioLinkMonitoringConfig, _asn_ctx),
	asn_MAP_NR_RadioLinkMonitoringConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_RadioLinkMonitoringConfig_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RadioLinkMonitoringConfig = {
	"RadioLinkMonitoringConfig",
	"RadioLinkMonitoringConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RadioLinkMonitoringConfig_tags_1,
	sizeof(asn_DEF_NR_RadioLinkMonitoringConfig_tags_1)
		/sizeof(asn_DEF_NR_RadioLinkMonitoringConfig_tags_1[0]), /* 1 */
	asn_DEF_NR_RadioLinkMonitoringConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RadioLinkMonitoringConfig_tags_1)
		/sizeof(asn_DEF_NR_RadioLinkMonitoringConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RadioLinkMonitoringConfig_1,
	4,	/* Elements count */
	&asn_SPC_NR_RadioLinkMonitoringConfig_specs_1	/* Additional specs */
};

