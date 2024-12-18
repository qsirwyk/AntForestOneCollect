#ifndef DTViewController_h
#define DTViewController_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseViewController.h"

@class UIView;

@interface DTViewController : DTBaseViewController
{
}

- (id)bee_busnessName;
- (_Bool)bee_canPerformFollowAction:(id)arg1;
- (_Bool)bee_canPerformFollowAction:(id)arg1 context:(id)arg2;
- (_Bool)bee_canPerformFollowAction:(id)arg1 context:(id)arg2 conti:(id)arg3;
- (id)bee_contentView;
@property(nonatomic) _Bool bee_exceptionIlustration;
@property(retain, nonatomic) UIView *bee_exceptionView;
- (void)bee_handleButtonClick:(id)arg1;
- (void)bee_handleError:(id)arg1;
- (void)bee_handleError:(id)arg1 completion:(id)arg2;
- (void)bee_handleError:(id)arg1 context:(id)arg2;
- (void)bee_handleError:(id)arg1 context:(id)arg2 completion:(id)arg3;
- (void)bee_handleError:(id)arg1 retry:(id)arg2;
- (void)bee_handleError:(id)arg1 retrySelector:(SEL)arg2;
- (void)bee_handleFollowAction:(id)arg1 context:(id)arg2;
- (void)bee_loadException:(long long)arg1 info:(id)arg2 retry:(_Bool)arg3 btnText:(id)arg4 selector:(SEL)arg5 buttonFollowActions:(id)arg6;
- (void)bee_loadException:(long long)arg1 info:(id)arg2 retry:(_Bool)arg3 selector:(SEL)arg4;
@property(nonatomic) SEL bee_retrySelector;
- (id)invGrayRootView_ap;
- (_Bool)isIlustrationImage;
- (void)loadView;
- (void)setInvGrayRootView_ap:(id)arg1;
- (void)stock_configNavigationTheme;

@end

#endif