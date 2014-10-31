//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPCapabilityManagerDelegate.h"
#import "XMPPConnectionDelegate.h"
#import "XMPPExtensionSession.h"
#import "XMPPIQTarget.h"
#import "XMPPLocationManagerDelegate.h"
#import "XMPPServiceRecordLookupDelegate.h"
#import "XMPPStreamManagerDelegate.h"

@class IMDServiceSession, NSMutableDictionary, NSString, XMPPCapabilityManager, XMPPConnection, XMPPLocationManager, XMPPServiceRecordLookup, XMPPStreamManager;

@interface XMPPSession : NSObject <XMPPIQTarget, XMPPConnectionDelegate, XMPPExtensionSession, XMPPCapabilityManagerDelegate, XMPPLocationManagerDelegate, XMPPServiceRecordLookupDelegate, XMPPStreamManagerDelegate>
{
    NSString *_loginID;
    NSString *_resource;
    NSString *_statusMessage;
    XMPPServiceRecordLookup *_serviceRecordLookup;
    NSMutableDictionary *_connectionProps;
    XMPPConnection *_connection;
    NSString *_redirectServer;
    long long _redirectPort;
    XMPPCapabilityManager *_capabilityManager;
    XMPPLocationManager *_locationManager;
    XMPPStreamManager *_streamManager;
    NSMutableDictionary *_extensions;
    id <XMPPSessionDelegate> _delegate;
    IMDServiceSession *_serviceSession;
    int _status;
    int _state;
    BOOL _priority;
    BOOL _invisible;
    BOOL _supportsInvisible;
    BOOL _needToSendStatus;
    BOOL _needToSendInvisible;
    NSMutableDictionary *_idToMessageMap;
    NSString *_lastMessageID;
}

- (void)serviceRecordLookupDidFail:(id)arg1;
- (void)serviceRecordLookup:(id)arg1 foundServer:(id)arg2 port:(unsigned short)arg3;
- (void)connection:(id)arg1 messageError:(id)arg2;
- (void)connection:(id)arg1 messageError:(id)arg2 errorString:(id)arg3;
- (void)messageReceived:(id)arg1;
- (void)connection:(id)arg1 messageReceived:(id)arg2;
- (void)connection:(id)arg1 presenceSubscriptionResult:(id)arg2;
- (void)connection:(id)arg1 presenceSubscriptionRequest:(id)arg2;
- (void)connection:(id)arg1 presenceStatusReceived:(id)arg2;
- (void)connection:(id)arg1 stateChanged:(int)arg2;
- (void)connection:(id)arg1 didSetupInvisiblePrivacyList:(BOOL)arg2;
- (void)connection:(id)arg1 didNegotiateTLS:(BOOL)arg2;
- (void)connectionStreamOpened:(id)arg1;
- (BOOL)_sendClientVersion:(id)arg1;
- (void)_registerIQCallbacks;
- (void)sendMyPresence;
- (void)_deferredSendMyPresence;
- (void)_sendStatus:(int)arg1 message:(id)arg2 priority:(int)arg3;
- (void)updateMyCapabilities:(unsigned long long)arg1;
- (BOOL)sendMessage:(id)arg1 ofType:(int)arg2 toJID:(id)arg3;
- (void)locationManager:(id)arg1 bestIDChanged:(id)arg2 withProperties:(id)arg3;
- (id)locationManager:(id)arg1 bestProperties:(id)arg2;
- (id)streamManagerUserID:(id)arg1;
- (id)streamManagerNodeOrigin:(id)arg1;
- (BOOL)streamManager:(id)arg1 handleIncomingSession:(id)arg2;
- (id)streamManager:(id)arg1 hostsWithCategory:(id)arg2 type:(id)arg3;
- (id)streamManagerConnection:(id)arg1;
- (void)capabilityManagerHostFeaturesUpdated:(id)arg1;
- (void)capabilityManager:(id)arg1 myCapabilitiesUpdated:(id)arg2;
- (void)capabilityManager:(id)arg1 user:(id)arg2 capabilitiesUpdated:(id)arg3;
- (id)capabilityManagerConnection:(id)arg1;
- (id)namespacesForJID:(id)arg1;
- (unsigned long long)_capabilitiesForNamespaces:(id)arg1;
- (unsigned long long)_baseOfflineCapabilities;
- (unsigned long long)_baseOnlineCapabilities;
- (id)streamManager;
- (id)locationManager;
- (id)capabilityManager;
- (id)connection;
- (id)bestJIDforJID:(id)arg1;
- (id)accountDefaults;
- (id)accountID;
- (id)loginID;
- (id)extensions;
- (id)extensionWithClass:(Class)arg1;
- (void)uninstallAllExtensions;
- (void)installExtension:(id)arg1;
- (void)disconnect;
- (BOOL)connect;
- (void)autoConnect;
- (void)_setupConnectionProps;
- (id)_sslSettingsWithSSLPeername:(id)arg1;
- (void)setValue:(id)arg1 forConnectionProperty:(id)arg2;
- (id)valueForConnectionProperty:(id)arg1;
- (BOOL)isInvisible;
- (void)setInvisible:(BOOL)arg1;
- (BOOL)supportsInvisible;
- (void)setLoginID:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setPriority:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceSession:(id)arg1;
- (int)state;
- (id)resource;
- (int)status;
- (id)statusMessage;
- (BOOL)priority;
- (void)_clearServiceRecordLookup;
- (void)dealloc;
- (id)initWithServiceSession:(id)arg1 delegate:(id)arg2;
- (id)init;

@end
