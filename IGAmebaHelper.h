
#import <Instagram/IGAmebaAuthDelegate.h>
#import <Instagram/IGAmebaThemesDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, NSDictionary, IGNonCurrentUserDefaults;

@interface IGAmebaHelper : NSObject <IGAmebaAuthDelegate, IGAmebaThemesDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSDictionary* _currentThemeSetting;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _username;
	NSString* _refreshToken;

}

@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * callbackURLString; 
@property (nonatomic,readonly) NSString * authURLString; 
@property (nonatomic,copy) NSDictionary * currentThemeSetting;                            //@synthesize currentThemeSetting=_currentThemeSetting - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
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
-(NSDictionary *)currentThemeSetting;
-(void)themesViewController:(id)arg1 didSelectTheme:(id)arg2 ;
-(void)setCurrentUsername:(id)arg1 ;
-(void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(void)amebaAuthControllerLoginFailed:(id)arg1 ;
-(void)setCurrentThemeSetting:(NSDictionary *)arg1 ;
-(NSString *)authURLString;
-(NSString *)callbackURLString;
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
-(id)currentUsername;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(NSString *)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

