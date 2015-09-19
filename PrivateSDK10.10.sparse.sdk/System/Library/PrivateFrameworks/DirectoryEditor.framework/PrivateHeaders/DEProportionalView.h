/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSMutableDictionary;

@interface DEProportionalView : NSView
{
    NSMutableDictionary *initialSubviewLocationDict;
    BOOL _proportionalOff;
}

- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)setProportionalOff:(BOOL)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
