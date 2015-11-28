

@class NSDictionary, NSString, IGUser;

@interface IGQEExperimentManager : NSObject {

	double _lastSyncTime;
	NSDictionary* _experiments;
	NSDictionary* _cachedPayload;
	char _wantsColdStart;
	NSString* _cacheDirectory;
	IGUser* _previousUser;

}

@property (nonatomic,readonly) NSString * cacheFilePath; 
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)experimentsGroupsMapping;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)experimentForKey:(id)arg1 ;
+(id)experiments;
+(void)disableExperiments;
+(id)sharedInstance;
-(void)loginStateChange;
-(void)loadDefaultExperiments;
-(void)loadCachedExperiments;
-(void)refreshExperimentsForced;
-(NSString *)cacheFilePath;
-(char)updateExperimentsWithPayload:(id)arg1 useDeviceId:(char)arg2 ;
-(void)refreshExperimentsIfNecessary;
-(char)wantsColdStart;
-(id)experimentForKey:(id)arg1 ;
-(id)experiments;
-(void)dealloc;
-(id)init;
@end

