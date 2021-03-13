/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_CSI-RS-ProcFrameworkForSRS.h"

static int
memb_NR_maxNumberPeriodicSRS_AssocCSI_RS_PerBWP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_NR_maxNumberAperiodicSRS_AssocCSI_RS_PerBWP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_NR_maxNumberSP_SRS_AssocCSI_RS_PerBWP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
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
memb_NR_simultaneousSRS_AssocCSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_NR_maxNumberPeriodicSRS_AssocCSI_RS_PerBWP_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxNumberAperiodicSRS_AssocCSI_RS_PerBWP_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxNumberSP_SRS_AssocCSI_RS_PerBWP_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_simultaneousSRS_AssocCSI_RS_PerCC_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_CSI_RS_ProcFrameworkForSRS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CSI_RS_ProcFrameworkForSRS, maxNumberPeriodicSRS_AssocCSI_RS_PerBWP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxNumberPeriodicSRS_AssocCSI_RS_PerBWP_constr_2,  memb_NR_maxNumberPeriodicSRS_AssocCSI_RS_PerBWP_constraint_1 },
		0, 0, /* No default value */
		"maxNumberPeriodicSRS-AssocCSI-RS-PerBWP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CSI_RS_ProcFrameworkForSRS, maxNumberAperiodicSRS_AssocCSI_RS_PerBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxNumberAperiodicSRS_AssocCSI_RS_PerBWP_constr_3,  memb_NR_maxNumberAperiodicSRS_AssocCSI_RS_PerBWP_constraint_1 },
		0, 0, /* No default value */
		"maxNumberAperiodicSRS-AssocCSI-RS-PerBWP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CSI_RS_ProcFrameworkForSRS, maxNumberSP_SRS_AssocCSI_RS_PerBWP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxNumberSP_SRS_AssocCSI_RS_PerBWP_constr_4,  memb_NR_maxNumberSP_SRS_AssocCSI_RS_PerBWP_constraint_1 },
		0, 0, /* No default value */
		"maxNumberSP-SRS-AssocCSI-RS-PerBWP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CSI_RS_ProcFrameworkForSRS, simultaneousSRS_AssocCSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_simultaneousSRS_AssocCSI_RS_PerCC_constr_5,  memb_NR_simultaneousSRS_AssocCSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"simultaneousSRS-AssocCSI-RS-PerCC"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CSI_RS_ProcFrameworkForSRS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberPeriodicSRS-AssocCSI-RS-PerBWP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberAperiodicSRS-AssocCSI-RS-PerBWP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberSP-SRS-AssocCSI-RS-PerBWP */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* simultaneousSRS-AssocCSI-RS-PerCC */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_RS_ProcFrameworkForSRS_specs_1 = {
	sizeof(struct NR_CSI_RS_ProcFrameworkForSRS),
	offsetof(struct NR_CSI_RS_ProcFrameworkForSRS, _asn_ctx),
	asn_MAP_NR_CSI_RS_ProcFrameworkForSRS_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CSI_RS_ProcFrameworkForSRS = {
	"CSI-RS-ProcFrameworkForSRS",
	"CSI-RS-ProcFrameworkForSRS",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1,
	sizeof(asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1)
		/sizeof(asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1[0]), /* 1 */
	asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1)
		/sizeof(asn_DEF_NR_CSI_RS_ProcFrameworkForSRS_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_CSI_RS_ProcFrameworkForSRS_1,
	4,	/* Elements count */
	&asn_SPC_NR_CSI_RS_ProcFrameworkForSRS_specs_1	/* Additional specs */
};

