
#import <Instagram/FBSessionTokenCachingStrategy.h>

@class NSString, NSDate;

@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {

	NSString* _accessToken;
	NSDate* _expirationDate;

}

@property (copy) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)clearToken;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(void)dealloc;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
@end

