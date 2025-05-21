//
//  Support.h
//  Support
//
//  Created by roy on 2/13/25.
//

#import <UIKit/UIKit.h>
//! Project version number for Support.
FOUNDATION_EXPORT double SupportVersionNumber;

//! Project version string for Support.
FOUNDATION_EXPORT const unsigned char SupportVersionString[];

@interface elfSupport : NSObject
+ (instancetype)shared;
- (void)pushPVC:(UINavigationController*)navVC;
@end
