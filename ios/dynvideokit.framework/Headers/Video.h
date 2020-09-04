//
//  Video.h
//  videokit
//
//  Created by chayes on 8/22/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SubtitleHandler.h"
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>
#import "PlaybackInfo.h"
#import "DrmProtocol.h"

@interface Video : NSObject

@property NSURL * url;
@property PlaybackInfo * playbackInfo;
@property NSString * title;
@property BOOL isBumper;
@property BOOL isFeature;
@property BOOL initialPlaybackPositionRestored;
@property BOOL useHttps;

@property (atomic) int selectedSubtitleIndex;
@property (atomic) int currentAudioTrackIndex;

@property SubtitleHandler * subtitleHandler;
@property id<DrmProvider> drmProvider;

@property NSMutableArray *  audioTrackIds;
@property NSMutableArray *  audioTrackNames;

// public methods

@property(nonatomic) BOOL initProcess;

-(void) initiatePlayback;

-(void) reset;

-(void) resumePlaybackAtSavedPosition;

-(void) onWidevineInitialized;

//-(void) avPlayer: (AVPlayer *) avPlayer avPlayerItem: (AVPlayerItem *) avPlayerItem;

-(BOOL) hasAvPlayer;
-(BOOL) hasSubtitles;

-(float) duration;
-(float) currentTime;
-(float) timeLeft;
-(void) seekToTime: (double) time;


-(BOOL) isPlaying;
-(void) pause;
-(void) play;
-(void) togglePlayPause;

-(BOOL) isPastNinetyPercentPoint;

-(BOOL) isWidevineProtected;
-(BOOL) isCustomContent;

-(void) processSubtitleInfo:(NSDictionary *)attributes;

+(NSString *) stringFormattedTimeFromSeconds: (double)seconds;

- (void)processAudio:(NSDictionary *)dictionary;

- (void) UpdateAudio;
@end
