

@class NSString, NSMutableSet, IGAnalyticsMetadata, IGMutableRaindropRankInfo;

@interface IGRelatedItemsLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;
	IGAnalyticsMetadata* _raindropMetadata;
	IGMutableRaindropRankInfo* _raindropRankInfo;

}

@property (nonatomic,copy,readonly) NSString * module;                                    //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;                          //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,readonly) IGAnalyticsMetadata * raindropMetadata;                    //@synthesize raindropMetadata=_raindropMetadata - In the implementation block
@property (nonatomic,readonly) IGMutableRaindropRankInfo * raindropRankInfo;              //@synthesize raindropRankInfo=_raindropRankInfo - In the implementation block
-(NSMutableSet *)loggedImpressions;
-(NSString *)module;
-(id)initWithModule:(id)arg1 raindropAnalyticsMedataData:(id)arg2 raindropRankInfo:(id)arg3 ;
-(void)logTapForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)logImpressionForItem:(id)arg1 ;
-(void)logImpressionForLocation:(id)arg1 ;
-(void)logImpressionForHashtag:(id)arg1 ;
-(void)logTapForLocation:(id)arg1 ;
-(void)logTapForHashtag:(id)arg1 ;
-(void)logRaindropTapForHashtag:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureEvent:(id)arg1 hashtag:(id)arg2 ;
-(void)configureEvent:(id)arg1 location:(id)arg2 ;
-(IGMutableRaindropRankInfo *)raindropRankInfo;
-(IGAnalyticsMetadata *)raindropMetadata;
@end

