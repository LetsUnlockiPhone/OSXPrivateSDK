/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "TKPickerOutlineViewEventHandlingDelegate-Protocol.h"
#import "TKTonePickerContentViewController-Protocol.h"
#import "TKTonePickerControllerDelegate-Protocol.h"
#import "TKTonePickerControllerDelegateInternal-Protocol.h"

@class NSResponder, NSString, NSTimer, NSView, TKPickerOutlineView, TKTonePickerController;

@interface TKTonePickerOutlineViewController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, TKPickerOutlineViewEventHandlingDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerContentViewController>
{
    BOOL _updatingSelectionProgrammatically;
    id <TKTonePickerContentViewControllerDelegate> _delegate;
    TKPickerOutlineView *_outlineView;
    TKTonePickerController *_tonePickerController;
    long long _previouslySelectedRow;
    NSTimer *_selectionConsistencyRestorationTimer;
}

@property(retain, nonatomic, setter=_setSelectionConsistencyRestorationTimer:) NSTimer *_selectionConsistencyRestorationTimer; // @synthesize _selectionConsistencyRestorationTimer;
@property(nonatomic, setter=_setPreviouslySelectedRow:) long long _previouslySelectedRow; // @synthesize _previouslySelectedRow;
@property(nonatomic, getter=_isUpdatingSelectionProgrammatically, setter=_setUpdatingSelectionProgrammatically:) BOOL _updatingSelectionProgrammatically; // @synthesize _updatingSelectionProgrammatically;
@property(retain, nonatomic, setter=_setTonePickerController:) TKTonePickerController *_tonePickerController; // @synthesize _tonePickerController;
@property(retain, nonatomic, setter=_setOutlineView:) TKPickerOutlineView *_outlineView; // @synthesize _outlineView;
@property(nonatomic) id <TKTonePickerContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (BOOL)pickerOutlineViewHandleReturnKeyDown:(id)arg1;
- (void)pickerOutlineViewDidFinishHandlingMouseDrag:(id)arg1;
- (void)pickerOutlineViewWillBeginHandlingMouseDrag:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)_scrollSelectedToneToVisible;
- (void)_reloadData;
- (void)_didUpdateExpandedStatus:(BOOL)arg1 withNotification:(id)arg2;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (id)_pickerTableCellForTonePickerItem:(id)arg1;
- (void)_clearOutlineViewSelection;
- (void)_selectOutlineViewRow:(long long)arg1 allowingDelegateCallback:(BOOL)arg2;
- (void)_selectOutlineViewRow:(long long)arg1;
- (void)_performBlockAffectingSelection:(id)arg1;
- (void)_needsSelectionConsistencyRestoration;
- (void)_restoreSelectionConsistency;
- (void)viewDidAppear;
- (void)loadView;
@property(readonly, nonatomic) NSResponder *tonePickerResponder;
@property(readonly, nonatomic) NSView *tonePickerContentView;
- (void)dealloc;
- (id)initWithTonePickerController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
