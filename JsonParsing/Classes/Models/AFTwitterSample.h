#import <Foundation/Foundation.h>
#import <JSONModel/JSONModel.h>

@class AFTwitterSample;
@class AFTwitterSampleEntities;
@class AFHashtag;
@class AFPurpleMedia;
@class AFSizes;
@class AFLarge;
@class AFResize;
@class AFUserMention;
@class AFTwitterSampleExtendedEntities;
@class AFRetweetedStatus;
@class AFRetweetedStatusEntities;
@class AFFluffyMedia;
@class AFRetweetedStatusExtendedEntities;
@class AFUser;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Boxed enums

@interface AFResize : JSONModel
@property (nonatomic, readonly, copy) NSString *value;
+ (instancetype _Nullable)withValue:(NSString *)value;
+ (AFResize *)crop;
+ (AFResize *)fit;
@end

#pragma mark - Object interfaces

@interface AFTwitterSample : JSONModel
@property (nonatomic, copy)           NSString *createdAt;
//@property (nonatomic, assign)         double Id;
@property (nonatomic, copy)           NSString *id_str;
@property (nonatomic, copy)           NSString *text;
@property (nonatomic, assign)         BOOL truncated;
@property (nonatomic, nullable, copy) id <Optional> inReplyToStatusID;
@property (nonatomic, nullable, copy) id <Optional> inReplyToStatusIDStr;
@property (nonatomic, nullable, copy) id <Optional> inReplyToUserID;
@property (nonatomic, nullable, copy) id <Optional> inReplyToUserIDStr;
@property (nonatomic, nullable, copy) id <Optional> inReplyToScreenName;
@property (nonatomic, strong)         AFUser *user;
@property (nonatomic, nullable, copy) id <Optional> geo;
@property (nonatomic, nullable, copy) id <Optional> coordinates;
@property (nonatomic, nullable, copy) id <Optional> place;
@property (nonatomic, nullable, copy) id <Optional> contributors;
//@property (nonatomic, strong)         AFRetweetedStatus *retweetedStatus;
@property (nonatomic, assign)         BOOL isQuoteStatus;
@property (nonatomic, assign)         NSInteger quoteCount;
@property (nonatomic, assign)         NSInteger replyCount;
@property (nonatomic, assign)         NSInteger retweetCount;
@property (nonatomic, assign)         NSInteger favoriteCount;
//@property (nonatomic, strong)         AFTwitterSampleEntities *entities;
//@property (nonatomic, strong)         AFTwitterSampleExtendedEntities *extendedEntities;
@property (nonatomic, assign)         BOOL favorited;
@property (nonatomic, assign)         BOOL retweeted;
@property (nonatomic, assign)         BOOL possiblySensitive;
@property (nonatomic, copy)           NSString *filterLevel;
@property (nonatomic, copy)           NSString *lang;
@property (nonatomic, copy)           NSString *timestamp_ms;
@end

@interface AFTwitterSampleEntities : JSONModel
@property (nonatomic, copy) NSArray<AFHashtag *> *hashtags;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, copy) NSArray<AFUserMention *> *user_mentions;
@property (nonatomic, copy) NSArray *symbols;
@property (nonatomic, copy) NSArray<AFPurpleMedia *> *media;
@end

@interface AFHashtag : JSONModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray<NSNumber *> *indices;
@end

@interface AFPurpleMedia : JSONModel
@property (nonatomic, assign) double Id;
@property (nonatomic, copy)   NSString *id_str;
@property (nonatomic, copy)   NSArray<NSNumber *> *indices;
@property (nonatomic, copy)   NSString *mediaURL;
@property (nonatomic, copy)   NSString *mediaURLHTTPS;
@property (nonatomic, copy)   NSString *url;
@property (nonatomic, copy)   NSString *displayURL;
@property (nonatomic, copy)   NSString *expandedURL;
@property (nonatomic, copy)   NSString *type;
@property (nonatomic, strong) AFSizes *sizes;
@property (nonatomic, assign) double sourceStatusID;
@property (nonatomic, copy)   NSString *sourceStatusIDStr;
@property (nonatomic, assign) double sourceUserID;
@property (nonatomic, copy)   NSString *sourceUserIDStr;
@end

@interface AFSizes : JSONModel
@property (nonatomic, strong) AFLarge *thumb;
@property (nonatomic, strong) AFLarge *medium;
@property (nonatomic, strong) AFLarge *small;
@property (nonatomic, strong) AFLarge *large;
@end

@interface AFLarge : JSONModel
@property (nonatomic, assign) NSInteger w;
@property (nonatomic, assign) NSInteger h;
@property (nonatomic, assign) AFResize *resize;
@end

@interface AFUserMention : JSONModel
@property (nonatomic, copy)   NSString *screenName;
@property (nonatomic, copy)   NSString *name;
//@property (nonatomic, assign) double Id;
@property (nonatomic, copy)   NSString *id_str;
@property (nonatomic, copy)   NSArray<NSNumber *> *indices;
@end

@interface AFTwitterSampleExtendedEntities : JSONModel
@property (nonatomic, copy) NSArray<AFPurpleMedia *> *media;
@end

