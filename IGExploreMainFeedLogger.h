

#import <Instagram/Instagram-Structs.h>
@class NSString, IGAnalyticsMetadata, IGMutableRaindropRankInfo, NSMutableSet;

@interface IGExploreMainFeedLogger : NSObject {

	NSString* _module;
	IGAnalyticsMetadata* _raindropMetadata;
	IGMutableRaindropRankInfo* _raindropRankInfo;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,copy,readonly) NSString * module;                                    //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) IGAnalyticsMetadata * raindropMetadata;                    //@synthesize raindropMetadata=_raindropMetadata - In the implementation block
@property (nonatomic,readonly) IGMutableRaindropRankInfo * raindropRankInfo;              //@synthesize raindropRankInfo=_raindropRankInfo - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;                          //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
-(NSMutableSet *)loggedImpressions;
-(IGMutableRaindropRankInfo *)raindropRankInfo;
-(void)logImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logRaindropImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logRaindropImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logRaindropClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logRaindropClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(NSString *)module;
-(id)stringForPosition:(NSRange)arg1 ;
-(IGAnalyticsMetadata *)raindropMetadata;
-(id)initWithModule:(id)arg1 raindropAnalyticsMedataData:(id)arg2 raindropRankInfo:(id)arg3 ;
-(void)logImpressionForItem:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForItem:(id)arg1 position:(NSRange)arg2 ;
@end

