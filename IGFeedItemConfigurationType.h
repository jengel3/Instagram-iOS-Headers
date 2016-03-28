

@protocol IGFeedItemConfigurationType <NSObject>
@required
-(char)allowSponsoredContextForFeedItem:(id)arg1;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1;
-(char)shouldHideFeedItem:(id)arg1;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1;
-(char)showExploreContextForFeedItem:(id)arg1;
-(char)showFollowButtonForFeedItem:(id)arg1;
-(char)shouldTightenUpWhiteSpace:(id)arg1;
-(int)timestampTypeForFeedItem:(id)arg1;
-(char)enablePivotGridAfterCommentForFeedItem:(id)arg1;
-(char)enablePlaceHolderForPivotGrid:(id)arg1;
-(int)hiddenCellTypeForFeedItem:(id)arg1;
-(char)allowHidingFeedItem:(id)arg1;
-(id)likeRequestParametersForFeedItem:(id)arg1;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1;

@end

