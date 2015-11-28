
#import <Instagram/FBSDKAccessTokenCaching.h>

@class FBSDKKeychainStoreViaBundleID, NSString;

@interface FBSDKAccessTokenCacheV3_17 : NSObject <FBSDKAccessTokenCaching> {

	FBSDKKeychainStoreViaBundleID* _keychainStore;

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

