
#import <Instagram/IGServiceHelperProtocol.h>
#import <Instagram/IGServiceHelperLoginProtocol.h>

@class IGSwitch, OAConsumer, OAToken, NSString, IGUser, IGNonCurrentUserDefaults;

@interface IGTumblrHelper : NSObject <IGServiceHelperProtocol, IGServiceHelperLoginProtocol> {

	IGSwitch* _followSwitch;
	char _loginPending;
	OAConsumer* _consumer;
	OAToken* _accessToken;
	NSString* _tokenString;
	IGUser* _currentUser;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) OAConsumer * consumer;                                       //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) char loginPending;                                           //@synthesize loginPending=_loginPending - In the implementation block
@property (nonatomic,retain) OAToken * accessToken;                                       //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * tokenString;                                        //@synthesize tokenString=_tokenString - In the implementation block
@property (nonatomic,retain) IGUser * currentUser;                                        //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sharedTumblrHelper;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)shortServiceName;
+(id)serviceName;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)onTumblrLoginCompleted:(id)arg1 ;
-(id)prefUsernameKey;
-(void)requestTokenTicket:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)requestTokenTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(id)followSwitch;
-(void)setAccessTokenFromTokenString:(id)arg1 ;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followInstagram;
-(char)loginPending;
-(void)setLoginPending:(char)arg1 ;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2 ;
-(id)loginViewController;
-(int)numberOfExtraRowsForLogin;
-(id)loginErrorMessage;
-(id)loginFooterMessage;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)saveLoginInfo;
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
-(id)currentUsername;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(void)dealloc;
-(void)setConsumer:(OAConsumer *)arg1 ;
-(OAConsumer *)consumer;
-(IGUser *)currentUser;
-(OAToken *)accessToken;
-(void)logout;
-(void)setAccessToken:(OAToken *)arg1 ;
-(char)isConfigured;
-(NSString *)tokenString;
-(void)setTokenString:(NSString *)arg1 ;
@end

