//
//  JsonParsing.m
//  JsonParsing
//
//  Created by Apple on 04/11/2022.
//

#import "JsonParsing.h"
#import "AFRootViewController.h"

@implementation JsonParsing

+ (JsonParsing*)sharedInstance {
    static JsonParsing *sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once( &onceToken, ^{
        sharedInstance = [[JsonParsing alloc] init];
    });
    return sharedInstance;
}

- (void)showRootViewController:(UIWindow*)window {
    AFRootViewController *rootViewController = [[AFRootViewController alloc] initWithNibName:@"AFRootViewController" bundle:[self loadJsonParsingBundle]];
    window.rootViewController = rootViewController;
    [window makeKeyAndVisible];
}

- (NSBundle*)loadJsonParsingBundle {
    NSBundle *mainBundle = [NSBundle bundleForClass:[JsonParsing self]];
    NSString *bundlePath = [mainBundle pathForResource:@"JsonParsingBundle" ofType:@"bundle"];
    NSBundle *nibBundle = [NSBundle bundleWithPath:bundlePath];
    return nibBundle;
}

- (NSData*)loadFileDataNamed:(NSString*)fileName {
    NSString *filePath = [[self loadJsonParsingBundle] pathForResource:fileName ofType:@"json"];
    NSData *data = [NSData dataWithContentsOfFile:filePath];
    return data;
}

@end
