/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SlotFormatIndicator.h"

static int
memb_NR_availableRB_SetsToAddModList_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_NR_availableRB_SetsToRelease_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_NR_searchSpaceSwitchTriggerToAddModList_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
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
memb_NR_searchSpaceSwitchTriggerToReleaseList_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
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
memb_NR_co_DurationsPerCellToAddModList_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_NR_co_DurationsPerCellToReleaseList_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_NR_dci_PayloadSize_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
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
memb_NR_slotFormatCombToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
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
memb_NR_slotFormatCombToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_availableRB_SetsToAddModList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_availableRB_SetsToRelease_r16_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_searchSpaceSwitchTriggerToAddModList_r16_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_searchSpaceSwitchTriggerToReleaseList_r16_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_co_DurationsPerCellToAddModList_r16_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_co_DurationsPerCellToReleaseList_r16_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_availableRB_SetsToAddModList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_availableRB_SetsToRelease_r16_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_searchSpaceSwitchTriggerToAddModList_r16_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_searchSpaceSwitchTriggerToReleaseList_r16_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_co_DurationsPerCellToAddModList_r16_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_co_DurationsPerCellToReleaseList_r16_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_dci_PayloadSize_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_slotFormatCombToAddModList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SlotFormatCombinationsPerCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_slotFormatCombToAddModList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_slotFormatCombToAddModList_specs_4 = {
	sizeof(struct NR_SlotFormatIndicator__slotFormatCombToAddModList),
	offsetof(struct NR_SlotFormatIndicator__slotFormatCombToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_slotFormatCombToAddModList_4 = {
	"slotFormatCombToAddModList",
	"slotFormatCombToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_slotFormatCombToAddModList_tags_4,
	sizeof(asn_DEF_NR_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_NR_slotFormatCombToAddModList_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_slotFormatCombToAddModList_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_NR_slotFormatCombToAddModList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_slotFormatCombToAddModList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_slotFormatCombToAddModList_4,
	1,	/* Single element */
	&asn_SPC_NR_slotFormatCombToAddModList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_slotFormatCombToReleaseList_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_slotFormatCombToReleaseList_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_slotFormatCombToReleaseList_specs_6 = {
	sizeof(struct NR_SlotFormatIndicator__slotFormatCombToReleaseList),
	offsetof(struct NR_SlotFormatIndicator__slotFormatCombToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_slotFormatCombToReleaseList_6 = {
	"slotFormatCombToReleaseList",
	"slotFormatCombToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_slotFormatCombToReleaseList_tags_6,
	sizeof(asn_DEF_NR_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_NR_slotFormatCombToReleaseList_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_slotFormatCombToReleaseList_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_NR_slotFormatCombToReleaseList_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_slotFormatCombToReleaseList_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_NR_slotFormatCombToReleaseList_6,
	1,	/* Single element */
	&asn_SPC_NR_slotFormatCombToReleaseList_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_availableRB_SetsToAddModList_r16_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_AvailableRB_SetsPerCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_availableRB_SetsToAddModList_r16_specs_10 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__availableRB_SetsToAddModList_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__availableRB_SetsToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_availableRB_SetsToAddModList_r16_10 = {
	"availableRB-SetsToAddModList-r16",
	"availableRB-SetsToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10,
	sizeof(asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10)
		/sizeof(asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10)
		/sizeof(asn_DEF_NR_availableRB_SetsToAddModList_r16_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_NR_availableRB_SetsToAddModList_r16_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_NR_availableRB_SetsToAddModList_r16_10,
	1,	/* Single element */
	&asn_SPC_NR_availableRB_SetsToAddModList_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_availableRB_SetsToRelease_r16_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_availableRB_SetsToRelease_r16_specs_12 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__availableRB_SetsToRelease_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__availableRB_SetsToRelease_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_availableRB_SetsToRelease_r16_12 = {
	"availableRB-SetsToRelease-r16",
	"availableRB-SetsToRelease-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12,
	sizeof(asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12)
		/sizeof(asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12)
		/sizeof(asn_DEF_NR_availableRB_SetsToRelease_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_availableRB_SetsToRelease_r16_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_NR_availableRB_SetsToRelease_r16_12,
	1,	/* Single element */
	&asn_SPC_NR_availableRB_SetsToRelease_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_searchSpaceSwitchTriggerToAddModList_r16_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SearchSpaceSwitchTrigger_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_searchSpaceSwitchTriggerToAddModList_r16_specs_14 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToAddModList_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_14 = {
	"searchSpaceSwitchTriggerToAddModList-r16",
	"searchSpaceSwitchTriggerToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14,
	sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14)
		/sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14)
		/sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_NR_searchSpaceSwitchTriggerToAddModList_r16_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_NR_searchSpaceSwitchTriggerToAddModList_r16_14,
	1,	/* Single element */
	&asn_SPC_NR_searchSpaceSwitchTriggerToAddModList_r16_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_searchSpaceSwitchTriggerToReleaseList_r16_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_searchSpaceSwitchTriggerToReleaseList_r16_specs_16 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToReleaseList_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__searchSpaceSwitchTriggerToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_16 = {
	"searchSpaceSwitchTriggerToReleaseList-r16",
	"searchSpaceSwitchTriggerToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16,
	sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16)
		/sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16)
		/sizeof(asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_NR_searchSpaceSwitchTriggerToReleaseList_r16_constr_16, SEQUENCE_OF_constraint },
	asn_MBR_NR_searchSpaceSwitchTriggerToReleaseList_r16_16,
	1,	/* Single element */
	&asn_SPC_NR_searchSpaceSwitchTriggerToReleaseList_r16_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_co_DurationsPerCellToAddModList_r16_18[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_CO_DurationsPerCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_co_DurationsPerCellToAddModList_r16_specs_18 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToAddModList_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_co_DurationsPerCellToAddModList_r16_18 = {
	"co-DurationsPerCellToAddModList-r16",
	"co-DurationsPerCellToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18,
	sizeof(asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18)
		/sizeof(asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18)
		/sizeof(asn_DEF_NR_co_DurationsPerCellToAddModList_r16_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_NR_co_DurationsPerCellToAddModList_r16_constr_18, SEQUENCE_OF_constraint },
	asn_MBR_NR_co_DurationsPerCellToAddModList_r16_18,
	1,	/* Single element */
	&asn_SPC_NR_co_DurationsPerCellToAddModList_r16_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_co_DurationsPerCellToReleaseList_r16_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_co_DurationsPerCellToReleaseList_r16_specs_20 = {
	sizeof(struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToReleaseList_r16),
	offsetof(struct NR_SlotFormatIndicator__ext1__co_DurationsPerCellToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_20 = {
	"co-DurationsPerCellToReleaseList-r16",
	"co-DurationsPerCellToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20,
	sizeof(asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20)
		/sizeof(asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20)
		/sizeof(asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_NR_co_DurationsPerCellToReleaseList_r16_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_NR_co_DurationsPerCellToReleaseList_r16_20,
	1,	/* Single element */
	&asn_SPC_NR_co_DurationsPerCellToReleaseList_r16_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_9[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_SlotFormatIndicator__ext1, availableRB_SetsToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_availableRB_SetsToAddModList_r16_10,
		0,
		{ 0, &asn_PER_memb_NR_availableRB_SetsToAddModList_r16_constr_10,  memb_NR_availableRB_SetsToAddModList_r16_constraint_9 },
		0, 0, /* No default value */
		"availableRB-SetsToAddModList-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_SlotFormatIndicator__ext1, availableRB_SetsToRelease_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_availableRB_SetsToRelease_r16_12,
		0,
		{ 0, &asn_PER_memb_NR_availableRB_SetsToRelease_r16_constr_12,  memb_NR_availableRB_SetsToRelease_r16_constraint_9 },
		0, 0, /* No default value */
		"availableRB-SetsToRelease-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SlotFormatIndicator__ext1, searchSpaceSwitchTriggerToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_searchSpaceSwitchTriggerToAddModList_r16_14,
		0,
		{ 0, &asn_PER_memb_NR_searchSpaceSwitchTriggerToAddModList_r16_constr_14,  memb_NR_searchSpaceSwitchTriggerToAddModList_r16_constraint_9 },
		0, 0, /* No default value */
		"searchSpaceSwitchTriggerToAddModList-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SlotFormatIndicator__ext1, searchSpaceSwitchTriggerToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_searchSpaceSwitchTriggerToReleaseList_r16_16,
		0,
		{ 0, &asn_PER_memb_NR_searchSpaceSwitchTriggerToReleaseList_r16_constr_16,  memb_NR_searchSpaceSwitchTriggerToReleaseList_r16_constraint_9 },
		0, 0, /* No default value */
		"searchSpaceSwitchTriggerToReleaseList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SlotFormatIndicator__ext1, co_DurationsPerCellToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_co_DurationsPerCellToAddModList_r16_18,
		0,
		{ 0, &asn_PER_memb_NR_co_DurationsPerCellToAddModList_r16_constr_18,  memb_NR_co_DurationsPerCellToAddModList_r16_constraint_9 },
		0, 0, /* No default value */
		"co-DurationsPerCellToAddModList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SlotFormatIndicator__ext1, co_DurationsPerCellToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_co_DurationsPerCellToReleaseList_r16_20,
		0,
		{ 0, &asn_PER_memb_NR_co_DurationsPerCellToReleaseList_r16_constr_20,  memb_NR_co_DurationsPerCellToReleaseList_r16_constraint_9 },
		0, 0, /* No default value */
		"co-DurationsPerCellToReleaseList-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_9[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* availableRB-SetsToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* availableRB-SetsToRelease-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* searchSpaceSwitchTriggerToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* searchSpaceSwitchTriggerToReleaseList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* co-DurationsPerCellToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* co-DurationsPerCellToReleaseList-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_9 = {
	sizeof(struct NR_SlotFormatIndicator__ext1),
	offsetof(struct NR_SlotFormatIndicator__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_9,
	6,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_9,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_9,
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_9,
	6,	/* Elements count */
	&asn_SPC_NR_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SlotFormatIndicator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SlotFormatIndicator, sfi_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfi-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SlotFormatIndicator, dci_PayloadSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_dci_PayloadSize_constr_3,  memb_NR_dci_PayloadSize_constraint_1 },
		0, 0, /* No default value */
		"dci-PayloadSize"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SlotFormatIndicator, slotFormatCombToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_slotFormatCombToAddModList_4,
		0,
		{ 0, &asn_PER_memb_NR_slotFormatCombToAddModList_constr_4,  memb_NR_slotFormatCombToAddModList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToAddModList"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SlotFormatIndicator, slotFormatCombToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_slotFormatCombToReleaseList_6,
		0,
		{ 0, &asn_PER_memb_NR_slotFormatCombToReleaseList_constr_6,  memb_NR_slotFormatCombToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToReleaseList"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SlotFormatIndicator, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_SlotFormatIndicator_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_SlotFormatIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SlotFormatIndicator_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfi-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dci-PayloadSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slotFormatCombToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* slotFormatCombToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SlotFormatIndicator_specs_1 = {
	sizeof(struct NR_SlotFormatIndicator),
	offsetof(struct NR_SlotFormatIndicator, _asn_ctx),
	asn_MAP_NR_SlotFormatIndicator_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_SlotFormatIndicator_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SlotFormatIndicator = {
	"SlotFormatIndicator",
	"SlotFormatIndicator",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SlotFormatIndicator_tags_1,
	sizeof(asn_DEF_NR_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_NR_SlotFormatIndicator_tags_1[0]), /* 1 */
	asn_DEF_NR_SlotFormatIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_NR_SlotFormatIndicator_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SlotFormatIndicator_1,
	5,	/* Elements count */
	&asn_SPC_NR_SlotFormatIndicator_specs_1	/* Additional specs */
};

