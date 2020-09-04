//
//  SwankPlayerController+SwankInternalUseOnly.h
//  videokit
//
//  Created by chayes on 2/10/15.
//  Copyright (c) 2015 Andy Barker. All rights reserved.
//

#import "SwankPlayerController.h"

@interface SwankPlayerController (SwankInternalUseOnly)

// Swank-use-only api
/////////////////////

-(void) play: (NSString *) url;

-(void) close: (BOOL) triggerOnClose completion: (void (^)(void)) completionBlock;

// perform a full reset of the receiver's state in preparation for playing a new piece of content.
-(void) fullReset;

-(void) minimize;

-(void) onAppDeactivated;
-(void) onAppActivated;


+(SwankPlayerController *) shared;


// end Swank-use-only api
/////////////////////////

@end
