/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_PUCCH-PowerControl.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_deltaF_PUCCH_f0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_deltaF_PUCCH_f1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_deltaF_PUCCH_f2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_deltaF_PUCCH_f3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_deltaF_PUCCH_f4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_p0_Set_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_NR_pathlossReferenceRSs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_NR_p0_Set_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_twoPUCCH_PC_AdjustmentStates_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_deltaF_PUCCH_f0_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_deltaF_PUCCH_f1_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_deltaF_PUCCH_f2_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_deltaF_PUCCH_f3_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_deltaF_PUCCH_f4_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_p0_Set_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_p0_Set_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_P0_PUCCH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_p0_Set_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_p0_Set_specs_7 = {
	sizeof(struct NR_PUCCH_PowerControl__p0_Set),
	offsetof(struct NR_PUCCH_PowerControl__p0_Set, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_p0_Set_7 = {
	"p0-Set",
	"p0-Set",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_p0_Set_tags_7,
	sizeof(asn_DEF_NR_p0_Set_tags_7)
		/sizeof(asn_DEF_NR_p0_Set_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_p0_Set_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_p0_Set_tags_7)
		/sizeof(asn_DEF_NR_p0_Set_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_NR_p0_Set_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_NR_p0_Set_7,
	1,	/* Single element */
	&asn_SPC_NR_p0_Set_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_pathlossReferenceRSs_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_PUCCH_PathlossReferenceRS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_pathlossReferenceRSs_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_pathlossReferenceRSs_specs_9 = {
	sizeof(struct NR_PUCCH_PowerControl__pathlossReferenceRSs),
	offsetof(struct NR_PUCCH_PowerControl__pathlossReferenceRSs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pathlossReferenceRSs_9 = {
	"pathlossReferenceRSs",
	"pathlossReferenceRSs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_pathlossReferenceRSs_tags_9,
	sizeof(asn_DEF_NR_pathlossReferenceRSs_tags_9)
		/sizeof(asn_DEF_NR_pathlossReferenceRSs_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_pathlossReferenceRSs_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_pathlossReferenceRSs_tags_9)
		/sizeof(asn_DEF_NR_pathlossReferenceRSs_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_NR_pathlossReferenceRSs_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_NR_pathlossReferenceRSs_9,
	1,	/* Single element */
	&asn_SPC_NR_pathlossReferenceRSs_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_twoPUCCH_PC_AdjustmentStates_value2enum_11[] = {
	{ 0,	9,	"twoStates" }
};
static const unsigned int asn_MAP_NR_twoPUCCH_PC_AdjustmentStates_enum2value_11[] = {
	0	/* twoStates(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_twoPUCCH_PC_AdjustmentStates_specs_11 = {
	asn_MAP_NR_twoPUCCH_PC_AdjustmentStates_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_twoPUCCH_PC_AdjustmentStates_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_11 = {
	"twoPUCCH-PC-AdjustmentStates",
	"twoPUCCH-PC-AdjustmentStates",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11,
	sizeof(asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11)
		/sizeof(asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11)
		/sizeof(asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_NR_twoPUCCH_PC_AdjustmentStates_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_twoPUCCH_PC_AdjustmentStates_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PUCCH_PowerControl__ext1, pathlossReferenceRSs_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PathlossReferenceRSs_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathlossReferenceRSs-v1610"
		},
};
static const int asn_MAP_NR_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pathlossReferenceRSs-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_14 = {
	sizeof(struct NR_PUCCH_PowerControl__ext1),
	offsetof(struct NR_PUCCH_PowerControl__ext1, _asn_ctx),
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

asn_TYPE_member_t asn_MBR_NR_PUCCH_PowerControl_1[] = {
	{ ATF_POINTER, 9, offsetof(struct NR_PUCCH_PowerControl, deltaF_PUCCH_f0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_deltaF_PUCCH_f0_constr_2,  memb_NR_deltaF_PUCCH_f0_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f0"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_PUCCH_PowerControl, deltaF_PUCCH_f1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_deltaF_PUCCH_f1_constr_3,  memb_NR_deltaF_PUCCH_f1_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f1"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_PUCCH_PowerControl, deltaF_PUCCH_f2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_deltaF_PUCCH_f2_constr_4,  memb_NR_deltaF_PUCCH_f2_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f2"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_PUCCH_PowerControl, deltaF_PUCCH_f3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_deltaF_PUCCH_f3_constr_5,  memb_NR_deltaF_PUCCH_f3_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f3"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_PUCCH_PowerControl, deltaF_PUCCH_f4),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_deltaF_PUCCH_f4_constr_6,  memb_NR_deltaF_PUCCH_f4_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f4"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_PUCCH_PowerControl, p0_Set),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_p0_Set_7,
		0,
		{ 0, &asn_PER_memb_NR_p0_Set_constr_7,  memb_NR_p0_Set_constraint_1 },
		0, 0, /* No default value */
		"p0-Set"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PUCCH_PowerControl, pathlossReferenceRSs),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_pathlossReferenceRSs_9,
		0,
		{ 0, &asn_PER_memb_NR_pathlossReferenceRSs_constr_9,  memb_NR_pathlossReferenceRSs_constraint_1 },
		0, 0, /* No default value */
		"pathlossReferenceRSs"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PUCCH_PowerControl, twoPUCCH_PC_AdjustmentStates),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_twoPUCCH_PC_AdjustmentStates_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoPUCCH-PC-AdjustmentStates"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PUCCH_PowerControl, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_NR_ext1_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_PUCCH_PowerControl_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_NR_PUCCH_PowerControl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PUCCH_PowerControl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaF-PUCCH-f0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaF-PUCCH-f1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaF-PUCCH-f2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* deltaF-PUCCH-f3 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deltaF-PUCCH-f4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p0-Set */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pathlossReferenceRSs */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* twoPUCCH-PC-AdjustmentStates */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_PowerControl_specs_1 = {
	sizeof(struct NR_PUCCH_PowerControl),
	offsetof(struct NR_PUCCH_PowerControl, _asn_ctx),
	asn_MAP_NR_PUCCH_PowerControl_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_NR_PUCCH_PowerControl_oms_1,	/* Optional members */
	8, 1,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_PowerControl = {
	"PUCCH-PowerControl",
	"PUCCH-PowerControl",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PUCCH_PowerControl_tags_1,
	sizeof(asn_DEF_NR_PUCCH_PowerControl_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_PowerControl_tags_1[0]), /* 1 */
	asn_DEF_NR_PUCCH_PowerControl_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PUCCH_PowerControl_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_PowerControl_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_PUCCH_PowerControl_1,
	9,	/* Elements count */
	&asn_SPC_NR_PUCCH_PowerControl_specs_1	/* Additional specs */
};

