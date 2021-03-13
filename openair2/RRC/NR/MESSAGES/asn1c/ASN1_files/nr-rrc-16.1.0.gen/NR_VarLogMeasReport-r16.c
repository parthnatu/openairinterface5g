/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_VarLogMeasReport-r16.h"

static int
memb_NR_traceRecordingSessionRef_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
memb_NR_tce_Id_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_traceRecordingSessionRef_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_tce_Id_r16_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_VarLogMeasReport_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, absoluteTimeStamp_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_AbsoluteTimeInfo_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteTimeStamp-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, traceReference_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TraceReference_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceReference-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, traceRecordingSessionRef_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NR_traceRecordingSessionRef_r16_constr_4,  memb_NR_traceRecordingSessionRef_r16_constraint_1 },
		0, 0, /* No default value */
		"traceRecordingSessionRef-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, tce_Id_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NR_tce_Id_r16_constr_5,  memb_NR_tce_Id_r16_constraint_1 },
		0, 0, /* No default value */
		"tce-Id-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, logMeasInfoList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_LogMeasInfoList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasInfoList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarLogMeasReport_r16, plmn_IdentityList_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PLMN_IdentityList2_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_VarLogMeasReport_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_VarLogMeasReport_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteTimeStamp-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceReference-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traceRecordingSessionRef-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tce-Id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logMeasInfoList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* plmn-IdentityList-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_VarLogMeasReport_r16_specs_1 = {
	sizeof(struct NR_VarLogMeasReport_r16),
	offsetof(struct NR_VarLogMeasReport_r16, _asn_ctx),
	asn_MAP_NR_VarLogMeasReport_r16_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_VarLogMeasReport_r16 = {
	"VarLogMeasReport-r16",
	"VarLogMeasReport-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_VarLogMeasReport_r16_tags_1,
	sizeof(asn_DEF_NR_VarLogMeasReport_r16_tags_1)
		/sizeof(asn_DEF_NR_VarLogMeasReport_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_VarLogMeasReport_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_VarLogMeasReport_r16_tags_1)
		/sizeof(asn_DEF_NR_VarLogMeasReport_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_VarLogMeasReport_r16_1,
	6,	/* Elements count */
	&asn_SPC_NR_VarLogMeasReport_r16_specs_1	/* Additional specs */
};

