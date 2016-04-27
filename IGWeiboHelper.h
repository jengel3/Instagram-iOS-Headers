
#import <Instagram/IGWeiboAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGWeiboHelper : NSObject <IGWeiboAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSString* _refreshToken;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,readonly) char accessTokenExpired; 
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(id)serviceNameForTokenStore;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)authURLString;
-(id)callbackURLString;
-(char)needsToReauthorize;
-(char)hasEverBeenConfigured;
-(void)reauthorize;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(void)weiboAuthControllerLoginFailed:(id)arg1 ;
-(void)weiboAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 andRefreshToken:(id)arg3 ;
-(char)accessTokenExpired;
-(void)saveAccessToken:(id)arg1 andRefreshToken:(id)arg2 ;
-(int)tokenLife;
-(void)saveNewAccessToken:(id)arg1 ;
-(void)saveNewRefreshToken:(id)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

