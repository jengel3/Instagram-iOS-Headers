/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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
-(int)experimentType;
-(void)setExperimentType:(int)arg1 ;
-(id)initWithExperimentType:(int)arg1 ;
-(void)clearCachedExperimentsAndRefresh;
-(void)refreshExperimentsIfNecessary;
-(char)wantsColdStart;
-(id)experimentForKey:(id)arg1 ;
-(id)cachedExperimentForKey:(id)arg1 ;
-(id)experiments;
-(void)loadDefaultExperiments;
-(void)loadCachedExperiments;
-(void)refreshExperimentsForced;
-(id)defaultExperiments;
-(id)cacheFilePath;
-(char)updateExperimentsWithPayload:(id)arg1 ;
@end
