/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ProThemeStorage
- (void)invalidateCache;
- (struct _prothemecursor)themeCursorWithID:(unsigned long long)arg1;
- (union _themeatom_union)decodeThemeAtomWithCoder:(id)arg1;
- (void)encodeThemeAtom:(union _themeatom_union)arg1 withCoder:(id)arg2;
- (id)patternForThemeAtom:(union _themeatom_union)arg1;
- (id)maskForThemeAtom:(union _themeatom_union)arg1;
- (id)imageForThemeAtom:(union _themeatom_union)arg1;
@end
