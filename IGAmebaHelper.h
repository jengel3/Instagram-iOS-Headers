
#import <Instagram/IGAmebaAuthDelegate.h>
#import <Instagram/IGAmebaThemesDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString, NSDictionary;

@interface IGAmebaHelper : NSObject <IGAmebaAuthDelegate, IGAmebaThemesDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;
	NSDictionary* _currentThemeSetting;
	NSString* _username;
	NSString* _refreshToken;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSDictionary * currentThemeSetting;                            //@synthesize currentThemeSetting=_currentThemeSetting - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * callbackURLString; 
@property (nonatomic,readonly) NSString * authURLString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(id)accessTokenKey;
+(id)serviceName;
+(id)sharedHelper;
-(id)sharingInfo;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(NSDictionary *)currentThemeSetting;
-(void)themesViewController:(id)arg1 didSelectTheme:(id)arg2 ;
-(void)amebaAuthControllerLoginFailed:(id)arg1 ;
-(void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(void)setCurrentUsername:(id)arg1 ;
-(void)setCurrentThemeSetting:(NSDictionary *)arg1 ;
-(NSString *)authURLString;
-(NSString *)callbackURLString;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(id)currentUsername;
-(void)reauthorizeIfNeeded;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
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

