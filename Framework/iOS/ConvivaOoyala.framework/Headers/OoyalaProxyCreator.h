//
//  OoyalaProxyCreator.h
//  iOSClient
//
//  Created by Gaurav on 26/06/18.
//  Copyright © 2018 Nirvaid Rathore. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OoyalaProxyCreator : NSObject

/// @brief Create Ooyala Proxy object
///
/// \param streamer instance is passed
/// \return Returns Conviva Ooyala Proxy object

+ (id)createOoyalaProxy:(id)streamer;

/// @brief Destroy Ooyala Proxy object
///
/// \param streamer Proxy object which was created using createOoyalaProxy method

+ (void)cleanUpProxy:(id)streamer;

@end
