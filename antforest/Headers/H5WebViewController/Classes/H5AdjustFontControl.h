#ifndef H5AdjustFontControl_h
#define H5AdjustFontControl_h
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class H5FontButton, NSArray, NSString;

@interface H5AdjustFontControl : UIControl
{
    NSArray *_fontButtons;
    NSArray *_fontScales;
    H5FontButton *_selectedButton;
}

- (void)buttonClicked:(id)arg1;
@property(retain, nonatomic) NSArray *fontButtons; // @synthesize fontButtons=_fontButtons;
@property(copy, nonatomic) NSString *fontScale;
@property(retain, nonatomic) NSArray *fontScales; // @synthesize fontScales=_fontScales;
- (void)hideFontbar;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) H5FontButton *selectedButton; // @synthesize selectedButton=_selectedButton;

@end

#endif