/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_IABOtherInformation_r16_IEs_H_
#define	_NR_IABOtherInformation_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_IABOtherInformation_r16_IEs__ip_InfoType_PR {
	NR_IABOtherInformation_r16_IEs__ip_InfoType_PR_NOTHING,	/* No components present */
	NR_IABOtherInformation_r16_IEs__ip_InfoType_PR_iab_IP_Request_r16,
	NR_IABOtherInformation_r16_IEs__ip_InfoType_PR_iab_IP_Report_r16
	/* Extensions may appear below */
	
} NR_IABOtherInformation_r16_IEs__ip_InfoType_PR;
typedef enum NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR {
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR_NOTHING,	/* No components present */
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR_iab_IPv6_AddressNumReq_r16,
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR_iab_IPv6_AddressPrefixReq_r16
	/* Extensions may appear below */
	
} NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR;
typedef enum NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR {
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR_NOTHING,	/* No components present */
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR_iab_IPv6_AddressReport_r16,
	NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR_iab_IPv6_PrefixReport_r16
	/* Extensions may appear below */
	
} NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR;

/* Forward declarations */
struct NR_IAB_IPAddressNumReq_r16;
struct NR_IAB_IPAddressPrefixReq_r16;
struct NR_IAB_IP_AddressAndTraffic_r16;
struct NR_IAB_IP_PrefixAndTraffic_r16;

/* NR_IABOtherInformation-r16-IEs */
typedef struct NR_IABOtherInformation_r16_IEs {
	struct NR_IABOtherInformation_r16_IEs__ip_InfoType {
		NR_IABOtherInformation_r16_IEs__ip_InfoType_PR present;
		union NR_IABOtherInformation_r16_IEs__NR_ip_InfoType_u {
			struct NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16 {
				struct NR_IAB_IPAddressNumReq_r16	*iab_IPv4_AddressNumReq_r16;	/* OPTIONAL */
				struct NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16 {
					NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Request_r16__iab_IPv6_AddressReq_r16_PR present;
					union NR_IABOtherInformation_r16_IEs__NR_ip_InfoType__NR_iab_IP_Request_r16__NR_iab_IPv6_AddressReq_r16_u {
						struct NR_IAB_IPAddressNumReq_r16	*iab_IPv6_AddressNumReq_r16;
						struct NR_IAB_IPAddressPrefixReq_r16	*iab_IPv6_AddressPrefixReq_r16;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *iab_IPv6_AddressReq_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *iab_IP_Request_r16;
			struct NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16 {
				struct NR_IAB_IP_AddressAndTraffic_r16	*iab_IPv4_AddressReport_r16;	/* OPTIONAL */
				struct NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16 {
					NR_IABOtherInformation_r16_IEs__ip_InfoType__iab_IP_Report_r16__iab_IPv6_Report_r16_PR present;
					union NR_IABOtherInformation_r16_IEs__NR_ip_InfoType__NR_iab_IP_Report_r16__NR_iab_IPv6_Report_r16_u {
						struct NR_IAB_IP_AddressAndTraffic_r16	*iab_IPv6_AddressReport_r16;
						struct NR_IAB_IP_PrefixAndTraffic_r16	*iab_IPv6_PrefixReport_r16;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *iab_IPv6_Report_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *iab_IP_Report_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ip_InfoType;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_IABOtherInformation_r16_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_IABOtherInformation_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_IABOtherInformation_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_IABOtherInformation_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_IABOtherInformation_r16_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_IAB-IPAddressNumReq-r16.h"
#include "NR_IAB-IPAddressPrefixReq-r16.h"
#include "NR_IAB-IP-AddressAndTraffic-r16.h"
#include "NR_IAB-IP-PrefixAndTraffic-r16.h"

#endif	/* _NR_IABOtherInformation_r16_IEs_H_ */
#include <asn_internal.h>
