#ifndef WKUIDelegate_Protocol_h
#define WKUIDelegate_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController, WKContextMenuElementInfo, WKFrameInfo, WKNavigationAction, WKPreviewElementInfo, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, WKWindowFeatures;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol WKUIDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
//- (void)webView:(WKWebView *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
//- (void)webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
//- (void)webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
- (UIViewController *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (void)webView:(WKWebView *)arg1 requestDeviceOrientationAndMotionPermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 decisionHandler:(void (^)(long long))arg4;
- (void)webView:(WKWebView *)arg1 requestMediaCapturePermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 type:(long long)arg4 decisionHandler:(void (^)(long long))arg5;
- (void)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (_Bool)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 showLockdownModeFirstUseMessage:(NSString *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)webViewDidClose:(WKWebView *)arg1;
@end

#endif
