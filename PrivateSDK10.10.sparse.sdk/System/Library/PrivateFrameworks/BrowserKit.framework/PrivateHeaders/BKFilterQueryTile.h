/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProTile.h"

@class BKArrangeItems, BKFilterQueryModule, NSArray, NSArrayController, NSObject<BKItem><BKItemProvider><BKItemProviderFilterPredicate>, NSPredicate, NSProPopUpButton, NSProTableView, NSString;

// Not exported
@interface BKFilterQueryTile : NSProTile
{
    NSArrayController *_itemController;
    NSProTableView *_tableView;
    NSProPopUpButton *_keyMenu;
    NSObject<BKItem><BKItemProvider><BKItemProviderFilterPredicate> *_itemProvider;
    BKArrangeItems *_filter;
    NSArray *_arrangedItems;
    NSArray *_selectedItems;
    NSString *_itemKey;
    NSPredicate *_inputFilterPredicate;
    BKFilterQueryModule *_module;
}

+ (id)keyPathsForValuesAffectingOutputFilterPredicate;
+ (id)keyPathsForValuesAffectingSearchPredicates;
- (void)doubleClickAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)tableView;
- (unsigned long long)numberOfSelectedItems;
- (void)setSelectedKeys:(id)arg1;
- (id)selectedKeys;
- (void)setItemKey:(id)arg1;
- (id)outputFilterPredicate;
- (id)searchPredicate;
- (void)setInputFilterPredicate:(id)arg1;
- (id)inputFilterPredicate;
- (void)setItemProvider:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)menuChanged:(id)arg1;

@end

