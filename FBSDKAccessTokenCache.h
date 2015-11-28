
#import <Instagram/FBSDKAccessTokenCaching.h>

@class NSString;

@interface FBSDKAccessTokenCache : NSObject <FBSDKAccessTokenCaching>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deprecatedCacheClasses;
+(void)resetV3CacheChecks;
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1 ;
-(void)clearCache;
@end

