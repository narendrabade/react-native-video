//
//  DrmProtocol.h
//  videokit
//
//  This protocol is used to abstract the specific drm in use.
//

#import <Foundation/Foundation.h>
#import "DashAudioSubtitleExtractor.h"
#import "WViPhoneAPI.h"
#import <AVFoundation/AVAsset.h>
#ifndef DrmProtocol_h
#define DrmProtocol_h


typedef void (^AssetReadyCallback)( AVAsset *);


typedef NS_ENUM(NSInteger, DrmType) {
    MarlinDash,
    WidevineClassic,
    NoDrm,
    WidevineModular
};


@protocol DrmProvider <NSObject>

@required

@property  DrmType CurrentDrmType;

@property NSString* ProductNumber;
@property NSString* PortalId;
@property NSString* LicenseServer;

@optional

- (void) initializeDrm:  (void (^)(int)) handler ;

@property  NSString* DrmInfo;
@property  TracksReadyCallback callback;
@property  AssetReadyCallback  assetReadyCallback;

- (NSURL*) setupProxyUrlWithLanguage:(NSURL*) rawUrl language:(NSString *) language;

- (void) switchAudioTrack:(int) trackId;

// widevine specific methods
-(void) initializeWidevine: (NSURL *) initializeUrl;

-(void) reset;

-(NSMutableString *) play: (NSURL *) url;

-(void) stop;


- (WViOsApiStatus) wideVinePlay: (NSString *) asset  playUrl:(NSMutableString *) url playData:(NSData *) authentication;


@end

#endif /* DrmProtocol_h */
