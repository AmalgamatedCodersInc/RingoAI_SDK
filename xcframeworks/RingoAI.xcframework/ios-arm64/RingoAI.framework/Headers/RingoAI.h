//
//  RingoAI.h
//  RingoAI
//
//  Created by roy on 12/23/23.
//
#import <Foundation/Foundation.h>

//! Project version number for RingoAI.
FOUNDATION_EXPORT double RingoAIVersionNumber;

//! Project version string for RingoAI.
FOUNDATION_EXPORT const unsigned char RingoAIVersionString[];

#import <RingoAI/FaceCapture.h>
#import <RingoAI/objc.h>

extern NSString* _Nonnull kRingoNameKey;
extern NSString* _Nonnull kRingoConditionKey;

@interface RingoAI : NSObject

@property (class, strong) NSString* location;

+ (NSDictionary<NSString*, NSString*>*)preflightRequirements;	// everything's OK if returns nil

+ (NSString*)currentBrandUX;
+ (NSString*)currentBrand;

+ (UIImage*)imageFor:(NSString*)familyId shadeId:(NSString*)shadeId;
+ (NSDictionary*)metaFor:(NSString*)product;

+ (NSDictionary*)history;

+ (NSArray<NSString*>*)locationNames;

+ (RingoMatch* _Nonnull)filterMatch:(RingoMatch* _Nonnull)match;
@end

