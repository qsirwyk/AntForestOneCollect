#ifndef DTContext_h
#define DTContext_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DFLoadingPageManager, UINavigationController, UIWindow;

@interface DTContext : NSObject
{
    DFLoadingPageManager *_loadingManager;
}

+ (void)doMTLoadWork;
- (unsigned long long)acquireAppCentralMode:(id)arg1;
- (id)acquireCurrentDelayReleaseApplications;
- (_Bool)appIsExistInDelayReleaseStacks:(id)arg1;
- (id)appStackContexts;
- (_Bool)attachPageForViewController:(id)arg1 withPageId:(id)arg2;
- (_Bool)attachPageForViewController:(id)arg1 withPageId:(id)arg2 params:(id)arg3;
- (id)attachPageSync:(id)arg1;
- (id)attachPageSync:(id)arg1 onApplicaton:(id)arg2;
- (id)attachPageSync:(id)arg1 onApplicaton:(id)arg2 params:(id)arg3;
- (_Bool)backToLauncherApplicationWithParams:(id)arg1 currentVc:(id)arg2 animated:(_Bool)arg3;
- (_Bool)backToLauncherApplicationWithParams:(id)arg1 currentVc:(id)arg2 animated:(_Bool)arg3 completeBlock:(id)arg4;
- (_Bool)beginAppTransaction;
- (_Bool)canHandleStartApplication:(id)arg1 params:(id)arg2;
- (void)clearDelayReleaseApplications;
- (void)clearDelayReleaseApplicationsForApp:(id)arg1;
- (void)clearDelayReleaseApplicationsWithAppIdList:(id)arg1;
- (void)clearObjectForDelayReleaseStacks;
- (void)clearObjectForDelayReleaseStacksWithStackId:(id)arg1;
- (_Bool)closeWindow:(id)arg1;
- (void)commitAppTransaction;
- (id)createPageByPageContainer:(id)arg1 params:(id)arg2;
- (id)createPageByPageURL:(id)arg1 containerPage:(id)arg2 params:(id)arg3;
- (id)currentApplication;
- (id)currentRegion;
- (id)currentVisibleMicroPage;
- (id)currentVisibleViewController;
- (_Bool)didLoadDylibFailedWhenCreateApp:(id)arg1;
- (void)excuteOnFrameworkQueue:(id)arg1;
- (id)findApplicationByName:(id)arg1;
- (id)findApplicationsByName:(id)arg1;
- (id)findServiceByName:(id)arg1;
- (id)findWindow:(id)arg1;
- (void)finishPage:(id)arg1;
- (id)getGlobalData;
- (id)getMetaData:(id)arg1;
- (id)getMetaDataIncludeH5:(id)arg1;
- (id)getMinimizeApplicationForAppStack;
- (_Bool)hideWindow:(id)arg1;
- (_Bool)isChanging;
- (id)launcherApplication;
@property(retain, nonatomic) DFLoadingPageManager *loadingManager; // @synthesize loadingManager=_loadingManager;
- (_Bool)mt_startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (void)pageStateChangedTo:(unsigned long long)arg1 page:(id)arg2;
- (_Bool)pageTransitionShouldIntercept:(unsigned long long)arg1 sourcePage:(id)arg2 targetPage:(id)arg3 pages:(id)arg4;
- (id)previousRegion;
- (_Bool)registerService:(id)arg1 forName:(id)arg2;
- (_Bool)registerServiceWithClass:(Class)arg1 forName:(id)arg2 lazyLoading:(_Bool)arg3;
- (_Bool)registerStartApplicationHandler:(id)arg1;
- (_Bool)registerStartApplicationHandler:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reinitAllServices:(id)arg1;
- (void)setViewControllers:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 forApplicationObject:(id)arg2 animated:(_Bool)arg3;
- (_Bool)showWindow:(id)arg1;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 animated:(_Bool)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4 sourceId:(id)arg5;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 appClearTop:(_Bool)arg3 launchMode:(long long)arg4 sourceId:(id)arg5 sceneParams:(id)arg6;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (_Bool)startApplication:(id)arg1 params:(id)arg2 sceneParams:(id)arg3 animated:(_Bool)arg4;
- (_Bool)startLogonApplicationForSync:(id)arg1 params:(id)arg2 launchMode:(long long)arg3;
- (_Bool)startRegionChange:(id)arg1;
- (id)startWindow:(id)arg1 params:(id)arg2;
- (id)statusBar;
- (_Bool)syncStartApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4 sceneParams:(id)arg5;
- (id)topPresentedNavigationController;
- (_Bool)unifiedNavAllSwitch;
- (_Bool)unifiedNavAllSwitchVerifyAppMode:(_Bool)arg1;
- (_Bool)unifiedNavCentralSwitch;
- (_Bool)unifiedNavStackAliveSwitch:(id)arg1;
- (_Bool)unifiedNavSwitch;
- (_Bool)unifiedSuspendedBallSwitch;
- (void)unregisterAllServices:(id)arg1;
- (void)unregisterServiceForName:(id)arg1;
- (void)unregisterStartApplicationHandler:(id)arg1;
- (void)updateMetaDataToServer:(id)arg1 result:(id)arg2;
- (void)updateNavSwitch;
- (void)updateOriginMetaDataToServer:(id)arg1 result:(id)arg2;
- (id)viewControllersOfApplication:(id)arg1;
- (id)viewControllersOfApplicationObject:(id)arg1;
- (unsigned long long)visitAnimateStatus;
- (id)visitApplictionOnReopening;
- (id)windowTokensWithWindowID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UINavigationController *navigationController; // @dynamic navigationController;
@property(retain, nonatomic) UIWindow *window; // @dynamic window;

@end

#endif