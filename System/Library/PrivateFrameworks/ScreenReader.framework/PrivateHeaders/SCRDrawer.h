//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRDrawer : SCRMapElement
{
    int _windowEdge;
}

- (BOOL)performDefaultActionWithRequest:(id)arg1;
- (BOOL)isContainerElement;
- (struct CGSize)size;
- (struct CGPoint)origin;
- (struct CGRect)visibleBounds;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end
