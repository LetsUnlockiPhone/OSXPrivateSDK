/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData, NSMutableDictionary, NSString;

@interface CALvCALParsedLine : NSObject
{
    int _type;
    int _token_id;
    NSString *_keyword;
    NSMutableData *_content;
    NSMutableDictionary *_params;
    BOOL _usePalmD4Hooks;
}

+ (const CDStruct_b1ca1ddd *)lookupProperty:(int)arg1;
+ (int)tokenizeNSStringKeyword:(id)arg1 withType:(int *)arg2;
+ (int)tokenizeKeyword:(const char *)arg1 withType:(int *)arg2;
- (void)setUsePalmD4Hooks:(BOOL)arg1;
- (int)tokenID;
- (void)setTokenID:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)params;
- (id)convertedContent;
- (id)content;
- (void)setContentFromCString:(char *)arg1;
- (id)description;
- (id)keyword;
- (void)setKeywordFromCString:(char *)arg1;
- (id)loadFromCString:(char *)arg1 withParseState:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
