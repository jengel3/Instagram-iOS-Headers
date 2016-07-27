

@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	char _forceBlockingRenew;

}

@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
@property (assign,nonatomic) char forceBlockingRenew;                             //@synthesize forceBlockingRenew=_forceBlockingRenew - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType; 
+(id)sharedInstance;
+(void)initialize;
+(void)setSharedInstance:(id)arg1 ;
-(id)accessTokenString;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(char)forceBlockingRenew;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(char)arg3 appID:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setForceBlockingRenew:(char)arg1 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(char)arg2 handler:(/*^block*/id)arg3 ;
-(ACAccountStore *)accountStore;
-(id)init;
-(ACAccountType *)accountType;
@end

