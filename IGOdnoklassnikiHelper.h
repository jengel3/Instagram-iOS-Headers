
#import <Instagram/IGOdnoklassnikiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGOdnoklassnikiHelper : NSObject <IGOdnoklassnikiAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _refreshToken;

}

@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(id)shortServiceName;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)okAuthControllerLoginFailed:(id)arg1 ;
-(void)okAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(char)needsToReauthorize;
-(char)hasEverBeenConfigured;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

