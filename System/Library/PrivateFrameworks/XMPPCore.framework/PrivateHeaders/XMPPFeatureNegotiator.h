//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface XMPPFeatureNegotiator : NSObject
{
    NSMutableDictionary *_varsAndOptions;
    NSMutableDictionary *_responses;
    id <XMPPFeatureNegotiatorDelegate> _delegate;
    int _error;
    NSString *_errorVar;
}

+ (id)processResponseFromRequest:(id)arg1;
+ (id)_processFeatureTag:(id)arg1 response:(BOOL)arg2;
+ (void)writeRequest:(id)arg1 toStream:(id)arg2;
- (void)writeResponseToStream:(id)arg1;
- (BOOL)hasError;
- (id)_generateGoodResponse;
- (id)_generateError;
- (id)resultForVar:(id)arg1;
- (BOOL)processRequestTag:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
