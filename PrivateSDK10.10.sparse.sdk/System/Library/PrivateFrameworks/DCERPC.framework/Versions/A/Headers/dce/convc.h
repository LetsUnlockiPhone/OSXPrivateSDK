/* Generated by IDL compiler version FreeDCE 1.1.0.7 with GNU Flex/Bison */
#ifndef convc_v1_0_included
#define convc_v1_0_included
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
extern void convc_indy(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *cas_uuid
);
typedef struct convc_v1_0_epv_t {
	void (*convc_indy)(
    /* [in] */ handle_t h,
    /* [in] */ idl_uuid_t *cas_uuid
);
} convc_v1_0_epv_t;
extern convc_v1_0_epv_t convc_v1_0_c_epv;
extern rpc_if_handle_t convc_v1_0_c_ifspec;
extern rpc_if_handle_t convc_v1_0_s_ifspec;

#ifdef __cplusplus
    }
#endif

#endif
