

@class NSDictionary, NSMutableDictionary, NSString;

@interface IGQEExperimentSet : NSObject {

	double _lastSyncTime;
	NSDictionary* _experiments;
	NSDictionary* _cachedPayload;
	int _cachedExperimentsLock;
	NSMutableDictionary* _cachedExperiments;
	char _wantsColdStart;
	NSString* _cacheDirectory;
	int _experimentType;

}

@property (assign,nonatomic) int experimentType;              //@synthesize experimentType=_experimentType - In the implementation block
-(id)experiments;
-(int)experimentType;
-(void)setExperimentType:(int)arg1 ;
-(id)initWithExperimentType:(int)arg1 ;
-(void)clearCachedExperimentsAndRefresh;
-(void)refreshExperimentsIfNecessary;
-(char)wantsColdStart;
-(id)experimentForKey:(id)arg1 ;
-(id)cachedExperimentForKey:(id)arg1 ;
-(void)loadDefaultExperiments;
-(void)loadCachedExperiments;
-(void)refreshExperimentsForced;
-(id)defaultExperiments;
-(id)cacheFilePath;
-(char)updateExperimentsWithPayload:(id)arg1 ;
@end

