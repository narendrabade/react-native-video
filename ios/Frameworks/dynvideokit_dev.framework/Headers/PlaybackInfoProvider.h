//
//  ContentInfoProvider.h
//  Player
//
//  Created by Andy Barker on 3/7/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlaybackInfo.h"

@interface PlaybackInfoProvider : NSObject

@property NSString * getInfoUrl;
@property NSString * postInfoUrl;

- (id)initWith: (NSString *) getInfoUrl setInfoUrl: (NSString *) postInfoUrl;
- (void) savePlaybackPosition: (PlaybackInfo *) contentInfo;
- (void)sendPlaybackInfo:(PlaybackInfo *) playbackInfo callback:(void (^)(NSString *))OnComplete;
- (void)getPlaybackInfo:(NSString *)deviceId  contentUrl:(NSString *)contentUrl callback:(void (^)(PlaybackInfo *))OnComplete;

@end
