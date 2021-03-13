/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_BFR-SSB-Resource.h"

static int
memb_NR_ra_PreambleIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_NR_ra_PreambleIndex_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_BFR_SSB_Resource_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BFR_SSB_Resource, ssb),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BFR_SSB_Resource, ra_PreambleIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_ra_PreambleIndex_constr_3,  memb_NR_ra_PreambleIndex_constraint_1 },
		0, 0, /* No default value */
		"ra-PreambleIndex"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_BFR_SSB_Resource_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BFR_SSB_Resource_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ra-PreambleIndex */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BFR_SSB_Resource_specs_1 = {
	sizeof(struct NR_BFR_SSB_Resource),
	offsetof(struct NR_BFR_SSB_Resource, _asn_ctx),
	asn_MAP_NR_BFR_SSB_Resource_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BFR_SSB_Resource = {
	"BFR-SSB-Resource",
	"BFR-SSB-Resource",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BFR_SSB_Resource_tags_1,
	sizeof(asn_DEF_NR_BFR_SSB_Resource_tags_1)
		/sizeof(asn_DEF_NR_BFR_SSB_Resource_tags_1[0]), /* 1 */
	asn_DEF_NR_BFR_SSB_Resource_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BFR_SSB_Resource_tags_1)
		/sizeof(asn_DEF_NR_BFR_SSB_Resource_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_BFR_SSB_Resource_1,
	2,	/* Elements count */
	&asn_SPC_NR_BFR_SSB_Resource_specs_1	/* Additional specs */
};

