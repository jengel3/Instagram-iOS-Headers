

@class NSString;

@interface IGInsightsLoggingHelper : NSObject {

	NSString* _entrypoint;
	NSString* _waterfallID;

}

@property (nonatomic,copy) NSString * waterfallID;              //@synthesize waterfallID=_waterfallID - In the implementation block
@property (nonatomic,copy) NSString * entrypoint;               //@synthesize entrypoint=_entrypoint - In the implementation block
-(void)logEvent:(id)arg1 atStep:(id)arg2 additionalFields:(id)arg3 ;
-(NSString *)waterfallID;
-(void)didEnterWelcomeTopAccountsInterface;
-(void)didTapAcceptWelcomeTopAccountsInterface;
-(void)didShowErrortWelcomeTopAccountsInterface:(id)arg1 ;
-(void)didCancelWelcomeTopAccountsInterface;
-(void)logEvent:(id)arg1 atStep:(id)arg2 ;
-(NSString *)entrypoint;
-(void)setEntrypoint:(NSString *)arg1 ;
-(void)setWaterfallID:(NSString *)arg1 ;
-(void)didEnterWelcomeTopAccountsProfilePopup;
-(void)didCancelWelcomeTopAccountsProfilePopup;
-(void)didTapGetStartedOnWelcomeTopAccountsProfilePopup;
-(void)logInlineInsightsLoaded;
-(id)initWithEntrypoint:(id)arg1 ;
-(void)logTapEntryPointInlineInsights;
-(void)logTapEntryPointAdsInlineInsightsForMediaWithID:(id)arg1 ;
-(void)logAdsInlineInsightsLoadedForMediaWithID:(id)arg1 promoteState:(id)arg2 ;
-(void)logInlineInsightsLoadError:(id)arg1 ;
-(void)logInlineInsightsExit;
-(void)logAdsInlineInsightsLoadError:(id)arg1 forMediaWithID:(id)arg2 ;
-(void)logAdsInlineInsightsExitForMediaWithID:(id)arg1 promoteState:(id)arg2 ;
-(void)logAdsInlineInsightsOpenEducationTrayForMediaWithID:(id)arg1 promoteState:(id)arg2 ;
-(void)logTapEntryPoint;
-(void)logLandingPageLoaded;
-(void)logLandingPageLoadError:(id)arg1 ;
-(void)logLandingPageExit;
-(void)logLandingPageViewSummaryCardAtIndex:(unsigned)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)logLandingPageNullStateCreateNewPostClicked;
-(void)logTopPostsPageLoadedWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 ;
-(void)logTopPostsPageLoadError:(id)arg1 ;
-(void)logTopPostsPageExit;
-(void)logTopPostsPageTapMediaAtIndex:(unsigned)arg1 mediaID:(id)arg2 ;
-(void)logTopPostsFilterOpenedWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 mediaTypeOptions:(id)arg4 dataOrderingOptions:(id)arg5 timeframeOptions:(id)arg6 ;
-(void)logTopPostsFilterMadeRequestWithMediaType:(id)arg1 dataOrdering:(id)arg2 timeframe:(id)arg3 ;
-(void)logFollowersPageLoaded;
-(void)logFollowersPageLoadError:(id)arg1 ;
-(void)logFollowersPageViewSummaryCardAtIndex:(unsigned)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)logFollowersPageExit;
-(void)logLandingPageTapMediaInCarouselAtIndex:(unsigned)arg1 mediaID:(id)arg2 ;
-(void)logLandingPageClickSeeMore;
@end

