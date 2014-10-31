//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"

@class ISStoreURLOperation, NSDictionary, NSHTTPURLResponse, NSString;

@interface CKItemTellAFriend : NSObject <ISStoreURLOperationDelegate>
{
    NSDictionary *_properties;
    ISStoreURLOperation *_tellAFriendOperation;
    NSString *_tellAFriendSubject;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSHTTPURLResponse *_tellAFriendResponse;
}

- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
@property(readonly, nonatomic) NSString *tellAFriendSubject;
@property(readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property(readonly, nonatomic) NSString *tellAFriendBody;
- (BOOL)loadTellAFriendMessage:(id *)arg1;
- (id)initWithItemDictionary:(id)arg1;
- (id)_tellAFriendDictionary;
- (void)_finishTellAFriendLoadWithError:(id)arg1;

@end
