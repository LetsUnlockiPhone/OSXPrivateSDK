/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "SOAReceiverProtocol-Protocol.h"

@protocol SOAAccountInfoReceiverProtocol <NSObject, SOAReceiverProtocol>
- (void)legacyScreenSharingIDsForABPersonID:(id)arg1 withCompletionBlock:(id)arg2;
- (void)legacyAudioIDsForABPersonID:(id)arg1 withCompletionBlock:(id)arg2;
- (void)legacyVideoIDsForABPersonID:(id)arg1 withCompletionBlock:(id)arg2;
- (void)faceTimeIDsForABPersonID:(id)arg1 withCompletionBlock:(id)arg2;
- (void)addValidMessagesID:(id)arg1;
- (void)addInvalidMessagesID:(id)arg1;
- (void)addValidFaceTimeID:(id)arg1;
- (void)addInvalidFaceTimeID:(id)arg1;
@end
