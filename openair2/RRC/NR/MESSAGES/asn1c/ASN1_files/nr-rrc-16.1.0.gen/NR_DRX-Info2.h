/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DRX_Info2_H_
#define	_NR_DRX_Info2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DRX_Info2__drx_onDurationTimer_PR {
	NR_DRX_Info2__drx_onDurationTimer_PR_NOTHING,	/* No components present */
	NR_DRX_Info2__drx_onDurationTimer_PR_subMilliSeconds,
	NR_DRX_Info2__drx_onDurationTimer_PR_milliSeconds
} NR_DRX_Info2__drx_onDurationTimer_PR;
typedef enum NR_DRX_Info2__drx_onDurationTimer__milliSeconds {
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms1	= 0,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms2	= 1,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms3	= 2,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms4	= 3,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms5	= 4,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms6	= 5,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms8	= 6,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms10	= 7,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms20	= 8,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms30	= 9,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms40	= 10,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms50	= 11,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms60	= 12,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms80	= 13,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms100	= 14,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms200	= 15,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms300	= 16,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms400	= 17,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms500	= 18,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms600	= 19,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms800	= 20,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms1000	= 21,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms1200	= 22,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_ms1600	= 23,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare8	= 24,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare7	= 25,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare6	= 26,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare5	= 27,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare4	= 28,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare3	= 29,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare2	= 30,
	NR_DRX_Info2__drx_onDurationTimer__milliSeconds_spare1	= 31
} e_NR_DRX_Info2__drx_onDurationTimer__milliSeconds;

/* NR_DRX-Info2 */
typedef struct NR_DRX_Info2 {
	struct NR_DRX_Info2__drx_onDurationTimer {
		NR_DRX_Info2__drx_onDurationTimer_PR present;
		union NR_DRX_Info2__NR_drx_onDurationTimer_u {
			long	 subMilliSeconds;
			long	 milliSeconds;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} drx_onDurationTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DRX_Info2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_milliSeconds_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DRX_Info2;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DRX_Info2_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DRX_Info2_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DRX_Info2_H_ */
#include <asn_internal.h>
