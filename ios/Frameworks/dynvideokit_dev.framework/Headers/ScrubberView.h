//
//  ScrubberView.h
//  videokit
//
//  Created by chayes on 11/25/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScrubberView : UIView

@property (readwrite, strong) UISlider *timeSlider;
@property (readwrite, strong) UILabel *currentTimeLabel;
@property (readwrite, strong) UILabel *timeRemainingLabel;

@end
