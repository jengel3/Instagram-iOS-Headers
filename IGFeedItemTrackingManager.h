/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGFeedItemTrackingManager : NSObject
+(id)currentModule;
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 userInfo:(id)arg3 ;
+(id)sponsoredFeedItemTracker;
+(id)trackerForFeedItem:(id)arg1 ;
+(id)trackingTokenStringTypeForPost:(id)arg1 ;
+(id)trackingTokenStringForPost:(id)arg1 ;
+(char)useNoLatencyLoggingForPost:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 ;
+(void)removeFeedItem:(id)arg1 ;
+(char)allowSponsoredPostForFeedItem:(id)arg1 ;
+(char)allowOrganicTrackingForFeedItem:(id)arg1 ;
+(id)organicFeedItemTracker;
+(char)allowExploreTrackingForFeedItem:(id)arg1 ;
+(id)exploreFeedItemTracker;
+(char)isMainFeed;
+(char)isCommentingFromMainFeed;
+(id)websiteClickLinkForFeedItem:(id)arg1 ;
-(void)commentButtonTapped:(id)arg1 ;
-(void)surveyWillAppear:(id)arg1 ;
-(void)surveyAnswered:(id)arg1 ;
-(void)surveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftSurveyWillAppear:(id)arg1 ;
-(void)brandLiftQuestionAnswered:(id)arg1 ;
-(void)brandLiftSurveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftQuestionDidDismiss:(id)arg1 ;
-(void)didFinishBrowsingWebview:(id)arg1 ;
-(void)feedItemHideReasonSelected:(id)arg1 ;
-(void)commentPosted:(id)arg1 ;
-(void)feedItemLiked:(id)arg1 ;
-(void)feedItemUnliked:(id)arg1 ;
-(void)feedItemDidAppear:(id)arg1 ;
-(void)feedItemViewingStarted:(id)arg1 ;
-(void)feedItemDidDisappear:(id)arg1 ;
-(void)feedItemUserTapped:(id)arg1 ;
-(void)feedItemLocationTapped:(id)arg1 ;
-(void)feedItemURLTapped:(id)arg1 ;
-(void)headerLabelTapped:(id)arg1 ;
-(void)moreButtonTapped:(id)arg1 ;
-(void)feedItemsDidUpdate:(id)arg1 ;
-(void)videoCompleted:(id)arg1 ;
-(void)feedItemReportInappropriate:(id)arg1 ;
-(void)feedItemMediaDidAppearInFull:(id)arg1 ;
-(void)feedItemCaptionCollapsed:(id)arg1 ;
-(void)didViewStoreProduct:(id)arg1 ;
-(void)didTakeDirectResponseAction:(id)arg1 ;
-(void)didTapHeaderTitle:(id)arg1 ;
-(void)didTapHeaderImage:(id)arg1 ;
-(void)didTapMedia:(id)arg1 ;
-(void)videoShouldStartPlaying:(id)arg1 ;
-(void)videoStarted:(id)arg1 ;
-(void)videoUnpaused:(id)arg1 ;
-(void)videoTapped:(id)arg1 ;
-(void)videoPaused:(id)arg1 ;
-(void)analyticsNoLatencyUploadSuccess:(id)arg1 ;
-(void)includeVideoMetadataFromNotification:(id)arg1 intoEvent:(id)arg2 ;
-(id)stringForVideoPlaybackReason:(int)arg1 ;
-(id)stringForVideoStopReason:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

