//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject
{
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(CDStruct_b6748e3c *)arg1;
- (id)lastError;
- (void)finalize;
- (void)dealloc;
- (void)_cleanup;
- (id)init;
- (void)setLastError:(CDStruct_b6748e3c *)arg1;

@end
