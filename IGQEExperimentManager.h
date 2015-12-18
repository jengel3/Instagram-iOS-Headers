

@class IGQEExperimentSet, IGUser;

@interface IGQEExperimentManager : NSObject {

	IGQEExperimentSet* _userExperimentSet;
	IGQEExperimentSet* _deviceExperimentSet;
	IGUser* _previousUser;

}

@property (nonatomic,retain) IGQEExperimentSet * userExperimentSet;                //@synthesize userExperimentSet=_userExperimentSet - In the implementation block
@property (nonatomic,retain) IGQEExperimentSet * deviceExperimentSet;              //@synthesize deviceExperimentSet=_deviceExperimentSet - In the implementation block
@property (nonatomic,retain) IGUser * previousUser;                                //@synthesize previousUser=_previousUser - In the implementation block
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)experimentsGroupsMapping;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(id)exposeCachedValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForBoolExperiment:(id)arg1 ;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)experimentForKey:(id)arg1 ;
+(id)cachedExperimentForKey:(id)arg1 ;
+(id)experiments;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 ;
+(void)disableExperiments;
+(id)sharedInstance;
-(void)loginStateChange;
-(IGQEExperimentSet *)userExperimentSet;
-(IGQEExperimentSet *)deviceExperimentSet;
-(void)setUserExperimentSet:(IGQEExperimentSet *)arg1 ;
-(void)setDeviceExperimentSet:(IGQEExperimentSet *)arg1 ;
-(IGUser *)previousUser;
-(void)setPreviousUser:(IGUser *)arg1 ;
-(void)dealloc;
-(id)init;
@end

