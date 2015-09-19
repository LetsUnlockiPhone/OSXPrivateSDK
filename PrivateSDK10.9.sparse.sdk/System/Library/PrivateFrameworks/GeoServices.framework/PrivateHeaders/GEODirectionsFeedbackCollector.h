//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackCollection *_currentFeedbackCollection;
    NSMutableSet *_routeIDs;
}

@property(retain, nonatomic) NSMutableSet *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection; // @synthesize currentFeedbackCollection=_currentFeedbackCollection;
- (void)endFeedbackSessionWithLocationWhereRouteWasCancelled:(id)arg1;
- (void)addRouteID:(id)arg1 stepID:(unsigned int)arg2;
- (void)startFeedbackSessionForResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;

@end
