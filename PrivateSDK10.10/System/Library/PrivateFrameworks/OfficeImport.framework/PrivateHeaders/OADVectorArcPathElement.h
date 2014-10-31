/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADPathElement.h>

// Not exported
@interface OADVectorArcPathElement : OADPathElement
{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
    struct OADAdjustPoint mStartVector;
    struct OADAdjustPoint mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}

- (id).cxx_construct;
- (BOOL)connectedToPrevious;
- (BOOL)clockwise;
- (struct OADAdjustPoint)endVector;
- (struct OADAdjustPoint)startVector;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)right;
- (struct OADAdjustCoord)top;
- (struct OADAdjustCoord)left;
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8;

@end
