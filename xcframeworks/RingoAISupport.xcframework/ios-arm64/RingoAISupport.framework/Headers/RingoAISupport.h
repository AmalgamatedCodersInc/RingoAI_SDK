//
//  RingoAISupport.h
//  RingoAISupport
//
//  Created by roy on 9/26/24.
//

#import <Foundation/Foundation.h>
#import <RingoAISupport/RingoCV.h>

//! Project version number for zipper.
FOUNDATION_EXPORT double ringoAISupportVersionNumber;

//! Project version string for zipper.
FOUNDATION_EXPORT const unsigned char ringoAISupportVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <zipper/PublicHeader.h>

#if __cplusplus
extern "C" {
#endif
NSError* zipper(NSURL* folder, NSURL* zipFile, NSString* password);
#if __cplusplus
}
#endif

@interface RingoAISupport : NSObject
@end
