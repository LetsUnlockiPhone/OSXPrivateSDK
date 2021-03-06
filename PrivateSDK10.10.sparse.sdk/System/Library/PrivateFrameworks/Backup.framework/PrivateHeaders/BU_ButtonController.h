/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Backup/BU_TViewController.h>

@class BU_Button, BU_TBackupView;

// Not exported
@interface BU_ButtonController : BU_TViewController
{
    BU_TBackupView *_backupView;
    BU_Button *_cancelButton;
    BU_Button *_restoreButton;
    BU_Button *_previousButton;
    BU_Button *_nextButton;
}

@property(nonatomic) BU_Button *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) BU_Button *previousButton; // @synthesize previousButton=_previousButton;
@property(nonatomic) BU_Button *restoreButton; // @synthesize restoreButton=_restoreButton;
@property(nonatomic) BU_Button *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)loadView;
- (id)nibName;
- (id)initWithFrame:(struct CGRect)arg1 andBackupView:(id)arg2;

@end

