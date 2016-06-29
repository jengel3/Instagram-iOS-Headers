

@interface IGFeedViewControllerFactory : NSObject
+(char)useNewContextualFeed;
+(id)contextualFeedViewControllerWithNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showPullToRefresh:(char)arg5 focusCoordinator:(id)arg6 showExploreContext:(char)arg7 entryPoint:(int)arg8 ;
+(void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(id)mainFeedViewController;
+(id)singleFeedViewControllerWithNetworkSource:(id)arg1 ;
@end

