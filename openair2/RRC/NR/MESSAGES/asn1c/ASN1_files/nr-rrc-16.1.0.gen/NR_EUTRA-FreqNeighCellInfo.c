/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_EUTRA-FreqNeighCellInfo.h"

static int
memb_NR_q_RxLevMinOffsetCell_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_NR_q_QualMinOffsetCell_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_NR_q_RxLevMinOffsetCell_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_q_QualMinOffsetCell_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_EUTRA_FreqNeighCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EUTRA_FreqNeighCellInfo, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_EUTRA_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EUTRA_FreqNeighCellInfo, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_EUTRA_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_EUTRA_FreqNeighCellInfo, q_RxLevMinOffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_q_RxLevMinOffsetCell_constr_4,  memb_NR_q_RxLevMinOffsetCell_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMinOffsetCell"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_EUTRA_FreqNeighCellInfo, q_QualMinOffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_q_QualMinOffsetCell_constr_5,  memb_NR_q_QualMinOffsetCell_constraint_1 },
		0, 0, /* No default value */
		"q-QualMinOffsetCell"
		},
};
static const int asn_MAP_NR_EUTRA_FreqNeighCellInfo_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_EUTRA_FreqNeighCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-RxLevMinOffsetCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* q-QualMinOffsetCell */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_EUTRA_FreqNeighCellInfo_specs_1 = {
	sizeof(struct NR_EUTRA_FreqNeighCellInfo),
	offsetof(struct NR_EUTRA_FreqNeighCellInfo, _asn_ctx),
	asn_MAP_NR_EUTRA_FreqNeighCellInfo_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_EUTRA_FreqNeighCellInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_FreqNeighCellInfo = {
	"EUTRA-FreqNeighCellInfo",
	"EUTRA-FreqNeighCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1,
	sizeof(asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1[0]), /* 1 */
	asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_NR_EUTRA_FreqNeighCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_EUTRA_FreqNeighCellInfo_1,
	4,	/* Elements count */
	&asn_SPC_NR_EUTRA_FreqNeighCellInfo_specs_1	/* Additional specs */
};

