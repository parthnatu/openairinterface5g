/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_TDD-UL-DL-ConfigDedicated.h"

static int
memb_NR_slotSpecificConfigurationsToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 320)) {
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
memb_NR_slotSpecificConfigurationsToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 320)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_slotSpecificConfigurationsToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  320 }	/* (SIZE(1..320)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_slotSpecificConfigurationsToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  320 }	/* (SIZE(1..320)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_slotSpecificConfigurationsToAddModList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  320 }	/* (SIZE(1..320)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_slotSpecificConfigurationsToReleaseList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  320 }	/* (SIZE(1..320)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_slotSpecificConfigurationsToAddModList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_TDD_UL_DL_SlotConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_slotSpecificConfigurationsToAddModList_specs_2 = {
	sizeof(struct NR_TDD_UL_DL_ConfigDedicated__slotSpecificConfigurationsToAddModList),
	offsetof(struct NR_TDD_UL_DL_ConfigDedicated__slotSpecificConfigurationsToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_slotSpecificConfigurationsToAddModList_2 = {
	"slotSpecificConfigurationsToAddModList",
	"slotSpecificConfigurationsToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2,
	sizeof(asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2)
		/sizeof(asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2)
		/sizeof(asn_DEF_NR_slotSpecificConfigurationsToAddModList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_slotSpecificConfigurationsToAddModList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_slotSpecificConfigurationsToAddModList_2,
	1,	/* Single element */
	&asn_SPC_NR_slotSpecificConfigurationsToAddModList_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_slotSpecificConfigurationsToReleaseList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_TDD_UL_DL_SlotIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_slotSpecificConfigurationsToReleaseList_specs_4 = {
	sizeof(struct NR_TDD_UL_DL_ConfigDedicated__slotSpecificConfigurationsToReleaseList),
	offsetof(struct NR_TDD_UL_DL_ConfigDedicated__slotSpecificConfigurationsToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_slotSpecificConfigurationsToReleaseList_4 = {
	"slotSpecificConfigurationsToReleaseList",
	"slotSpecificConfigurationsToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4,
	sizeof(asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4)
		/sizeof(asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4)
		/sizeof(asn_DEF_NR_slotSpecificConfigurationsToReleaseList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_slotSpecificConfigurationsToReleaseList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_slotSpecificConfigurationsToReleaseList_4,
	1,	/* Single element */
	&asn_SPC_NR_slotSpecificConfigurationsToReleaseList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_TDD_UL_DL_ConfigDedicated_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_TDD_UL_DL_ConfigDedicated, slotSpecificConfigurationsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_slotSpecificConfigurationsToAddModList_2,
		0,
		{ 0, &asn_PER_memb_NR_slotSpecificConfigurationsToAddModList_constr_2,  memb_NR_slotSpecificConfigurationsToAddModList_constraint_1 },
		0, 0, /* No default value */
		"slotSpecificConfigurationsToAddModList"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_TDD_UL_DL_ConfigDedicated, slotSpecificConfigurationsToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_slotSpecificConfigurationsToReleaseList_4,
		0,
		{ 0, &asn_PER_memb_NR_slotSpecificConfigurationsToReleaseList_constr_4,  memb_NR_slotSpecificConfigurationsToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"slotSpecificConfigurationsToReleaseList"
		},
};
static const int asn_MAP_NR_TDD_UL_DL_ConfigDedicated_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_TDD_UL_DL_ConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* slotSpecificConfigurationsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* slotSpecificConfigurationsToReleaseList */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_TDD_UL_DL_ConfigDedicated_specs_1 = {
	sizeof(struct NR_TDD_UL_DL_ConfigDedicated),
	offsetof(struct NR_TDD_UL_DL_ConfigDedicated, _asn_ctx),
	asn_MAP_NR_TDD_UL_DL_ConfigDedicated_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_TDD_UL_DL_ConfigDedicated_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_TDD_UL_DL_ConfigDedicated = {
	"TDD-UL-DL-ConfigDedicated",
	"TDD-UL-DL-ConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1,
	sizeof(asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_NR_TDD_UL_DL_ConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_TDD_UL_DL_ConfigDedicated_1,
	2,	/* Elements count */
	&asn_SPC_NR_TDD_UL_DL_ConfigDedicated_specs_1	/* Additional specs */
};

