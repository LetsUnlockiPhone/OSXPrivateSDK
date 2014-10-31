/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

// Not exported
@interface TCMessageEntry : NSObject
{
    unsigned long long m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

+ (void)initialize;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=m_timeStamp;
- (void)addAffectedObject:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (id)description;
- (void)logWithCat:(id)arg1;
- (long long)timeStampCompare:(id)arg1;
- (int)getCount;
- (id)affectedObjects;
- (id)getParameter:(unsigned int)arg1;
- (unsigned long long)getParameterCount;
- (id)getMessageText;
- (int)getMessageTag;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(struct __va_list_tag [1])arg4;

@end
