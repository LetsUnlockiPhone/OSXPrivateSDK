/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IFDInstallController : NSObject
{
    struct IFDInstallController_Private *_private;
}

+ (void)initialize;
+ (id)timeRemainingStringWithEstimate:(double)arg1;
- (BOOL)hasSuccessfullyAuthorized:(int)arg1;
- (void)cancel;
- (void)skipCurrentPhase;
- (int)installState;
- (BOOL)startInstall;
- (void)usePostinstallActions:(id)arg1;
- (void)usePreinstallActions:(id)arg1;
- (id)postinstallActions;
- (id)preinstallActions;
- (void)setCustomization:(id)arg1;
- (id)customization;
- (id)customizationControllerForTarget:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)targetController;
- (void)setDelegate:(id)arg1;
- (id)distribution;
- (void)dealloc;
- (id)initWithDistribution:(id)arg1;
- (void)installDidFail:(id)arg1;
- (void)installDidSucceed:(id)arg1;
- (void)installJobDidSucceed:(id)arg1;
- (void)installJobDidStart:(id)arg1;
- (void)packageInstallDidSucceed:(id)arg1;
- (void)endJobsDidEnd:(id)arg1;
- (void)endJobsWillBegin:(id)arg1;
- (void)handlePackageStartedMessage:(id)arg1;
- (void)handlePhaseMessage:(id)arg1;
- (void)handleProgressMessage:(id)arg1;
- (void)handleStatusMessage:(id)arg1;
- (void)installPackages:(id)arg1 withOptions:(id)arg2;
- (void)_deregisterForSleepNotifications;
- (void)_registerForSleepNotifications;
- (struct AuthorizationOpaqueRef *)authorizationRef;
- (void)setForceNoAuthInstall:(BOOL)arg1;
- (void)setInstallState:(int)arg1;
- (BOOL)_cancelRequested;
- (id)_estimateTimeRemainingWithProgress:(double)arg1;
- (double)_calculateTotalInstalledSize;
- (id)_buildInstallPlan;
- (id)_buildPackageListAndRequestMedia:(id)arg1;
- (id)_addInstallOptionsForActions:(id)arg1;
- (id)_createFinalPackageUsingLocalURL:(id)arg1 returningError:(id *)arg2;
- (void)_installNextPackage;
- (void)_finishUpCurrentMedia;
- (id)customizationControllerForTarget:(id)arg1 ignoringContents:(BOOL)arg2;
- (BOOL)hasCachedCustomizationControllerForTarget:(id)arg1;
- (void)_install;
- (void)_mediaAppeared:(id)arg1;
- (void)_diskEjected:(id)arg1;
- (BOOL)ejectAllEjectableMedia;
- (BOOL)ejectMedia:(id)arg1;
- (BOOL)requestMedia:(id)arg1;
- (id)findMediaNamed:(id)arg1;
- (id)resolvePackageRequestingMedia:(id)arg1;
- (void)messageDelegateRequestLocatorDecision:(id)arg1;
- (void)messageDelegateRequestedMediaAccepted:(id)arg1;
- (void)messageDelegateRequestMedia:(id)arg1;
- (void)messageDelegateInstallError:(id)arg1;
- (void)messageDelegateInstallTimeRemaining:(id)arg1;
- (void)messageDelegateInstallProgress:(id)arg1;
- (void)messageDelegatePackageStarted:(id)arg1;
- (void)messageDelegateJobStarted:(id)arg1;
- (void)messageDelegateInstallPhase:(id)arg1;
- (void)messageDelegateInstallStatus:(id)arg1;
- (void)messageDelegateInstallFinished;
- (void)messageDelegateInstallStarted;
- (void)_resolveAllComponentsForPackages:(id)arg1 setResultInPackage:(BOOL)arg2;
- (void)_locateSoftwareWithLocator;
- (BOOL)canPerformOSInstallOperations;
- (id)downloadProgressController;

@end
