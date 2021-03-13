/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_BandCombinationList-v1540.h"

asn_per_constraints_t asn_PER_type_NR_BandCombinationList_v1540_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16, -1,  1,  65536 }	/* (SIZE(1..65536)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_BandCombinationList_v1540_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_BandCombination_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_BandCombinationList_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NR_BandCombinationList_v1540_specs_1 = {
	sizeof(struct NR_BandCombinationList_v1540),
	offsetof(struct NR_BandCombinationList_v1540, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NR_BandCombinationList_v1540 = {
	"BandCombinationList-v1540",
	"BandCombinationList-v1540",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_BandCombinationList_v1540_tags_1,
	sizeof(asn_DEF_NR_BandCombinationList_v1540_tags_1)
		/sizeof(asn_DEF_NR_BandCombinationList_v1540_tags_1[0]), /* 1 */
	asn_DEF_NR_BandCombinationList_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BandCombinationList_v1540_tags_1)
		/sizeof(asn_DEF_NR_BandCombinationList_v1540_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_BandCombinationList_v1540_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NR_BandCombinationList_v1540_1,
	1,	/* Single element */
	&asn_SPC_NR_BandCombinationList_v1540_specs_1	/* Additional specs */
};

