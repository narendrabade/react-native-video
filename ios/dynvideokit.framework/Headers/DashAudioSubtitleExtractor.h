//
// Created by Andy Barker on 1/18/16.
// Copyright (c) 2016 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifndef DashExtractor_h
#define DashExtractor_h

typedef void (^TracksReadyCallback)(int , NSDictionary *);


@interface DashAudioSubtitleExtractor : NSObject <NSXMLParserDelegate>


-(void)beginProcessing:(NSString *) assetUrlString onComplete: (TracksReadyCallback)  handler ;

@end

#endif