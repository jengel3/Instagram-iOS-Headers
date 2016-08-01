

@interface IGFeedViewControllerFactory : NSObject
+(char)useNewContextualFeed;
+(id)contextualFeedViewControllerWithNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showPullToRefresh:(char)arg5 focusCoordinator:(id)arg6 showExploreContext:(char)arg7 entryPoint:(int)arg8 ;
+(id)singleFeedViewControllerWithItemConfiguration:(id)arg1 networkSource:(id)arg2 userSession:(id)arg3 ;
+(void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(id)mainFeedViewControllerWithUserSession:(id)arg1 ;
+(id)singleFeedViewControllerWithNetworkSource:(id)arg1 userSession:(id)arg2 ;
+(id)singleFeedViewControllerForProfilePhotoWithNetworkSource:(id)arg1 userSession:(id)arg2 profilePictureHelperDelegate:(id)arg3 ;
@end

