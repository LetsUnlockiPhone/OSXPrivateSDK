//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CALayer, NSView, NSWindow, PKPass, PKPassBackView, PKPassFrontView;

@interface PKPassViewController : NSViewController
{
    NSView *flipFromView;
    CALayer *flipFromLayer;
    NSView *flipToView;
    CALayer *flipToLayer;
    NSWindow *_flipWindow;
    CALayer *flipShadowLayer;
    BOOL _isFlipped;
    BOOL _disableActions;
    PKPass *_pass;
    PKPassFrontView *_frontView;
    PKPassBackView *_backView;
}

+ (struct CGSize)maxViewSize;
+ (id)passViewController;
@property BOOL disableActions; // @synthesize disableActions=_disableActions;
@property(readonly) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(readonly) PKPassBackView *backView; // @synthesize backView=_backView;
@property(readonly) PKPassFrontView *frontView; // @synthesize frontView=_frontView;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)flipClicked:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)flipWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
