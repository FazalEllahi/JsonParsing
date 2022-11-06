//
//  JsonParsing.h
//  JsonParsing
//
//  Created by Apple on 04/11/2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsonParsing : NSObject

+ (JsonParsing*)sharedInstance;
- (void)showRootViewController:(UIWindow*)window;
- (NSData*)loadFileDataNamed:(NSString*)fileName;

@end

NS_ASSUME_NONNULL_END
