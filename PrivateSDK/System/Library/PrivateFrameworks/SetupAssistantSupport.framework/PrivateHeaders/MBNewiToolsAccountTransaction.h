//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SetupAssistantSupport/MBIATransaction.h>

@class NSURL;

@interface MBNewiToolsAccountTransaction : MBIATransaction
{
    NSURL *_serverURL;
}

- (id)serverURL;
- (id)dotMac;
- (id)httpBodyFromDictionary:(id)arg1;
- (id)initForActivity:(id)arg1;
- (void)_fetchServerURLThread;
- (void)_startFetchingServerURL;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)_debugWriteFirstPage:(id)arg1;

@end
