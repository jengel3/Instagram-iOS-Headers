

@interface IGFeedViewControllerFactory : NSObject
+(id)singleFeedViewControllerWithNetworkSource:(id)arg1 ;
+(id)contextualFeedViewControllerWithNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showPullToRefresh:(char)arg5 focusCoordinator:(id)arg6 showExploreContext:(char)arg7 mode:(int)arg8 entryPoint:(int)arg9 ;
+(char)useNewContextualFeed;
+(void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(id)mainFeedViewController;
+(id)albumFeedViewControllerWithUser:(id)arg1 ;
@end

