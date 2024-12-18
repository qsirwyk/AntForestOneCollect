#ifndef H5MenuActionDelegate_Protocol_h
#define H5MenuActionDelegate_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class H5MenuAction, H5MenuItem;

@protocol H5MenuActionDelegate <NSObject>
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfBack:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfCopyLink:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfExist:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfFont:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfForward:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfJSApi:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfReload:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfReport:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfReportAbuse:(H5MenuItem *)arg2;
- (void)menuAction:(H5MenuAction *)arg1 didClickedMenuItemOfShowConsole:(H5MenuItem *)arg2;
@end

#endif