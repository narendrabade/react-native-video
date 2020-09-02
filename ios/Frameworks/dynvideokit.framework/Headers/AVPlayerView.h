/* Copyright (C) 2012 IGN Entertainment, Inc. */

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MediaPlayer/MediaPlayer.h>
#import "WViPhoneAPI.h"
#import "OverlayView.h"


@interface AVPlayerView : UIView {
}


@property UIView * overlayView;

@property (readwrite) CGFloat padding;

@property (readwrite) UIEdgeInsets controlsEdgeInsets;
@property (nonatomic, readwrite, getter=isFullscreen) BOOL fullscreen;
@property (readwrite, strong) UIViewController *mainViewController;

@property (readonly, strong) UIActivityIndicatorView *activityIndicator;
@property (readonly, strong) UITextView *debugTextView;
@property (readonly, strong) UISwitch *debugAutoScroll;

- (void)setPlayer:(AVPlayer *) avPlayer;

@end
