/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSControl.h"

@class NSArray;

@interface GKBubbleSegmentedControl : NSControl
{
    BOOL _layoutDueToSegmentChange;
    BOOL _finishedInitialLayout;
    BOOL _shouldAnimate;
    NSArray *_bubbleControls;
    double _overlap;
    long long _selectedSegmentIndex;
}

@property(nonatomic) BOOL shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) BOOL finishedInitialLayout; // @synthesize finishedInitialLayout=_finishedInitialLayout;
@property(nonatomic) BOOL layoutDueToSegmentChange; // @synthesize layoutDueToSegmentChange=_layoutDueToSegmentChange;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(retain, nonatomic) NSArray *bubbleControls; // @synthesize bubbleControls=_bubbleControls;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)didSelectBubble:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBubbleControls:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
