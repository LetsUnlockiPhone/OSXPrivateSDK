//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface SCTAXChildAccessor : NSObject <NSCoding>
{
    NSString *mAttribute;
    NSString *mValue;
    NSNumber *mOccurance;
}

- (struct __AXUIElement *)resolveFromContainer:(struct __AXUIElement *)arg1;
- (id)description;
- (id)value;
- (id)attribute;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(struct __AXUIElement *)arg1 child:(struct __AXUIElement *)arg2;
- (long long)computeOccuranceIndexForChild:(struct __AXUIElement *)arg1 forParent:(struct __AXUIElement *)arg2;
- (void)extractSearchAttributeAndValueFromChild:(struct __AXUIElement *)arg1;

@end
