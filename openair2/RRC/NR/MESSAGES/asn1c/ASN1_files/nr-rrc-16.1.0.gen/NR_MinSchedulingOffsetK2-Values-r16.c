/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_MinSchedulingOffsetK2-Values-r16.h"

static int
memb_NativeInteger_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_Member_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_NR_MinSchedulingOffsetK2_Values_r16_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_MinSchedulingOffsetK2_Values_r16_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_Member_constr_2,  memb_NativeInteger_constraint_1 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NR_MinSchedulingOffsetK2_Values_r16_specs_1 = {
	sizeof(struct NR_MinSchedulingOffsetK2_Values_r16),
	offsetof(struct NR_MinSchedulingOffsetK2_Values_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NR_MinSchedulingOffsetK2_Values_r16 = {
	"MinSchedulingOffsetK2-Values-r16",
	"MinSchedulingOffsetK2-Values-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1,
	sizeof(asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1)
		/sizeof(asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1)
		/sizeof(asn_DEF_NR_MinSchedulingOffsetK2_Values_r16_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_MinSchedulingOffsetK2_Values_r16_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NR_MinSchedulingOffsetK2_Values_r16_1,
	1,	/* Single element */
	&asn_SPC_NR_MinSchedulingOffsetK2_Values_r16_specs_1	/* Additional specs */
};

