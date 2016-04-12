
#import <Instagram/IGUserSessionObject.h>

@class NSDictionary, NSMutableDictionary, NSArray, NSString;

@interface IGExperimentSet : NSObject <IGUserSessionObject> {

	double _lastSyncTime;
	NSDictionary* _experiments;
	NSDictionary* _cachedPayload;
	int _cachedExperimentsLock;
	NSMutableDictionary* _cachedExperiments;
	char _wantsColdStart;
	int _experimentType;
	NSArray* _defaultExperiments;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) char wantsColdStart;                       //@synthesize wantsColdStart=_wantsColdStart - In the implementation block
@property (assign,nonatomic) int experimentType;                        //@synthesize experimentType=_experimentType - In the implementation block
@property (nonatomic,retain) NSArray * defaultExperiments;              //@synthesize defaultExperiments=_defaultExperiments - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheDirectory;
-(id)experiments;
-(int)experimentType;
-(void)setExperimentType:(int)arg1 ;
-(id)initWithExperimentType:(int)arg1 defaultExperiments:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)refreshExperimentsIfNecessary;
-(char)wantsColdStart;
-(void)setWantsColdStart:(char)arg1 ;
-(id)experimentForKey:(id)arg1 ;
-(id)cachedExperimentForKey:(id)arg1 ;
-(void)loadDefaultExperiments;
-(void)loadCachedExperiments;
-(void)refreshExperimentsForced;
-(NSArray *)defaultExperiments;
-(id)cacheFilePath;
-(char)updateExperimentsWithPayload:(id)arg1 ;
-(void)setDefaultExperiments:(NSArray *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
@end

