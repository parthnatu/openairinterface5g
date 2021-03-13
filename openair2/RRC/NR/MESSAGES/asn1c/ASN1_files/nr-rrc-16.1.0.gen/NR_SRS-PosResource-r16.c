/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SRS-PosResource-r16.h"

static int
memb_NR_combOffset_n2_r16_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
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
memb_NR_cyclicShift_n2_r16_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_NR_combOffset_n4_16_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_NR_cyclicShift_n4_r16_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 11)) {
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
memb_NR_combOffset_n8_r16_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_NR_cyclicShift_n8_r16_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_startPosition_r16_constraint_14(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 13)) {
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
memb_NR_c_SRS_r16_constraint_23(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_slotOffset_r16_constraint_31(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_NR_freqDomainShift_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 268)) {
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
memb_NR_sequenceId_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_combOffset_n2_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_cyclicShift_n2_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_combOffset_n4_16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_cyclicShift_n4_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_combOffset_n8_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_cyclicShift_n8_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_transmissionComb_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_nrofSymbols_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_startPosition_r16_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_c_SRS_r16_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_groupOrSequenceHopping_r16_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_slotOffset_r16_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_resourceType_r16_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_freqDomainShift_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  268 }	/* (0..268) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sequenceId_r16_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_n2_r16_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n2_r16, combOffset_n2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_combOffset_n2_r16_constr_5,  memb_NR_combOffset_n2_r16_constraint_4 },
		0, 0, /* No default value */
		"combOffset-n2-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n2_r16, cyclicShift_n2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_cyclicShift_n2_r16_constr_6,  memb_NR_cyclicShift_n2_r16_constraint_4 },
		0, 0, /* No default value */
		"cyclicShift-n2-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_n2_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_n2_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* combOffset-n2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cyclicShift-n2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_n2_r16_specs_4 = {
	sizeof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n2_r16),
	offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n2_r16, _asn_ctx),
	asn_MAP_NR_n2_r16_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_n2_r16_4 = {
	"n2-r16",
	"n2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_n2_r16_tags_4,
	sizeof(asn_DEF_NR_n2_r16_tags_4)
		/sizeof(asn_DEF_NR_n2_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_n2_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_n2_r16_tags_4)
		/sizeof(asn_DEF_NR_n2_r16_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_n2_r16_4,
	2,	/* Elements count */
	&asn_SPC_NR_n2_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_n4_r16_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n4_r16, combOffset_n4_16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_combOffset_n4_16_constr_8,  memb_NR_combOffset_n4_16_constraint_7 },
		0, 0, /* No default value */
		"combOffset-n4-16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n4_r16, cyclicShift_n4_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_cyclicShift_n4_r16_constr_9,  memb_NR_cyclicShift_n4_r16_constraint_7 },
		0, 0, /* No default value */
		"cyclicShift-n4-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_n4_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_n4_r16_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* combOffset-n4-16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cyclicShift-n4-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_n4_r16_specs_7 = {
	sizeof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n4_r16),
	offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n4_r16, _asn_ctx),
	asn_MAP_NR_n4_r16_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_n4_r16_7 = {
	"n4-r16",
	"n4-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_n4_r16_tags_7,
	sizeof(asn_DEF_NR_n4_r16_tags_7)
		/sizeof(asn_DEF_NR_n4_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_n4_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_n4_r16_tags_7)
		/sizeof(asn_DEF_NR_n4_r16_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_n4_r16_7,
	2,	/* Elements count */
	&asn_SPC_NR_n4_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_n8_r16_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n8_r16, combOffset_n8_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_combOffset_n8_r16_constr_11,  memb_NR_combOffset_n8_r16_constraint_10 },
		0, 0, /* No default value */
		"combOffset-n8-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n8_r16, cyclicShift_n8_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_cyclicShift_n8_r16_constr_12,  memb_NR_cyclicShift_n8_r16_constraint_10 },
		0, 0, /* No default value */
		"cyclicShift-n8-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_n8_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_n8_r16_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* combOffset-n8-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cyclicShift-n8-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_n8_r16_specs_10 = {
	sizeof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n8_r16),
	offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16__n8_r16, _asn_ctx),
	asn_MAP_NR_n8_r16_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_n8_r16_10 = {
	"n8-r16",
	"n8-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_n8_r16_tags_10,
	sizeof(asn_DEF_NR_n8_r16_tags_10)
		/sizeof(asn_DEF_NR_n8_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_n8_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_n8_r16_tags_10)
		/sizeof(asn_DEF_NR_n8_r16_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_n8_r16_10,
	2,	/* Elements count */
	&asn_SPC_NR_n8_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_transmissionComb_r16_3[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16, choice.n2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_n2_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n2-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16, choice.n4_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_n4_r16_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n4-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16, choice.n8_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_n8_r16_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n8-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_transmissionComb_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n4-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* n8-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_transmissionComb_r16_specs_3 = {
	sizeof(struct NR_SRS_PosResource_r16__transmissionComb_r16),
	offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16, _asn_ctx),
	offsetof(struct NR_SRS_PosResource_r16__transmissionComb_r16, present),
	sizeof(((struct NR_SRS_PosResource_r16__transmissionComb_r16 *)0)->present),
	asn_MAP_NR_transmissionComb_r16_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_transmissionComb_r16_3 = {
	"transmissionComb-r16",
	"transmissionComb-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_transmissionComb_r16_constr_3, CHOICE_constraint },
	asn_MBR_NR_transmissionComb_r16_3,
	3,	/* Elements count */
	&asn_SPC_NR_transmissionComb_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_nrofSymbols_r16_value2enum_16[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n12" }
};
static const unsigned int asn_MAP_NR_nrofSymbols_r16_enum2value_16[] = {
	0,	/* n1(0) */
	4,	/* n12(4) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_nrofSymbols_r16_specs_16 = {
	asn_MAP_NR_nrofSymbols_r16_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_nrofSymbols_r16_enum2value_16,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_nrofSymbols_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nrofSymbols_r16_16 = {
	"nrofSymbols-r16",
	"nrofSymbols-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_nrofSymbols_r16_tags_16,
	sizeof(asn_DEF_NR_nrofSymbols_r16_tags_16)
		/sizeof(asn_DEF_NR_nrofSymbols_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_nrofSymbols_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_nrofSymbols_r16_tags_16)
		/sizeof(asn_DEF_NR_nrofSymbols_r16_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_NR_nrofSymbols_r16_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_nrofSymbols_r16_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_resourceMapping_r16_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__resourceMapping_r16, startPosition_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_startPosition_r16_constr_15,  memb_NR_startPosition_r16_constraint_14 },
		0, 0, /* No default value */
		"startPosition-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__resourceMapping_r16, nrofSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_nrofSymbols_r16_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrofSymbols-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_resourceMapping_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_resourceMapping_r16_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startPosition-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nrofSymbols-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_resourceMapping_r16_specs_14 = {
	sizeof(struct NR_SRS_PosResource_r16__resourceMapping_r16),
	offsetof(struct NR_SRS_PosResource_r16__resourceMapping_r16, _asn_ctx),
	asn_MAP_NR_resourceMapping_r16_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_resourceMapping_r16_14 = {
	"resourceMapping-r16",
	"resourceMapping-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_resourceMapping_r16_tags_14,
	sizeof(asn_DEF_NR_resourceMapping_r16_tags_14)
		/sizeof(asn_DEF_NR_resourceMapping_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_resourceMapping_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_resourceMapping_r16_tags_14)
		/sizeof(asn_DEF_NR_resourceMapping_r16_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_resourceMapping_r16_14,
	2,	/* Elements count */
	&asn_SPC_NR_resourceMapping_r16_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_freqHopping_r16_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__freqHopping_r16, c_SRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_c_SRS_r16_constr_24,  memb_NR_c_SRS_r16_constraint_23 },
		0, 0, /* No default value */
		"c-SRS-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_freqHopping_r16_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_freqHopping_r16_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* c-SRS-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_freqHopping_r16_specs_23 = {
	sizeof(struct NR_SRS_PosResource_r16__freqHopping_r16),
	offsetof(struct NR_SRS_PosResource_r16__freqHopping_r16, _asn_ctx),
	asn_MAP_NR_freqHopping_r16_tag2el_23,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_freqHopping_r16_23 = {
	"freqHopping-r16",
	"freqHopping-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_freqHopping_r16_tags_23,
	sizeof(asn_DEF_NR_freqHopping_r16_tags_23)
		/sizeof(asn_DEF_NR_freqHopping_r16_tags_23[0]) - 1, /* 1 */
	asn_DEF_NR_freqHopping_r16_tags_23,	/* Same as above */
	sizeof(asn_DEF_NR_freqHopping_r16_tags_23)
		/sizeof(asn_DEF_NR_freqHopping_r16_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_freqHopping_r16_23,
	1,	/* Elements count */
	&asn_SPC_NR_freqHopping_r16_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_groupOrSequenceHopping_r16_value2enum_26[] = {
	{ 0,	7,	"neither" },
	{ 1,	12,	"groupHopping" },
	{ 2,	15,	"sequenceHopping" }
};
static const unsigned int asn_MAP_NR_groupOrSequenceHopping_r16_enum2value_26[] = {
	1,	/* groupHopping(1) */
	0,	/* neither(0) */
	2	/* sequenceHopping(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_groupOrSequenceHopping_r16_specs_26 = {
	asn_MAP_NR_groupOrSequenceHopping_r16_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_groupOrSequenceHopping_r16_enum2value_26,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_groupOrSequenceHopping_r16_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_groupOrSequenceHopping_r16_26 = {
	"groupOrSequenceHopping-r16",
	"groupOrSequenceHopping-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_groupOrSequenceHopping_r16_tags_26,
	sizeof(asn_DEF_NR_groupOrSequenceHopping_r16_tags_26)
		/sizeof(asn_DEF_NR_groupOrSequenceHopping_r16_tags_26[0]) - 1, /* 1 */
	asn_DEF_NR_groupOrSequenceHopping_r16_tags_26,	/* Same as above */
	sizeof(asn_DEF_NR_groupOrSequenceHopping_r16_tags_26)
		/sizeof(asn_DEF_NR_groupOrSequenceHopping_r16_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_NR_groupOrSequenceHopping_r16_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_groupOrSequenceHopping_r16_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_aperiodic_r16_31[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__aperiodic_r16, slotOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_slotOffset_r16_constr_32,  memb_NR_slotOffset_r16_constraint_31 },
		0, 0, /* No default value */
		"slotOffset-r16"
		},
};
static const int asn_MAP_NR_aperiodic_r16_oms_31[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_aperiodic_r16_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_aperiodic_r16_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* slotOffset-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_aperiodic_r16_specs_31 = {
	sizeof(struct NR_SRS_PosResource_r16__resourceType_r16__aperiodic_r16),
	offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__aperiodic_r16, _asn_ctx),
	asn_MAP_NR_aperiodic_r16_tag2el_31,
	1,	/* Count of tags in the map */
	asn_MAP_NR_aperiodic_r16_oms_31,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_aperiodic_r16_31 = {
	"aperiodic-r16",
	"aperiodic-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_aperiodic_r16_tags_31,
	sizeof(asn_DEF_NR_aperiodic_r16_tags_31)
		/sizeof(asn_DEF_NR_aperiodic_r16_tags_31[0]) - 1, /* 1 */
	asn_DEF_NR_aperiodic_r16_tags_31,	/* Same as above */
	sizeof(asn_DEF_NR_aperiodic_r16_tags_31)
		/sizeof(asn_DEF_NR_aperiodic_r16_tags_31[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_aperiodic_r16_31,
	1,	/* Elements count */
	&asn_SPC_NR_aperiodic_r16_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_semi_persistent_r16_34[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__semi_persistent_r16, periodicityAndOffset_sp_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SRS_PeriodicityAndOffset_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset-sp-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_semi_persistent_r16_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_semi_persistent_r16_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* periodicityAndOffset-sp-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_semi_persistent_r16_specs_34 = {
	sizeof(struct NR_SRS_PosResource_r16__resourceType_r16__semi_persistent_r16),
	offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__semi_persistent_r16, _asn_ctx),
	asn_MAP_NR_semi_persistent_r16_tag2el_34,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_semi_persistent_r16_34 = {
	"semi-persistent-r16",
	"semi-persistent-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_semi_persistent_r16_tags_34,
	sizeof(asn_DEF_NR_semi_persistent_r16_tags_34)
		/sizeof(asn_DEF_NR_semi_persistent_r16_tags_34[0]) - 1, /* 1 */
	asn_DEF_NR_semi_persistent_r16_tags_34,	/* Same as above */
	sizeof(asn_DEF_NR_semi_persistent_r16_tags_34)
		/sizeof(asn_DEF_NR_semi_persistent_r16_tags_34[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_semi_persistent_r16_34,
	1,	/* Elements count */
	&asn_SPC_NR_semi_persistent_r16_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_periodic_r16_37[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__periodic_r16, periodicityAndOffset_p_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SRS_PeriodicityAndOffset_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndOffset-p-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_periodic_r16_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_periodic_r16_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* periodicityAndOffset-p-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_periodic_r16_specs_37 = {
	sizeof(struct NR_SRS_PosResource_r16__resourceType_r16__periodic_r16),
	offsetof(struct NR_SRS_PosResource_r16__resourceType_r16__periodic_r16, _asn_ctx),
	asn_MAP_NR_periodic_r16_tag2el_37,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_periodic_r16_37 = {
	"periodic-r16",
	"periodic-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_periodic_r16_tags_37,
	sizeof(asn_DEF_NR_periodic_r16_tags_37)
		/sizeof(asn_DEF_NR_periodic_r16_tags_37[0]) - 1, /* 1 */
	asn_DEF_NR_periodic_r16_tags_37,	/* Same as above */
	sizeof(asn_DEF_NR_periodic_r16_tags_37)
		/sizeof(asn_DEF_NR_periodic_r16_tags_37[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_periodic_r16_37,
	1,	/* Elements count */
	&asn_SPC_NR_periodic_r16_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_resourceType_r16_30[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16, choice.aperiodic_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_aperiodic_r16_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodic-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16, choice.semi_persistent_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_semi_persistent_r16_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semi-persistent-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_PosResource_r16__resourceType_r16, choice.periodic_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_periodic_r16_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodic-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_resourceType_r16_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodic-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* semi-persistent-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* periodic-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_resourceType_r16_specs_30 = {
	sizeof(struct NR_SRS_PosResource_r16__resourceType_r16),
	offsetof(struct NR_SRS_PosResource_r16__resourceType_r16, _asn_ctx),
	offsetof(struct NR_SRS_PosResource_r16__resourceType_r16, present),
	sizeof(((struct NR_SRS_PosResource_r16__resourceType_r16 *)0)->present),
	asn_MAP_NR_resourceType_r16_tag2el_30,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_resourceType_r16_30 = {
	"resourceType-r16",
	"resourceType-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_resourceType_r16_constr_30, CHOICE_constraint },
	asn_MBR_NR_resourceType_r16_30,
	3,	/* Elements count */
	&asn_SPC_NR_resourceType_r16_specs_30	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SRS_PosResource_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, srs_PosResourceId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SRS_PosResourceId_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-PosResourceId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, transmissionComb_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_transmissionComb_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionComb-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, resourceMapping_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_resourceMapping_r16_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceMapping-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, freqDomainShift_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_freqDomainShift_r16_constr_22,  memb_NR_freqDomainShift_r16_constraint_1 },
		0, 0, /* No default value */
		"freqDomainShift-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, freqHopping_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_freqHopping_r16_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqHopping-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, groupOrSequenceHopping_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_groupOrSequenceHopping_r16_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupOrSequenceHopping-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, resourceType_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_resourceType_r16_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceType-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_PosResource_r16, sequenceId_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sequenceId_r16_constr_40,  memb_NR_sequenceId_r16_constraint_1 },
		0, 0, /* No default value */
		"sequenceId-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_PosResource_r16, spatialRelationInfoPos_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SRS_SpatialRelationInfoPos_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spatialRelationInfoPos-r16"
		},
};
static const int asn_MAP_NR_SRS_PosResource_r16_oms_1[] = { 8 };
static const ber_tlv_tag_t asn_DEF_NR_SRS_PosResource_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SRS_PosResource_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-PosResourceId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transmissionComb-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceMapping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqDomainShift-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* freqHopping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* groupOrSequenceHopping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* resourceType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sequenceId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* spatialRelationInfoPos-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_PosResource_r16_specs_1 = {
	sizeof(struct NR_SRS_PosResource_r16),
	offsetof(struct NR_SRS_PosResource_r16, _asn_ctx),
	asn_MAP_NR_SRS_PosResource_r16_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_NR_SRS_PosResource_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SRS_PosResource_r16 = {
	"SRS-PosResource-r16",
	"SRS-PosResource-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SRS_PosResource_r16_tags_1,
	sizeof(asn_DEF_NR_SRS_PosResource_r16_tags_1)
		/sizeof(asn_DEF_NR_SRS_PosResource_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SRS_PosResource_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SRS_PosResource_r16_tags_1)
		/sizeof(asn_DEF_NR_SRS_PosResource_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SRS_PosResource_r16_1,
	9,	/* Elements count */
	&asn_SPC_NR_SRS_PosResource_r16_specs_1	/* Additional specs */
};

