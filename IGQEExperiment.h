

@class IGQEExperimentUserGroup, NSMutableArray, NSString, NSArray, NSDictionary;

@interface IGQEExperiment : NSObject {

	double _lastExposureEventTime;
	IGQEExperimentUserGroup* _exposedGroup;
	char _useDeviceId;
	NSMutableArray* _storedBackgroundRequests;
	NSString* _key;
	NSArray* _userGroups;
	NSString* _descriptiveName;
	IGQEExperimentUserGroup* _serverSideUserGroup;
	IGQEExperimentUserGroup* _defaultUserGroup;
	NSDictionary* _exposeData;

}

@property (nonatomic,copy) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userGroups;                                //@synthesize userGroups=_userGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveName;                          //@synthesize descriptiveName=_descriptiveName - In the implementation block
@property (nonatomic,retain) IGQEExperimentUserGroup * overrideUserGroup; 
@property (nonatomic,retain) IGQEExperimentUserGroup * serverSideUserGroup;              //@synthesize serverSideUserGroup=_serverSideUserGroup - In the implementation block
@property (nonatomic,readonly) IGQEExperimentUserGroup * defaultUserGroup;               //@synthesize defaultUserGroup=_defaultUserGroup - In the implementation block
@property (nonatomic,retain) NSDictionary * exposeData;                                  //@synthesize exposeData=_exposeData - In the implementation block
+(id)experimentWithKey:(id)arg1 name:(id)arg2 booleanValue:(char)arg3 useDeviceId:(char)arg4 ;
+(id)experimentWithKey:(id)arg1 name:(id)arg2 groups:(id)arg3 useDeviceId:(char)arg4 ;
-(NSString *)descriptiveName;
-(NSArray *)userGroups;
-(IGQEExperimentUserGroup *)overrideUserGroup;
-(void)clearUserGroupOverride;
-(void)setOverrideUserGroup:(IGQEExperimentUserGroup *)arg1 ;
-(id)initWithKey:(id)arg1 name:(id)arg2 groups:(id)arg3 useDeviceId:(char)arg4 ;
-(char)wasExposed;
-(IGQEExperimentUserGroup *)serverSideUserGroup;
-(NSDictionary *)exposeData;
-(void)sendBackgroundExposure;
-(IGQEExperimentUserGroup *)defaultUserGroup;
-(void)sendExposureEventIfNecessary;
-(id)overrideUserGroupIndexKey;
-(id)exposeValueForParameterNamed:(id)arg1 ;
-(id)generateServerSideUserGroupParameters:(id)arg1 ;
-(void)setServerSideUserGroup:(IGQEExperimentUserGroup *)arg1 ;
-(void)setExposeData:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

