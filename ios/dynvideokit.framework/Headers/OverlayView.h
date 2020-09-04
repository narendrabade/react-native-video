//
//  OverlayView.h
//  videokit
//
//  Created by chayes on 12/2/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerControlBarView.h"

@interface OverlayView : UIView

@property UIView * backgroundForUpperControls;
@property UIView * playerControlBarView;
@property UIView * subtitleView;
@property UIView * subtitleButtonView;
@property UIView * volumeView;
@property UIView * castView;

@property UILabel * videoTitleLabel;
@property UILabel * timeTillFeatureStartLabel;
@property UIButton * doneButton;


//-(void) setControlsAlpha: (float) alpha includeSubtitlesButton: (BOOL) includeSubtitlesButton;
//-(void) setBumperControlsAlpha: (float) alpha;

-(void) showControls;
-(void) hideAllControlsAnimated;
-(void) hideAllControls;

+(int) screenWidth;
+(int) screenHeight;

@end
