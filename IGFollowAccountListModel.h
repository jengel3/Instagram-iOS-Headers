

@class IGFollowPeopleMegaphoneConfiguration, NSArray;

@interface IGFollowAccountListModel : NSObject {

	IGFollowPeopleMegaphoneConfiguration* _configuration;
	NSArray* _accountList;

}

@property (nonatomic,readonly) IGFollowPeopleMegaphoneConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * accountList;                                             //@synthesize accountList=_accountList - In the implementation block
+(id)followAccountListFromResponse:(id)arg1 ;
-(NSArray *)accountList;
-(id)initWithConfiguration:(id)arg1 accountList:(id)arg2 ;
-(IGFollowPeopleMegaphoneConfiguration *)configuration;
@end

