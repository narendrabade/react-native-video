//
//  FakeSmilWVApiProxy.h
//  videokit
//
//  Created by chayes on 5/14/14.
//  Copyright (c) 2014 Andy Barker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WVApiProxy.h"
#import "DrmProtocol.h"



@interface FakeSmilWVApiProxy : NSObject <WVApiProxy, NSXMLParserDelegate>

@property WViOsApiStatusCallback callback;
@property (nonatomic, weak) id<DrmProvider> drmProvider;

@end
