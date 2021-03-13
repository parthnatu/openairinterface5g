/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_CodebookConfig-r16.h"

static int
memb_NR_two_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_NR_two_two_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 43)) {
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
memb_NR_four_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
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
memb_NR_three_two_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 59)) {
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
memb_NR_six_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 48)) {
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
memb_NR_four_two_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 75)) {
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
memb_NR_eight_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 64)) {
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
memb_NR_four_three_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 107)) {
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
memb_NR_six_two_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 107)) {
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
memb_NR_twelve_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 96)) {
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
memb_NR_four_four_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 139)) {
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
memb_NR_eight_two_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 139)) {
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
memb_NR_sixteen_one_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 128)) {
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
memb_NR_typeII_RI_Restriction_r16_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
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
memb_NR_typeII_PortSelectionRI_Restriction_r16_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
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
memb_NR_numberOfPMI_SubbandsPerCQI_Subband_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
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
memb_NR_paramCombination_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_NR_two_one_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_two_two_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  43,  43 }	/* (SIZE(43..43)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_four_one_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_three_two_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  59,  59 }	/* (SIZE(59..59)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_six_one_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  48,  48 }	/* (SIZE(48..48)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_four_two_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  75,  75 }	/* (SIZE(75..75)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_eight_one_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_four_three_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  107,  107 }	/* (SIZE(107..107)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_six_two_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  107,  107 }	/* (SIZE(107..107)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_twelve_one_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  96,  96 }	/* (SIZE(96..96)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_four_four_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  139,  139 }	/* (SIZE(139..139)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_eight_two_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  139,  139 }	/* (SIZE(139..139)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sixteen_one_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  128,  128 }	/* (SIZE(128..128)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_n1_n2_codebookSubsetRestriction_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  12 }	/* (0..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_typeII_RI_Restriction_r16_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_portSelectionSamplingSize_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_typeII_PortSelectionRI_Restriction_r16_constr_27 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_subType_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_numberOfPMI_SubbandsPerCQI_Subband_r16_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_paramCombination_r16_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_codebookType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_n1_n2_codebookSubsetRestriction_r16_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.two_one),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_two_one_constr_7,  memb_NR_two_one_constraint_6 },
		0, 0, /* No default value */
		"two-one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.two_two),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_two_two_constr_8,  memb_NR_two_two_constraint_6 },
		0, 0, /* No default value */
		"two-two"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.four_one),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_four_one_constr_9,  memb_NR_four_one_constraint_6 },
		0, 0, /* No default value */
		"four-one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.three_two),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_three_two_constr_10,  memb_NR_three_two_constraint_6 },
		0, 0, /* No default value */
		"three-two"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.six_one),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_six_one_constr_11,  memb_NR_six_one_constraint_6 },
		0, 0, /* No default value */
		"six-one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.four_two),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_four_two_constr_12,  memb_NR_four_two_constraint_6 },
		0, 0, /* No default value */
		"four-two"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.eight_one),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_eight_one_constr_13,  memb_NR_eight_one_constraint_6 },
		0, 0, /* No default value */
		"eight-one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.four_three),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_four_three_constr_14,  memb_NR_four_three_constraint_6 },
		0, 0, /* No default value */
		"four-three"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.six_two),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_six_two_constr_15,  memb_NR_six_two_constraint_6 },
		0, 0, /* No default value */
		"six-two"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.twelve_one),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_twelve_one_constr_16,  memb_NR_twelve_one_constraint_6 },
		0, 0, /* No default value */
		"twelve-one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.four_four),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_four_four_constr_17,  memb_NR_four_four_constraint_6 },
		0, 0, /* No default value */
		"four-four"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.eight_two),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_eight_two_constr_18,  memb_NR_eight_two_constraint_6 },
		0, 0, /* No default value */
		"eight-two"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, choice.sixteen_one),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_sixteen_one_constr_19,  memb_NR_sixteen_one_constraint_6 },
		0, 0, /* No default value */
		"sixteen-one"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_n1_n2_codebookSubsetRestriction_r16_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* two-one */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* two-two */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* four-one */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* three-two */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* six-one */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* four-two */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* eight-one */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* four-three */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* six-two */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* twelve-one */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* four-four */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* eight-two */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* sixteen-one */
};
static asn_CHOICE_specifics_t asn_SPC_NR_n1_n2_codebookSubsetRestriction_r16_specs_6 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, _asn_ctx),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16, present),
	sizeof(((struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16__n1_n2_codebookSubsetRestriction_r16 *)0)->present),
	asn_MAP_NR_n1_n2_codebookSubsetRestriction_r16_tag2el_6,
	13,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_n1_n2_codebookSubsetRestriction_r16_6 = {
	"n1-n2-codebookSubsetRestriction-r16",
	"n1-n2-codebookSubsetRestriction-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_n1_n2_codebookSubsetRestriction_r16_constr_6, CHOICE_constraint },
	asn_MBR_NR_n1_n2_codebookSubsetRestriction_r16_6,
	13,	/* Elements count */
	&asn_SPC_NR_n1_n2_codebookSubsetRestriction_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_typeII_r16_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16, n1_n2_codebookSubsetRestriction_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_n1_n2_codebookSubsetRestriction_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n1-n2-codebookSubsetRestriction-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16, typeII_RI_Restriction_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_typeII_RI_Restriction_r16_constr_20,  memb_NR_typeII_RI_Restriction_r16_constraint_5 },
		0, 0, /* No default value */
		"typeII-RI-Restriction-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_typeII_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_typeII_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n1-n2-codebookSubsetRestriction-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* typeII-RI-Restriction-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_typeII_r16_specs_5 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_r16, _asn_ctx),
	asn_MAP_NR_typeII_r16_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_typeII_r16_5 = {
	"typeII-r16",
	"typeII-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_typeII_r16_tags_5,
	sizeof(asn_DEF_NR_typeII_r16_tags_5)
		/sizeof(asn_DEF_NR_typeII_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_typeII_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_typeII_r16_tags_5)
		/sizeof(asn_DEF_NR_typeII_r16_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_typeII_r16_5,
	2,	/* Elements count */
	&asn_SPC_NR_typeII_r16_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_portSelectionSamplingSize_r16_value2enum_22[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_NR_portSelectionSamplingSize_r16_enum2value_22[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_portSelectionSamplingSize_r16_specs_22 = {
	asn_MAP_NR_portSelectionSamplingSize_r16_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_portSelectionSamplingSize_r16_enum2value_22,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_portSelectionSamplingSize_r16_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_portSelectionSamplingSize_r16_22 = {
	"portSelectionSamplingSize-r16",
	"portSelectionSamplingSize-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_portSelectionSamplingSize_r16_tags_22,
	sizeof(asn_DEF_NR_portSelectionSamplingSize_r16_tags_22)
		/sizeof(asn_DEF_NR_portSelectionSamplingSize_r16_tags_22[0]) - 1, /* 1 */
	asn_DEF_NR_portSelectionSamplingSize_r16_tags_22,	/* Same as above */
	sizeof(asn_DEF_NR_portSelectionSamplingSize_r16_tags_22)
		/sizeof(asn_DEF_NR_portSelectionSamplingSize_r16_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_NR_portSelectionSamplingSize_r16_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_portSelectionSamplingSize_r16_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_typeII_PortSelection_r16_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_PortSelection_r16, portSelectionSamplingSize_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_portSelectionSamplingSize_r16_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portSelectionSamplingSize-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_PortSelection_r16, typeII_PortSelectionRI_Restriction_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_typeII_PortSelectionRI_Restriction_r16_constr_27,  memb_NR_typeII_PortSelectionRI_Restriction_r16_constraint_21 },
		0, 0, /* No default value */
		"typeII-PortSelectionRI-Restriction-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_typeII_PortSelection_r16_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_typeII_PortSelection_r16_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* portSelectionSamplingSize-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* typeII-PortSelectionRI-Restriction-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_typeII_PortSelection_r16_specs_21 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_PortSelection_r16),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType__typeII_PortSelection_r16, _asn_ctx),
	asn_MAP_NR_typeII_PortSelection_r16_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_typeII_PortSelection_r16_21 = {
	"typeII-PortSelection-r16",
	"typeII-PortSelection-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_typeII_PortSelection_r16_tags_21,
	sizeof(asn_DEF_NR_typeII_PortSelection_r16_tags_21)
		/sizeof(asn_DEF_NR_typeII_PortSelection_r16_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_typeII_PortSelection_r16_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_typeII_PortSelection_r16_tags_21)
		/sizeof(asn_DEF_NR_typeII_PortSelection_r16_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_typeII_PortSelection_r16_21,
	2,	/* Elements count */
	&asn_SPC_NR_typeII_PortSelection_r16_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_subType_4[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType, choice.typeII_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_typeII_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeII-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType, choice.typeII_PortSelection_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_typeII_PortSelection_r16_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeII-PortSelection-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_subType_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* typeII-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* typeII-PortSelection-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_subType_specs_4 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType__type2__subType),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType, _asn_ctx),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2__subType, present),
	sizeof(((struct NR_CodebookConfig_r16__codebookType__type2__subType *)0)->present),
	asn_MAP_NR_subType_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_subType_4 = {
	"subType",
	"subType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_subType_constr_4, CHOICE_constraint },
	asn_MBR_NR_subType_4,
	2,	/* Elements count */
	&asn_SPC_NR_subType_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_type2_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2, subType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_subType_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2, numberOfPMI_SubbandsPerCQI_Subband_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_numberOfPMI_SubbandsPerCQI_Subband_r16_constr_28,  memb_NR_numberOfPMI_SubbandsPerCQI_Subband_r16_constraint_3 },
		0, 0, /* No default value */
		"numberOfPMI-SubbandsPerCQI-Subband-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16__codebookType__type2, paramCombination_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_paramCombination_r16_constr_29,  memb_NR_paramCombination_r16_constraint_3 },
		0, 0, /* No default value */
		"paramCombination-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_type2_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_type2_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfPMI-SubbandsPerCQI-Subband-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* paramCombination-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_type2_specs_3 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType__type2),
	offsetof(struct NR_CodebookConfig_r16__codebookType__type2, _asn_ctx),
	asn_MAP_NR_type2_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_type2_3 = {
	"type2",
	"type2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_type2_tags_3,
	sizeof(asn_DEF_NR_type2_tags_3)
		/sizeof(asn_DEF_NR_type2_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_type2_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_type2_tags_3)
		/sizeof(asn_DEF_NR_type2_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_type2_3,
	3,	/* Elements count */
	&asn_SPC_NR_type2_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_codebookType_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_CodebookConfig_r16__codebookType, choice.type2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_type2_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_codebookType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* type2 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_codebookType_specs_2 = {
	sizeof(struct NR_CodebookConfig_r16__codebookType),
	offsetof(struct NR_CodebookConfig_r16__codebookType, _asn_ctx),
	offsetof(struct NR_CodebookConfig_r16__codebookType, present),
	sizeof(((struct NR_CodebookConfig_r16__codebookType *)0)->present),
	asn_MAP_NR_codebookType_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_codebookType_2 = {
	"codebookType",
	"codebookType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_codebookType_constr_2, CHOICE_constraint },
	asn_MBR_NR_codebookType_2,
	1,	/* Elements count */
	&asn_SPC_NR_codebookType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CodebookConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CodebookConfig_r16, codebookType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_codebookType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookType"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_CodebookConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CodebookConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* codebookType */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CodebookConfig_r16_specs_1 = {
	sizeof(struct NR_CodebookConfig_r16),
	offsetof(struct NR_CodebookConfig_r16, _asn_ctx),
	asn_MAP_NR_CodebookConfig_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CodebookConfig_r16 = {
	"CodebookConfig-r16",
	"CodebookConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CodebookConfig_r16_tags_1,
	sizeof(asn_DEF_NR_CodebookConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_CodebookConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_CodebookConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CodebookConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_CodebookConfig_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_CodebookConfig_r16_1,
	1,	/* Elements count */
	&asn_SPC_NR_CodebookConfig_r16_specs_1	/* Additional specs */
};

