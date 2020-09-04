//
// Created by Andy Barker on 12/8/17.
// Copyright (c) 2017 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SwankPlayerController;
@class AVPlayerItem;

typedef void (^avPlayerItemCompletion)(AVPlayerItem * playerItem, NSString * errorMessage);

@interface SwankProtectedMediaLoader : NSObject


- (id) init;

- (void)dealloc;

// Creates a widevine protected AVPlayerItem asset and sends it back via the playerItemReady code block.
// Parameters:
// - videoUrl: The url of the video to be played.
// - settingsUrl: The service endpoint that provides Settings information.
// - playerItemReady: Completion code block that will be called when the asset is ready.
- (void)beginAVPlayerItemLoad:(NSString *)videoUrl settingsUrl:(NSString *)settingsUrl
           completionCallback:(avPlayerItemCompletion)playerItemReady;
@end