//
//  WidevineSettingsProvider.h
//
//  Created by Andy Barker on 3/4/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WidevineSettings.h"
#import "CastMetadata.h"

@interface WidevineSettingsProvider : NSObject

- (id) initWith: (NSString *) getSettingsUrl;
- (WidevineSettings *)getSettings;

- (WidevineSettings *) getDemoSettings;

- (CastMetadata *) getCastMetadata;

@end
