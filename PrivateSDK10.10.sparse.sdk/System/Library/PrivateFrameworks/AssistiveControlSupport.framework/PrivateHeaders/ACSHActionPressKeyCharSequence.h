/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHAction.h>

@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction
{
    NSString *_charString;
}

+ (id)actionWithString:(id)arg1;
@property(retain, nonatomic) NSString *charString; // @synthesize charString=_charString;
- (void)perform;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end
