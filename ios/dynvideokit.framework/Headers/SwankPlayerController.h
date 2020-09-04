//
//  Copyright (c) 2015 Swank Motion Pictures. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// comment out the videoplay.h import below for distribution.
#import "VideoPlayer.h"
#import "DrmProtocol.h"

@class AVPlayerItem;

// CALLBACKS into client controller
// ********************************

@protocol SwankPlayerControllerDelegate <NSObject>
@required

- (void) onOffsetFired: (int) offset;
// Called every 30 seconds.
// offset: the current position (in seconds) within the video.


- (void) onClose;
// Called in three scenarios:
// 1)      when the user presses the “DONE” button on the player.
// 2)      when the client application invokes the “close” method.
// 3)      when playback completes (end of video reached).


- (void) onError: (NSString*) errorMessage;
// Called when the player encounters an error. In addition, the player view is hidden
// and the client application view is brought to the foreground.
// - errorMessage: A message describing the error encountered.


@end


// PUBLIC API
//***********

@interface SwankPlayerController : UIViewController<VideoPlayerDelegate>
// Replace the line above with the one below for distribution
// @interface SwankPlayerController : UIViewController


-(id) initWithViewController: (UIViewController <SwankPlayerControllerDelegate> *) clientViewController;
// Causes the receiver to add its view as a subview of clientViewController
// and allows the SwankPlayerController to subsequently invoke delegate methods on the clientViewController.
// Parameters:
// - clientViewController: The UIViewController instance to which the SwankPlayerController and it's view is to be added.



-(void) play: (NSString *) videoUrl settingsUrl: (NSString *) settingsUrl startingAt: (int) offsetSeconds portal: (NSString *) portal;
// Start playback of the specified videoUrl starting at the specified offset (in seconds).
// The player view is brought to the foreground and occupis the entire screen.
// Parameters:
// - videoUrl: The url of the video to be played.
// - settingsUrl: The service endpoint that provides Settings information.
// - offsetSeconds: The offset in seconds where playback should begin.
// - portal: Optional. A GUID provided by Swank indicating the collection of content to stream from.
//           If no value is provided, the portal specified in retrieved Settings will be used.


-(int) pause;
// Pauses playback of the currently loaded video.
// Returns the current position (in seconds) within the video.


-(int) resume;
// Resumes playback of the currently loaded video.
// Returns the current position (in seconds) within the video.


-(void) close;
// Stops playback, hides the player view, and brings the client application view to the foreground.
// Following execution of this method, pause and resume operations are no longer allowed until
// play:settingsUrl: is called.


-(void) includeControls: (BOOL) visible;
// Configures the player to include or not include controls (play/pause, time scrubber, volume) in the UI.
// Parameters:
// - includeControls: If YES, controls are shown when the user taps the device and automatically hidden after a period of inactivity.
//                    If NO, controls are never shown on the player.

-(void) includeVolumeControl: (BOOL) includeVolumeControl;
// Configures the player to include or not include the volume control in the UI.
// Parameters:
// - includeVolumeControl: If YES, the volume control is included in the player UI.
//                         If NO, the volume control is not included.
//
// If this method is not called, the default behavior is to NOT include the volume control.
@property id<DrmProvider> drmProvider;


@end

