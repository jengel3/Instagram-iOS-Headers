
#import <Instagram/FBSDKAccessTokenCaching.h>

@class FBSDKKeychainStore, NSString;

@interface FBSDKAccessTokenCacheV3_21 : NSObject <FBSDKAccessTokenCaching> {

	FBSDKKeychainStore* _keychainStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1 ;
-(id)init;
-(void)clearCache;
@end

