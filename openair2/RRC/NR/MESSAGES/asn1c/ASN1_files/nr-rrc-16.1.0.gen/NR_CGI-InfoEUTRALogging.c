/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_CGI-InfoEUTRALogging.h"

static int
memb_NR_cellIdentity_eutra_5gc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 28)) {
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
memb_NR_trackingAreaCode_eutra_epc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_NR_cellIdentity_eutra_epc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 28)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_cellIdentity_eutra_5gc_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_trackingAreaCode_eutra_epc_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_cellIdentity_eutra_epc_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_CGI_InfoEUTRALogging_1[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_CGI_InfoEUTRALogging, plmn_Identity_eutra_5gc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity-eutra-5gc"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_CGI_InfoEUTRALogging, trackingAreaCode_eutra_5gc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TrackingAreaCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode-eutra-5gc"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_CGI_InfoEUTRALogging, cellIdentity_eutra_5gc),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_cellIdentity_eutra_5gc_constr_4,  memb_NR_cellIdentity_eutra_5gc_constraint_1 },
		0, 0, /* No default value */
		"cellIdentity-eutra-5gc"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CGI_InfoEUTRALogging, plmn_Identity_eutra_epc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity-eutra-epc"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CGI_InfoEUTRALogging, trackingAreaCode_eutra_epc),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_trackingAreaCode_eutra_epc_constr_6,  memb_NR_trackingAreaCode_eutra_epc_constraint_1 },
		0, 0, /* No default value */
		"trackingAreaCode-eutra-epc"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CGI_InfoEUTRALogging, cellIdentity_eutra_epc),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_NR_cellIdentity_eutra_epc_constr_7,  memb_NR_cellIdentity_eutra_epc_constraint_1 },
		0, 0, /* No default value */
		"cellIdentity-eutra-epc"
		},
};
static const int asn_MAP_NR_CGI_InfoEUTRALogging_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_CGI_InfoEUTRALogging_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CGI_InfoEUTRALogging_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity-eutra-5gc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-eutra-5gc */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellIdentity-eutra-5gc */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* plmn-Identity-eutra-epc */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trackingAreaCode-eutra-epc */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* cellIdentity-eutra-epc */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CGI_InfoEUTRALogging_specs_1 = {
	sizeof(struct NR_CGI_InfoEUTRALogging),
	offsetof(struct NR_CGI_InfoEUTRALogging, _asn_ctx),
	asn_MAP_NR_CGI_InfoEUTRALogging_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_CGI_InfoEUTRALogging_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CGI_InfoEUTRALogging = {
	"CGI-InfoEUTRALogging",
	"CGI-InfoEUTRALogging",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CGI_InfoEUTRALogging_tags_1,
	sizeof(asn_DEF_NR_CGI_InfoEUTRALogging_tags_1)
		/sizeof(asn_DEF_NR_CGI_InfoEUTRALogging_tags_1[0]), /* 1 */
	asn_DEF_NR_CGI_InfoEUTRALogging_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CGI_InfoEUTRALogging_tags_1)
		/sizeof(asn_DEF_NR_CGI_InfoEUTRALogging_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_CGI_InfoEUTRALogging_1,
	6,	/* Elements count */
	&asn_SPC_NR_CGI_InfoEUTRALogging_specs_1	/* Additional specs */
};

