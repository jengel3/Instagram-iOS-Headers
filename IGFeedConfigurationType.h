

@protocol IGFeedConfigurationType <NSObject>
@required
-(char)allowSponsoredContextForFeedItem:(id)arg1;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1;
-(char)shouldHideFeedItem:(id)arg1;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1;
-(char)showExploreContextForFeedItem:(id)arg1;
-(char)showFollowButtonForFeedItem:(id)arg1;
-(int)timestampTypeForFeedItem:(id)arg1;
-(char)showRefreshButton;
-(char)enablePivotForFeedItem:(id)arg1;
-(char)enablePivotGridAfterCommentForFeedItem:(id)arg1;
-(char)enablePlaceHolderForPivotGrid:(id)arg1;
-(int)hiddenCellTypeForFeedItem:(id)arg1;
-(char)shouldAutoplayVideos;
-(char)shouldShowVideoDummyPostForFeedItem:(id)arg1;
-(char)allowHidingFeedItem:(id)arg1;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;

@end

