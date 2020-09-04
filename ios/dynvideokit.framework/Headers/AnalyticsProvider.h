//
//  AnalyticsProvider.h
//  videokit
//
//  Created by chayes on 5/21/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AnalyticsProvider : NSObject

    - (id) initWith: (NSString *) postEventUrl;
    -(void) playComplete: (NSString *) title uri: (NSString *) uri;

@end
