//
//  Settings.h
//  videokit
//
//  Created by chayes on 8/22/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WidevineSettings : NSObject

@property NSString * wvPortalId;
@property NSString * swankPortalId;
@property NSString * wvProxy;
@property NSString * wvDrmServerKey;
@property NSString * marlinProxy;
@property NSString * cencWidevineLicenseUrl;

-(BOOL) hasSwankPortalId;

-(NSString *) asString;

@end
