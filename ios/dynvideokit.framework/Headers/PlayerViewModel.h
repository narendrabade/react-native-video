//
//  PlayerViewModel.h
//  videokit
//
//  Created by chayes on 5/19/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PlaybackInfo.h"
#import "PlaybackInfoProvider.h"

#import "WidevineSettings.h"
#import "WidevineSettingsProvider.h"

#import "AnalyticsProvider.h"

#import <AVFoundation/AVFoundation.h>
#import "Video.h"
#import "Player.h"
#import "AVPlayerView.h"
#import "DrmProtocol.h"
#import "CastMetadata.h"


@interface PlayerViewModel : NSObject

// public properties
//==================


@property NSMutableArray * playList;
@property Video * currentVideo;

@property NSURL * incomingUrl;

@property WidevineSettings * widevineSettings;

@property CastMetadata * castMetadata;

@property (nonatomic, readonly) NSMutableDictionary *queryParameters;

@property (readonly) WidevineSettingsProvider * widevineSettingsProvider;
@property (readonly) PlaybackInfoProvider * playbackInfoProvider;
@property (readonly) AnalyticsProvider * analyticsProvider;

@property int savedPosition;

@property BOOL isInUseBySwankMediaPlayer;

@property BOOL includeVolumeControl;
@property BOOL UIDisabled;
@property void (^playerItemReady)(AVPlayerItem *, NSString *);


@property id<DrmProvider>  drmProvider;


// instance methods
//=================

// -(void) play: (NSString *) url startingAt: (int) offsetSeconds portal: (NSString *) wvPortal licenseServerUrl: (NSString *) licenseServerUrl;
-(void) play: (NSString *) videoUrl settingsUrl: (NSString *) settingsUrl startingAt: (int) offsetSeconds portal: (NSString *) wvPortal;

-(void) playUrl: (NSURL *) url;
-(Video *) popNextVideoFromPlayList;

-(void) stopAndUnload;

-(NSString *) serviceBaseUrl;
-(void) onVideoPlaybackComplete;
-(void) onPlaylistPlaybackComplete;

-(BOOL) isPlayListEmpty;
-(void) savePlaybackPosition;
-(void) reset;

-(void) widevineInitialized: (NSDictionary *) attributes;
-(void) onWidevineError: (NSDictionary *) attributes;
-(void) onPlayerError: (NSDictionary *) attributes;
-(void) onError: (NSString *) errorMessage;

-(AVPlayerView *) avPlayerView;


// static (class) methods
//========================
+ (PlayerViewModel *) shared;     // Player singleton

+ (Video *) currentVideo;

+ (NSDictionary *)parseQueryString:(NSString *)query;

+ (WidevineSettings *) widevineSettings;
+ (void) setWidevineSettings: (WidevineSettings *) value;


@end


