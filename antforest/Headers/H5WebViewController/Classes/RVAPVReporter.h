#ifndef RVAPVReporter_h
#define RVAPVReporter_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVAContentViewPageDelegate-Protocol.h"

@class NSString, RVAContentViewPageProfile;

@interface RVAPVReporter : NSObject <RVAContentViewPageDelegate>
{
    _Bool _visible;
    NSString *_nbl_id;
    NSString *_entranceUrl;
    RVAContentViewPageProfile *_lastPage;
    NSString *_finalUrl;
}

- (void)contentViewPageComplete:(id)arg1;
- (void)contentViewPageEnd:(id)arg1;
- (void)contentViewPagePaused:(id)arg1;
- (void)contentViewPageResume:(id)arg1;
- (void)contentViewPageStart:(id)arg1;
@property(copy, nonatomic) NSString *entranceUrl; // @synthesize entranceUrl=_entranceUrl;
@property(copy, nonatomic) NSString *finalUrl; // @synthesize finalUrl=_finalUrl;
@property(retain, nonatomic) RVAContentViewPageProfile *lastPage; // @synthesize lastPage=_lastPage;
@property(copy, nonatomic) NSString *nbl_id; // @synthesize nbl_id=_nbl_id;
- (void)reportLastPageIfNeeded;
- (void)reportPerformanceAndAbnormal:(id)arg1;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)viewWillAppear;
- (void)viewWillDestroy;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif