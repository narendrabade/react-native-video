//
//  SwankLog.h
//  videokit
//
//  Created by chayes on 5/20/15.
//  Copyright (c) 2015 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SwankLog : NSObject

+(SwankLog *) shared;     // singleton

+(void) info: (NSString *) message;

+(void) error: (NSString *) message;

-(BOOL) isLoggingToClipboardEnabled;


@end
