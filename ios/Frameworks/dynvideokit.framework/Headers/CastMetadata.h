//
//  CastMetadata.h
//  dynvideokit
//
//  Created by devcast on 8/16/16.
//  Copyright © 2016 Andy Barker. All rights reserved.
//
//    Data structure for holding chromecast metadata

#ifndef CastMetadata_h
#define CastMetadata_h

@interface CastMetadata : NSObject {
  // protected vars
}

@property NSString *mediaUrl;
@property NSString *title;
@property NSString *synopsis;
@property NSString *thumbnailUrl;
@property NSString *appId;

-(NSString *) asString;

@end




#endif /* CastMetadata_h */
