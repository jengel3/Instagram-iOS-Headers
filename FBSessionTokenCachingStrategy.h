

@class NSString;

@interface FBSessionTokenCachingStrategy : NSObject {

	NSString* _accessTokenInformationKeyName;

}
+(id)nullCacheInstance;
+(char)isValidTokenInformation:(id)arg1 ;
+(id)defaultInstance;
-(id)initWithUserDefaultTokenInformationKeyName:(id)arg1 ;
-(void)clearToken;
-(id)fetchFBAccessTokenData;
-(void)cacheFBAccessTokenData:(id)arg1 ;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(void)dealloc;
-(id)init;
@end

