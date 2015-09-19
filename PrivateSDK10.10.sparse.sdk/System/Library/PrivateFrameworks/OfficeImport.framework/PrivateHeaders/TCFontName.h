/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface TCFontName : NSObject
{
    NSString *_styleName;
    NSString *_fullName;
}

@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (void)dealloc;
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;

@end
