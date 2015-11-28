
#import <Instagram/IGXAuthServiceHelper.h>
#import <Instagram/IGActionSheetDelegate.h>

@class IGSwitch, NSString;

@interface IGTwitterHelper : IGXAuthServiceHelper <IGActionSheetDelegate> {

	char _errorCameUpDuringTweet;
	IGSwitch* _followSwitch;

}

@property (nonatomic,retain) IGSwitch * followSwitch;               //@synthesize followSwitch=_followSwitch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTwitterHelper;
+(id)serviceName;
+(id)accountStore;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)tweetPhotoLink:(id)arg1 username:(id)arg2 mediaType:(int)arg3 viewController:(id)arg4 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)shortServiceName;
-(void)requestTokenFromSystemAccounts;
-(id)viewControllerForAdvancedOptions;
-(IGSwitch *)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)onTwitterLoginCompleted:(id)arg1 ;
-(void)storeXauthCredentialsInSystemAccounts:(id)arg1 ;
-(void)followOfficialAccount;
-(void)saveLoginInfo;
-(id)reverseAuthURLRequest;
-(void)fetchSignatureForAccount:(id)arg1 ;
-(void)requestAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadProfilePictureWithDelegate:(id)arg1 screenName:(id)arg2 ;
-(void)reverseAuthTicket:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)reverseAuthTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setFollowSwitch:(IGSwitch *)arg1 ;
-(void)dealloc;
-(id)URLString;
-(id)consumerKey;
-(id)consumerSecret;
-(char)canSendTweet;
@end

