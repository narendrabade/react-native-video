//
//  VideoChooserURL.h
//  videokit
//
//  Created by chayes on 11/12/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoCatalogHostNameResolver : NSObject

-(void) onVideoPlaybackInitiatedFromBrowser: (NSURL *) incomingUrl;

-(NSString *) getWebsiteUrl;

-(NSString *) getChromecastId: (NSURL *) incomingUrl;

-(NSString *) getWebsiteUrlFromArchive;


@end
