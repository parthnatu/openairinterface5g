/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_RRCReconfiguration-v1610-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_dedicatedPosSysInfoDelivery_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_type_NR_daps_SourceRelease_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_dedicatedPosSysInfoDelivery_r16_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_daps_SourceRelease_r16_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_daps_SourceRelease_r16_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_daps_SourceRelease_r16_specs_6 = {
	asn_MAP_NR_daps_SourceRelease_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_daps_SourceRelease_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_daps_SourceRelease_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_daps_SourceRelease_r16_6 = {
	"daps-SourceRelease-r16",
	"daps-SourceRelease-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_daps_SourceRelease_r16_tags_6,
	sizeof(asn_DEF_NR_daps_SourceRelease_r16_tags_6)
		/sizeof(asn_DEF_NR_daps_SourceRelease_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_daps_SourceRelease_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_daps_SourceRelease_r16_tags_6)
		/sizeof(asn_DEF_NR_daps_SourceRelease_r16_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_daps_SourceRelease_r16_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_daps_SourceRelease_r16_specs_6	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_14 = {
	sizeof(struct NR_RRCReconfiguration_v1610_IEs__nonCriticalExtension),
	offsetof(struct NR_RRCReconfiguration_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_14 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_14,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCReconfiguration_v1610_IEs_1[] = {
	{ ATF_POINTER, 12, offsetof(struct NR_RRCReconfiguration_v1610_IEs, otherConfig_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_OtherConfig_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherConfig-v1610"
		},
	{ ATF_POINTER, 11, offsetof(struct NR_RRCReconfiguration_v1610_IEs, bap_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_BAP_Config_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bap-Config-r16"
		},
	{ ATF_POINTER, 10, offsetof(struct NR_RRCReconfiguration_v1610_IEs, iab_IP_AddressConfigurationList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressConfigurationList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iab-IP-AddressConfigurationList-r16"
		},
	{ ATF_POINTER, 9, offsetof(struct NR_RRCReconfiguration_v1610_IEs, conditionalReconfiguration_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ConditionalReconfiguration_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"conditionalReconfiguration-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_RRCReconfiguration_v1610_IEs, daps_SourceRelease_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_daps_SourceRelease_r16_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"daps-SourceRelease-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_RRCReconfiguration_v1610_IEs, t316_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_T316_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t316-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_RRCReconfiguration_v1610_IEs, needForGapsConfigNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_NeedForGapsConfigNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"needForGapsConfigNR-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_RRCReconfiguration_v1610_IEs, onDemandSIB_Request_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_OnDemandSIB_Request_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDemandSIB-Request-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RRCReconfiguration_v1610_IEs, dedicatedPosSysInfoDelivery_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_NR_dedicatedPosSysInfoDelivery_r16_constr_11,  memb_NR_dedicatedPosSysInfoDelivery_r16_constraint_1 },
		0, 0, /* No default value */
		"dedicatedPosSysInfoDelivery-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RRCReconfiguration_v1610_IEs, sl_ConfigDedicatedNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_ConfigDedicatedNR_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ConfigDedicatedNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RRCReconfiguration_v1610_IEs, sl_ConfigDedicatedEUTRA_Info_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ConfigDedicatedEUTRA-Info-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCReconfiguration_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_RRCReconfiguration_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCReconfiguration_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otherConfig-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bap-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* iab-IP-AddressConfigurationList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* conditionalReconfiguration-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* daps-SourceRelease-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* t316-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* needForGapsConfigNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* onDemandSIB-Request-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dedicatedPosSysInfoDelivery-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sl-ConfigDedicatedNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sl-ConfigDedicatedEUTRA-Info-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfiguration_v1610_IEs_specs_1 = {
	sizeof(struct NR_RRCReconfiguration_v1610_IEs),
	offsetof(struct NR_RRCReconfiguration_v1610_IEs, _asn_ctx),
	asn_MAP_NR_RRCReconfiguration_v1610_IEs_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_NR_RRCReconfiguration_v1610_IEs_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfiguration_v1610_IEs = {
	"RRCReconfiguration-v1610-IEs",
	"RRCReconfiguration-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfiguration_v1610_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RRCReconfiguration_v1610_IEs_1,
	12,	/* Elements count */
	&asn_SPC_NR_RRCReconfiguration_v1610_IEs_specs_1	/* Additional specs */
};

