//
//  PlaybackInfo.h
//  videokit
//
//  Created by Andy Barker on 3/7/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*NSString * const ciErrorNetwork = @"Network is not available";

NSString * const  ciObserveSubtitleIndex = @"currentSubtitleIndex";
NSString * const  ciObserveAudioTrackIndex = @"currentAudioTrackIndex";


uint const ciDefaultErrorCode = 5001; */

@interface PlaybackInfo : NSObject

@property  NSString * urlString;
@property  NSString *  deviceId;
@property  int playbackPosition;
@property (readonly)  NSString *  title;
@property  NSString *  synopsis;
@property  NSString *  posterArt;

@property  BOOL  errorDetected;
@property  NSString *  errorMessage;
@property  uint  errorCode;
@property BOOL loggingAllowed;
@property BOOL playbackComplete;

-(void) setErrorState: (bool) errorDetected  errorMessage: (NSString *) message  errorCode: (uint) code;

@end
