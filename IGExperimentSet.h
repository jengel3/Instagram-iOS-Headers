
#import <Instagram/IGUserSessionObject.h>

@protocol IGExperimentSetServiceProvider;
@class NSMutableDictionary, NSObject, NSString, NSDictionary, IGExposureLogger;

@interface IGExperimentSet : NSObject <IGUserSessionObject> {

	id<IGExperimentSetServiceProvider> _service;
	int _cachedExperimentsLock;
	NSMutableDictionary* _cachedExperiments;
	NSObject* _overrideGroupsLock;
	NSMutableDictionary* _serverSideGroups;
	NSString* _uniqueIdentifier;
	NSString* _diskCacheFileName;
	NSDictionary* _experimentSpecs;
	IGExposureLogger* _exposureLogger;
	double _lastSyncTime;
	NSDictionary* _cachedPayload;
	char _wantsColdStart;
	int _type;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char wantsColdStart;                   //@synthesize wantsColdStart=_wantsColdStart - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshExperimentsIfNecessary;
-(char)wantsColdStart;
-(id)experiments;
-(id)overrideGroupForExperimentSpec:(id)arg1 ;
-(id)serverSideGroupForExperimentSpec:(id)arg1 ;
-(id)cachedExperimentForSpec:(id)arg1 ;
-(void)setOverrideGroup:(id)arg1 forExperimentSpec:(id)arg2 ;
-(void)clearCachedExperimentForKey:(id)arg1 ;
-(void)setWantsColdStart:(char)arg1 ;
-(id)initWithExperimentType:(int)arg1 experimentSpecs:(id)arg2 uniqueIdentifier:(id)arg3 service:(id)arg4 ;
-(void)initClientOverrideForEndToEndTest:(id)arg1 ;
-(void)loadDiskCache;
-(void)refreshExperimentsForced;
-(id)diskCacheFilePath;
-(char)updateExperimentsWithPayload:(id)arg1 ;
-(void)updateExperimentsWithLegacyPayloadFromDiskCache:(id)arg1 ;
-(void)setServerSideGroup:(id)arg1 forExperimentSpec:(id)arg2 ;
-(id)exposeValueFromExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 ;
-(id)exposeValueForExperimentSpec:(id)arg1 parameterNamed:(id)arg2 ;
-(int)type;
@end

