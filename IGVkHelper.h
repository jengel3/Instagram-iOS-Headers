
#import <Instagram/IGVkAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGVkHelper : NSObject <IGVkAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;
	NSString* _username;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)shortServiceName;
+(id)serviceName;
+(id)sharedHelper;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)callbackURLString;
-(char)hasEverBeenConfigured;
-(void)setAccessToken:(id)arg1 username:(id)arg2 save:(char)arg3 ;
-(void)vkAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 username:(id)arg3 ;
-(void)vkAuthControllerLoginFailed:(id)arg1 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(id)currentUsername;
-(id)authURLString;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

