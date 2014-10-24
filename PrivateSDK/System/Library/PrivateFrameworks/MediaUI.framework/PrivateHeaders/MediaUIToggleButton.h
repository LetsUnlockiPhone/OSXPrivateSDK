//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaUI/MediaUIControl.h>

@class NSImage, NSString;

@interface MediaUIToggleButton : MediaUIControl
{
    NSImage *_image;
    NSString *_title;
    NSImage *_alternateImage;
    NSString *_alternateTitle;
    NSString *_keyEquivalent;
    unsigned long long _keyEquivalentModifierMask;
    unsigned int _bordered:1;
    unsigned int _toggled:1;
}

+ (void)initialize;
@property(nonatomic) unsigned long long keyEquivalentModifierMask; // @synthesize keyEquivalentModifierMask=_keyEquivalentModifierMask;
@property(copy, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (double)MediaUI_slice;
- (void)renewGState;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
- (void)performClick:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(nonatomic, getter=isBordered) BOOL bordered;
@property(nonatomic, getter=isToggled) BOOL toggled;
@property(copy, nonatomic) NSString *alternateTitle;
@property(retain, nonatomic) NSImage *alternateImage;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSImage *image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;

@end
