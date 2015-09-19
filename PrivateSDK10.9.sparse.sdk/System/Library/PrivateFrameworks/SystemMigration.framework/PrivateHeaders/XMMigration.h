//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, XMMigrationRequest, XMOperation, XMSandbox;

@interface XMMigration : NSObject
{
    XMMigrationRequest *_request;
    NSMutableArray *_operations;
    NSMutableArray *_operationWeights;
    XMOperation *_currentOperation;
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_updateQueue;
    id <XMMigrationDelegate> _delegate;
    id <XMMigrationRemoteDelegate> _remoteStatusDelegate;
    XMSandbox *_sandbox;
    NSDictionary *_scaleByType;
    double _currentOperationProgressPercentage;
    double _finishedOperationsProgressPercentage;
    double _lastTimeEstimatePercentComplete;
    double _averageCompletionPerSample;
    unsigned long long _samples;
    NSDate *_lastPercentCompleteUpdate;
    NSDate *_lastTimeRemainingUpdate;
    BOOL _isCancelled;
    NSString *_tracingUUID;
}

- (void)cancelMigration;
- (void)_queueOperations;
- (void)cancel;
- (void)startWithDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (void)operationDidFinishCommit:(id)arg1;
- (void)operationWillBeginCommit:(id)arg1;
- (void)operation:(id)arg1 appendImportParameters:(id)arg2 forComponent:(id)arg3 forUser:(id)arg4;
- (void)operationDidComplete:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 updatedPercentComplete:(id)arg2;
- (void)operation:(id)arg1 changedStatusMessage:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)operationStarted:(id)arg1;
- (void)_messageTraceFinishedWithError:(id)arg1;
- (void)_messageTraceStarted;
- (void)_updateTimeRemaining;
- (void)_setPercentComplete:(double)arg1;
- (void)_setStatusCompleteWithError:(id)arg1 warnings:(id)arg2;
- (void)_setStatusImportingUserData:(id)arg1;
- (void)_setStatusCancelling;
- (void)_setStatus:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4;
- (void)_setStatusStarted;

@end
