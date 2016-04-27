
#import <Instagram/IGMixiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (assign,nonatomic) int currentPrivacySetting; 
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
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
-(char)hasSelectedPrivacySetting;
-(id)authURLString;
-(id)callbackURLString;
-(int)currentPrivacySetting;
-(id)getLabelForPrivacySetting:(int)arg1 ;
-(void)mixiAuthControllerLoginFailed:(id)arg1 ;
-(void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(id)getMixiConstantForPrivacySetting:(int)arg1 ;
-(void)setNeedsReauthorization;
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
-(id)refreshToken;
-(void)setCurrentPrivacySetting:(int)arg1 ;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

