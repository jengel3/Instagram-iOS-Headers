

@class NSString;

@interface IGInsightsLoggingHelper : NSObject {

	NSString* _entrypoint;
	NSString* _waterfallID;

}

@property (nonatomic,copy) NSString * entrypoint;               //@synthesize entrypoint=_entrypoint - In the implementation block
@property (nonatomic,copy) NSString * waterfallID;              //@synthesize waterfallID=_waterfallID - In the implementation block
-(void)logFollowersPageExit;
-(void)logLandingPageTapMediaInCarouselAtIndex:(unsigned)arg1 mediaID:(id)arg2 ;
-(void)logLandingPageClickSeeMore;
-(void)logTopPostsPageLoadedWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 ;
-(void)logTopPostsFilterOpenedWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 mediaTypeOptions:(id)arg4 dataOrderingOptions:(id)arg5 timeframeOptions:(id)arg6 ;
-(void)logTopPostsFilterMadeRequestWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 ;
-(void)logTopPostsPageLoadError:(id)arg1 ;
-(void)logTopPostsPageTapMediaAtIndex:(unsigned)arg1 mediaID:(id)arg2 ;
-(void)logTopPostsPageExit;
-(void)logLandingPageViewSummaryCardAtIndex:(unsigned)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)logFollowersPageViewSummaryCardAtIndex:(unsigned)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)logInlineInsightsLoaded;
-(void)logInlineInsightsLoadError:(id)arg1 ;
-(id)initWithEntrypoint:(id)arg1 ;
-(void)logTapEntryPointInlineInsights;
-(void)logInlineInsightsExit;
-(void)logLandingPageLoaded;
-(void)logFollowersPageLoaded;
-(void)logLandingPageLoadError:(id)arg1 ;
-(void)logFollowersPageLoadError:(id)arg1 ;
-(void)logEvent:(id)arg1 atStep:(id)arg2 ;
-(void)logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3 ;
-(NSString *)waterfallID;
-(NSString *)entrypoint;
-(void)logTapEntryPoint;
-(void)logLandingPageExit;
-(void)setEntrypoint:(NSString *)arg1 ;
-(void)setWaterfallID:(NSString *)arg1 ;
@end

