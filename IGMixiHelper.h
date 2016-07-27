
#import <Instagram/IGMixiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (assign,nonatomic) int currentPrivacySetting; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(id)accessTokenKey;
+(id)serviceName;
+(id)sharedHelper;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)logoutAndUnlink;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)hasSelectedPrivacySetting;
-(char)requiresLocationCoordinate;
-(id)authURLString;
-(id)callbackURLString;
-(int)currentPrivacySetting;
-(id)getLabelForPrivacySetting:(int)arg1 ;
-(void)mixiAuthControllerLoginFailed:(id)arg1 ;
-(void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(id)getMixiConstantForPrivacySetting:(int)arg1 ;
-(void)setNeedsReauthorization;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(id)sharingInfo;
-(id)refreshToken;
-(void)setCurrentPrivacySetting:(int)arg1 ;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

