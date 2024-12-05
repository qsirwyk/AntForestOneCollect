#ifndef H5TabbarManager_h
#define H5TabbarManager_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVPTabBarManager.h"

#import "TabBarProtocol-Protocol.h"

@class H5WebViewController, NSDictionary, NSMutableArray, NSString, UITabBar;

@interface H5TabbarManager : RVPTabBarManager <TabBarProtocol>
{
}


// Remaining properties
@property(retain, nonatomic) NSDictionary *cachedChildViewControllers;
@property(nonatomic) __weak H5WebViewController *cachedParentViewController;
@property(readonly, nonatomic) unsigned long long childTabCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSMutableArray *delayTabBarTasks;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAlphaBackgroundColor;
@property(readonly, nonatomic) _Bool hasChildTab;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isChildTab;
@property(readonly, nonatomic) _Bool isNotVisibleWhenMultiTab;
@property(retain, nonatomic) UITabBar *placeholderTabBar;
@property(retain, nonatomic) NSString *selectedTag;
@property(readonly, nonatomic) H5WebViewController *selectedViewController;
@property(nonatomic) _Bool stopConstructAppearance;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITabBar *tabBar;
@end

#endif