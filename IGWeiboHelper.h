
#import <Instagram/IGWeiboAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGWeiboHelper : NSObject <IGWeiboAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;
	NSString* _refreshToken;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) char accessTokenExpired; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)shortServiceName;
+(id)serviceNameForTokenStore;
+(id)serviceName;
+(id)sharedHelper;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)reauthorize;
-(id)callbackURLString;
-(char)hasEverBeenConfigured;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(char)accessTokenExpired;
-(void)saveAccessToken:(id)arg1 andRefreshToken:(id)arg2 ;
-(int)tokenLife;
-(void)saveNewAccessToken:(id)arg1 ;
-(void)saveNewRefreshToken:(id)arg1 ;
-(void)weiboAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 andRefreshToken:(id)arg3 ;
-(void)weiboAuthControllerLoginFailed:(id)arg1 ;
-(id)sharingInfo;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(id)authURL;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

