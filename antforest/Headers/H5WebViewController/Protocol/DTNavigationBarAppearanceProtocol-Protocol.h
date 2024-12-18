#ifndef DTNavigationBarAppearanceProtocol_Protocol_h
#define DTNavigationBarAppearanceProtocol_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIColor, UIImage, UIView;

@protocol DTNavigationBarAppearanceProtocol <NSObject>

@optional
- (_Bool)autohideNavigationBar;
- (UIView *)customNavigationBar;
- (UIImage *)customNavigationBarBackButtonImage;
- (UIColor *)customNavigationBarBackButtonTitleColor;
- (NSArray *)customNavigationBarLoadingViewColors;
- (UIColor *)customNavigationBarTitleColor;
- (long long)customStatusBarStytle;
- (UIColor *)opaqueNavigationBarColor;
@end

#endif