/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SCTMenuItem : NSObject
{
    struct OpaqueMenuRef *mMenu;
    unsigned short mItemIndex;
}

- (BOOL)isVisible;
- (BOOL)validateItem;
- (unsigned short)itemIndex;
- (void)setMenu:(struct OpaqueMenuRef *)arg1;
- (struct OpaqueMenuRef *)menu;
- (id)description;
- (id)initWithMenu:(struct OpaqueMenuRef *)arg1 item:(unsigned short)arg2;

@end

