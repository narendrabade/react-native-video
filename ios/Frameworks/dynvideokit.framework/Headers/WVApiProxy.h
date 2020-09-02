//
//  WVApiProxy.h
//  videokit
//
//  Created by chayes on 5/14/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WViPhoneAPI.h"
#import "DrmProtocol.h"


@protocol WVApiProxy <NSObject>

- (WViOsApiStatus) play: (NSString *) assetUrlString url: (NSMutableString *) url auth: (NSData *) authentication;
- (WViOsApiStatus) selectAudioTrack: (int) trackNumber;
@property (nonatomic, weak) id<DrmProvider> drmProvider;

@property WViOsApiStatusCallback callback;

@end
