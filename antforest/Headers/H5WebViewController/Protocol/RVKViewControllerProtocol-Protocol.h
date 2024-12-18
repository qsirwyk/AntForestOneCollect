#ifndef RVKViewControllerProtocol_Protocol_h
#define RVKViewControllerProtocol_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "RVKExpandoProtocol-Protocol.h"

@class NSArray, NSString, NSURL, NSURLRequest, RVAPVReporter, RVAViewControllerStatus, RVKContentView, RVKScene, RVKSceneParam, RVKSession, RVKView, UIViewController;
@protocol RVANavigationTitleViewProtocol, RVAOptionsProtocol, RVKViewControllerDelegate, RVKViewControllerProxyProtocol;

@protocol RVKViewControllerProtocol <NSObject, RVKExpandoProtocol>

@optional
- (void)addDelayCallback:(void (^)(void))arg1;
- (void)associateWeakScene:(RVKScene *)arg1 sceneParam:(RVKSceneParam *)arg2;
- (void)back;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(void (^)(id))arg4;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 responseCallback:(void (^)(id))arg3;
@property(readonly, copy, nonatomic) NSString *channelId;
- (NSString *)codeSnippets4InsertAlipayJsBridgeFile;
@property(readonly, copy, nonatomic) NSString *customUserAgent;
- (NSArray *)dyJsUrls;
- (NSArray *)independenceUserScripts;
- (void)initUI:(RVKView *)arg1 delegate:(id <RVKViewControllerDelegate>)arg2;
- (void)injctIndependenceJs;
- (void)injctJsRelyOnAlipayJsBridge;
@property(readonly, nonatomic) RVAViewControllerStatus *myFlags;
- (id <RVANavigationTitleViewProtocol>)navigationTitleView;
- (void)onPageDidCreate:(RVKScene *)arg1 param:(RVKSceneParam *)arg2;
@property(readonly, nonatomic) id <RVAOptionsProtocol> options;
@property(retain, nonatomic) RVAPVReporter *pvReporter;
- (NSArray *)relayOnAlipayJsBridgeUserScripts;
- (RVKContentView *)rvkContentView;
- (RVKScene *)rvkScene;
- (RVKSession *)rvkSession;
- (RVKSession *)rvkSessionWithLog;
- (RVKView *)rvkView;
- (RVKScene *)scene;
- (void)sendCreateRightItemsEvent;
- (RVKSession *)session;
- (void)setSourceInfo:(NSString *)arg1;
- (void)setSourcePageId:(NSString *)arg1;
- (void)setViewControllerLifeEventListener:(RVKScene *)arg1;
- (_Bool)shouldSkipHandleLoadWithRequest:(NSURLRequest *)arg1 navigationType:(long long)arg2;
- (NSString *)sourceInfo;
- (NSString *)sourcePageId;
- (void)startFirstLoadRequest:(NSURL *)arg1;
- (NSString *)startupParamsJs;
- (UIViewController *)viewController;
- (id <RVKViewControllerProxyProtocol>)viewControllerIMP;
@end

#endif