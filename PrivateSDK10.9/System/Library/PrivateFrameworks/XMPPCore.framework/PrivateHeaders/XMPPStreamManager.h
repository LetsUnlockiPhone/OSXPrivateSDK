//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPFeatureNegotiatorDelegate.h"
#import "XMPPIQTarget.h"
#import "XMPPStreamProtocolDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface XMPPStreamManager : NSObject <XMPPIQTarget, XMPPStreamProtocolDelegate, XMPPFeatureNegotiatorDelegate>
{
    id <XMPPStreamManagerDelegate> _delegate;
    NSMutableDictionary *_iqIDToStreamSessionMap;
    NSMutableDictionary *_streamSessions;
    NSMutableDictionary *_streamProtocols;
    NSMutableDictionary *_incomingPublishedStreamSessions;
    NSMutableDictionary *_outgoingPublishedStreamSessions;
    NSMutableArray *_autoacceptSIDs;
}

+ (Class)protocolClassForNamespace:(id)arg1;
+ (Class)profileClassForNamespace:(id)arg1;
+ (id)protocolNamespaces;
+ (id)profileNamespaces;
+ (id)publisherNamespace;
+ (id)namespace;
+ (void)initialize;
- (id)featureNegotiator:(id)arg1 choiceForVar:(id)arg2 options:(id)arg3;
- (BOOL)featureNegotiator:(id)arg1 understandsVar:(id)arg2;
- (void)streamProtocol:(id)arg1 streamNegotiated:(id)arg2;
- (void)streamProtocol:(id)arg1 couldNotNegotiate:(int)arg2;
- (id)streamProtocol:(id)arg1 hostsWithCategory:(id)arg2 type:(id)arg3;
- (id)streamProtocolConnection:(id)arg1;
- (id)publishedProfile:(id)arg1 from:(id)arg2;
- (void)unpublishProfile:(id)arg1;
- (void)publishProfile:(id)arg1;
- (void)rejectSession:(id)arg1;
- (void)acceptSession:(id)arg1;
- (void)proposeSession:(id)arg1 to:(id)arg2;
- (void)unregisterSession:(id)arg1;
- (id)registerSession:(id)arg1 withSID:(id)arg2;
- (id)registerSession:(id)arg1;
- (void)connection:(id)arg1 receivedIQNode:(id)arg2 type:(int)arg3 xmlns:(id)arg4;
- (BOOL)_receiveSIPubAcceptResponse:(id)arg1;
- (BOOL)_processOutgoingRequestResponse:(id)arg1;
- (BOOL)_handleSIPubRequest:(id)arg1;
- (BOOL)_handleIncomingSINode:(id)arg1;
- (BOOL)_handleIncomingProfileNode:(id)arg1;
- (BOOL)_handleIncomingProtocolNode:(id)arg1;
- (void)_writeBadProfileErrorInReplyTo:(id)arg1;
- (void)_writeNoValidStreamsErrorForRequest:(id)arg1;
- (void)_writeSIPubErrorTo:(id)arg1 requestID:(id)arg2 sipubID:(id)arg3 code:(id)arg4 type:(id)arg5 name:(id)arg6;
- (void)_writeProtocolOptions:(id)arg1;
- (void)_unregisterProtocol:(id)arg1;
- (void)_registerProtocol:(id)arg1 withSID:(id)arg2;
- (void)_clearPublishedStreamSession:(id)arg1 isIncoming:(BOOL)arg2;
- (id)_generateSIPubID;
- (id)_generateSID;
- (id)_connection;
- (void)registerIQCallbacksWithConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