@interface AFRetweetedStatus : JSONModel
@property (nonatomic, copy)           NSString *createdAt;
//@property (nonatomic, assign)         double Id;
@property (nonatomic, copy)           NSString *id_str;
@property (nonatomic, copy)           NSString *text;
@property (nonatomic, copy)           NSArray<NSNumber *> *displayTextRange;
@property (nonatomic, assign)         BOOL truncated;
@property (nonatomic, nullable, copy) id <Optional> inReplyToStatusID;
@property (nonatomic, nullable, copy) id <Optional> inReplyToStatusIDStr;
@property (nonatomic, nullable, copy) id <Optional> inReplyToUserID;
@property (nonatomic, nullable, copy) id <Optional> inReplyToUserIDStr;
@property (nonatomic, nullable, copy) id <Optional> inReplyToScreenName;
@property (nonatomic, strong)         AFUser *user;
@property (nonatomic, nullable, copy) id <Optional> geo;
@property (nonatomic, nullable, copy) id <Optional> coordinates;
@property (nonatomic, nullable, copy) id <Optional> place;
@property (nonatomic, nullable, copy) id <Optional> contributors;
@property (nonatomic, assign)         BOOL isQuoteStatus;
@property (nonatomic, assign)         NSInteger quoteCount;
@property (nonatomic, assign)         NSInteger replyCount;
@property (nonatomic, assign)         NSInteger retweetCount;
@property (nonatomic, assign)         NSInteger favoriteCount;
@property (nonatomic, strong)         AFRetweetedStatusEntities *entities;
@property (nonatomic, strong)         AFRetweetedStatusExtendedEntities *extendedEntities;
@property (nonatomic, assign)         BOOL favorited;
@property (nonatomic, assign)         BOOL retweeted;
@property (nonatomic, assign)         BOOL possiblySensitive;
@property (nonatomic, copy)           NSString *filterLevel;
@property (nonatomic, copy)           NSString *lang;
@end

@interface AFRetweetedStatusEntities : JSONModel
@property (nonatomic, copy) NSArray<AFHashtag *> *hashtags;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, copy) NSArray<AFUserMention *> *userMentions;
@property (nonatomic, copy) NSArray *symbols;
@property (nonatomic, copy) NSArray<AFFluffyMedia *> *media;
@end

@interface AFFluffyMedia : JSONModel
//@property (nonatomic, assign) double Id;
@property (nonatomic, copy)   NSString *id_str;
@property (nonatomic, copy)   NSArray<NSNumber *> *indices;
@property (nonatomic, copy)   NSString *mediaURL;
@property (nonatomic, copy)   NSString *mediaURLHTTPS;
@property (nonatomic, copy)   NSString *url;
@property (nonatomic, copy)   NSString *displayURL;
@property (nonatomic, copy)   NSString *expandedURL;
@property (nonatomic, copy)   NSString *type;
@property (nonatomic, strong) AFSizes *sizes;
@end

@interface AFRetweetedStatusExtendedEntities : JSONModel
@property (nonatomic, copy) NSArray<AFFluffyMedia *> *media;
@end

@interface AFUser : JSONModel
//@property (nonatomic, assign)         double Id;
@property (nonatomic, copy)           NSString *id_str;
@property (nonatomic, copy)           NSString *name;
@property (nonatomic, copy)           NSString *screenName;
@property (nonatomic, copy)           NSString *location;
@property (nonatomic, nullable, copy) NSString *url;
@property (nonatomic, copy)           NSString *description;
@property (nonatomic, copy)           NSString *translatorType;
@property (nonatomic, assign)         BOOL protected;
@property (nonatomic, assign)         BOOL verified;
@property (nonatomic, assign)         NSInteger followersCount;
@property (nonatomic, assign)         NSInteger friendsCount;
@property (nonatomic, assign)         NSInteger listedCount;
@property (nonatomic, assign)         NSInteger favouritesCount;
@property (nonatomic, assign)         NSInteger statusesCount;
@property (nonatomic, copy)           NSString *createdAt;
@property (nonatomic, assign)         NSInteger utcOffset;
@property (nonatomic, copy)           NSString *timeZone;
@property (nonatomic, assign)         BOOL geoEnabled;
@property (nonatomic, copy)           NSString *lang;
@property (nonatomic, assign)         BOOL contributorsEnabled;
@property (nonatomic, assign)         BOOL isTranslator;
@property (nonatomic, copy)           NSString *profileBackgroundColor;
@property (nonatomic, copy)           NSString *profile_background_image_url;
@property (nonatomic, copy)           NSString *profile_background_image_url_https;
@property (nonatomic, assign)         BOOL profileBackgroundTile;
@property (nonatomic, copy)           NSString *profileLinkColor;
@property (nonatomic, copy)           NSString *profileSidebarBorderColor;
@property (nonatomic, copy)           NSString *profileSidebarFillColor;
@property (nonatomic, copy)           NSString *profileTextColor;
@property (nonatomic, assign)         BOOL profileUseBackgroundImage;
@property (nonatomic, copy)           NSString *profile_image_url;
@property (nonatomic, copy)           NSString *profile_image_url_https;
@property (nonatomic, copy)           NSString *profile_banner_url;
@property (nonatomic, assign)         BOOL defaultProfile;
@property (nonatomic, assign)         BOOL defaultProfileImage;
@property (nonatomic, nullable, copy) id <Optional> following;
@property (nonatomic, nullable, copy) id <Optional> followRequestSent;
@property (nonatomic, nullable, copy) id <Optional> notifications;
@end

NS_ASSUME_NONNULL_END
