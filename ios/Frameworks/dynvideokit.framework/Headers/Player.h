//
//  Player.h
//  videokit
//
//  Created by chayes on 1/23/15.
//  Copyright (c) 2015 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface Player : NSObject


@property AVPlayerItem * avPlayerItem;


-(void) loadVideo: (NSString *) hlsUrlString;

-(void) stopAndEject;
-(void) pause;
-(void) play;
-(BOOL) isPlaying;
-(void) seekTo: (CMTime) seconds;
-(BOOL) wasPlayingFlag;
-(BOOL) hasAvPlayer;

-(void) onAppWillEnterForeground;
-(void) onAppEnteredBackground;

-(CMTimeScale) timescale;
-(AVPlayerStatus) status;
-(CMTime) currentTime;


// static

+(Player *) shared;

- (void)loadVideoWithAsset:(AVAsset *)asset;     // Player singleton


@end
