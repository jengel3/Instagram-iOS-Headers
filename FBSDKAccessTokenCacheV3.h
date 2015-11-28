
#import <Instagram/FBSDKAccessTokenCaching.h>

@class NSString;

@interface FBSDKAccessTokenCacheV3 : NSObject <FBSDKAccessTokenCaching>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessTokenForV3Dictionary:(id)arg1 ;
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1 ;
-(void)clearCache;
@end

