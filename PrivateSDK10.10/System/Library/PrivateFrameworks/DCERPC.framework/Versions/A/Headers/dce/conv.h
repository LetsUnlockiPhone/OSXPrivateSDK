/* Generated by IDL compiler version FreeDCE 1.1.0.7 with GNU Flex/Bison */
#ifndef conv_v3_0_included
#define conv_v3_0_included
#ifndef IDLBASE_H
#include <dce/idlbase.h>
#endif
#include <dce/rpc.h>

#ifdef __cplusplus
    extern "C" {
#endif

#ifndef nbase_v0_0_included
#include <dce/nbase.h>
#endif
extern void conv_who_are_you(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *seq,
    /* [out] */ unsigned32 *st
);
extern void conv_who_are_you2(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *seq,
    /* [out] */ idl_uuid_t *cas_uuid,
    /* [out] */ unsigned32 *st
);
extern void conv_are_you_there(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *st
);
extern void conv_who_are_you_auth(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [in] */ idl_byte in_data[],
    /* [in] */ signed32 in_len,
    /* [in] */ signed32 out_max_len,
    /* [out] */ unsigned32 *seq,
    /* [out] */ idl_uuid_t *cas_uuid,
    /* [out] */ idl_byte out_data[],
    /* [out] */ signed32 *out_len,
    /* [out] */ unsigned32 *st
);
extern void conv_who_are_you_auth_more(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [in] */ signed32 index,
    /* [in] */ signed32 out_max_len,
    /* [out] */ idl_byte out_data[],
    /* [out] */ signed32 *out_len,
    /* [out] */ unsigned32 *st
);
typedef struct conv_v3_0_epv_t {
	void (*conv_who_are_you)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *seq,
    /* [out] */ unsigned32 *st
);
	void (*conv_who_are_you2)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *seq,
    /* [out] */ idl_uuid_t *cas_uuid,
    /* [out] */ unsigned32 *st
);
	void (*conv_are_you_there)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [out] */ unsigned32 *st
);
	void (*conv_who_are_you_auth)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [in] */ idl_byte in_data[],
    /* [in] */ signed32 in_len,
    /* [in] */ signed32 out_max_len,
    /* [out] */ unsigned32 *seq,
    /* [out] */ idl_uuid_t *cas_uuid,
    /* [out] */ idl_byte out_data[],
    /* [out] */ signed32 *out_len,
    /* [out] */ unsigned32 *st
);
	void (*conv_who_are_you_auth_more)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *actuid,
    /* [in] */ unsigned32 boot_time,
    /* [in] */ signed32 index,
    /* [in] */ signed32 out_max_len,
    /* [out] */ idl_byte out_data[],
    /* [out] */ signed32 *out_len,
    /* [out] */ unsigned32 *st
);
} conv_v3_0_epv_t;
extern conv_v3_0_epv_t conv_v3_0_c_epv;
extern rpc_if_handle_t conv_v3_0_c_ifspec;
extern rpc_if_handle_t conv_v3_0_s_ifspec;

#ifdef __cplusplus
    }
#endif

#endif