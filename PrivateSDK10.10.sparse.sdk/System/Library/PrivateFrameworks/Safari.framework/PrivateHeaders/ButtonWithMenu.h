/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/ButtonPlus.h>

// Not exported
@interface ButtonWithMenu : ButtonPlus
{
    SEL _showMenuAction;
    BOOL _showsMenuImmediatelyOnMouseDown;
}

- (void)mouseDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (BOOL)showMenu;
- (void)setShowMenuAction:(SEL)arg1;
- (SEL)showMenuAction;
- (BOOL)showsMenuImmediatelyOnMouseDown;
- (void)setShowsMenuImmediatelyOnMouseDown:(BOOL)arg1;

@end
