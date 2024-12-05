#ifndef RVKViewNode_Protocol_h
#define RVKViewNode_Protocol_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RVKContentView, RVKEvent, RVKKernel, RVKPage, RVKViewParam;

@protocol RVKViewNode <NSObject>
- (void)cancelInjctJS;
- (RVKContentView *)contentView;
- (RVKViewParam *)createParam;
- (id)initWithViewParam:(RVKViewParam *)arg1 parentObject:(RVKKernel *)arg2;
- (RVKPage *)page;
- (void)removeAllMessageHandler;
- (void)restoreContentView;
- (void)setupView;
- (void)startLoadRequest;

@optional
- (_Bool)dispatchEvent:(RVKEvent *)arg1;
@end

#endif