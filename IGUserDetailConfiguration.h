

@class IGUser, IGUserSession, NSString;

@interface IGUserDetailConfiguration : NSObject {

	IGUser* _user;
	IGUserSession* _userSession;
	NSString* _previousAnalyticsModule;

}

@property (nonatomic,readonly) IGUser * user;                                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                          //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousAnalyticsModule;              //@synthesize previousAnalyticsModule=_previousAnalyticsModule - In the implementation block
-(id)initWithUser:(id)arg1 userSession:(id)arg2 previousAnalyticsModule:(id)arg3 ;
-(NSString *)previousAnalyticsModule;
-(IGUser *)user;
-(IGUserSession *)userSession;
@end

