//
//  OoyalaStreamerProxy.h
//  iOSClient
//
//  Created by Gaurav on 26/06/18.
//  Copyright © 2018 Nirvaid Rathore. All rights reserved.
//

#import <OoyalaSDK/OoyalaSDK.h>
#import "NativeStreamerProxy.h"
#import <UIKit/UIKit.h>

@interface OoyalaStreamerProxy : NativeStreamerProxy
- (instancetype)initWithStreamer:(id)streamer;
@end
