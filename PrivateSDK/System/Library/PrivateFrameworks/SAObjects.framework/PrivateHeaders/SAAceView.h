//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"
#import "SADeferredKeyObject.h"

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject>
{
}

+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceView;
- (id)deferredKeys;
@property(copy, nonatomic) NSString *viewId;
@property(copy, nonatomic) NSString *speakableText;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
