

@protocol IGFeedItemConfigurationType <NSObject>
@required
-(char)shouldHideFeedItem:(id)arg1;
-(char)allowSponsoredContextForFeedItem:(id)arg1;
-(char)showFollowButtonForFeedItem:(id)arg1;
-(char)showExploreContextForFeedItem:(id)arg1;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1;
-(int)hiddenCellTypeForFeedItem:(id)arg1;
-(char)allowHidingFeedItem:(id)arg1;
-(int)timestampTypeForFeedItem:(id)arg1;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1;
-(char)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1;
-(id)likeRequestParametersForFeedItem:(id)arg1;
-(char)shouldTightenUpWhiteSpace:(id)arg1;
-(char)shouldShowInlineInsightsForFeedItem:(id)arg1;
-(char)shouldPopAfterDeletingFeedItem:(id)arg1;
-(id)actionSheetConfigurationForFeedItem:(id)arg1;
-(char)showVerifiedBadge;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1;
-(char)shouldUseProfilePhotoForTitleForFeedItem:(id)arg1;

@end

