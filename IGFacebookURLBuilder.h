

@class NSString, NSUserDefaults, NSURL;

@interface IGFacebookURLBuilder : NSObject {

	NSString* _host;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSString * host;                              //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSURL * graphQLBaseURL; 
@property (nonatomic,readonly) NSURL * graphQLBatchBaseURL; 
@property (nonatomic,readonly) NSURL * mSiteBaseURL; 
+(id)sharedInstance;
-(NSURL *)graphQLBatchBaseURL;
-(NSURL *)graphQLBaseURL;
-(NSURL *)mSiteBaseURL;
-(id)init;
-(void)synchronize;
-(NSString *)host;
-(NSUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setHost:(NSString *)arg1 ;
@end

