
#import <Instagram/IGFeedConfigurationType.h>

@class IGFeedDefaultConfiguration, NSString;

@interface IGFeedSingleFeedConfiguration : NSObject <IGFeedConfigurationType> {

	char _showFollowButton;
	char _showAttribution;
	IGFeedDefaultConfiguration* _defaultConfig;

}

@property (assign,nonatomic) char showFollowButton;                                     //@synthesize showFollowButton=_showFollowButton - In the implementation block
@property (assign,nonatomic) char showAttribution;                                      //@synthesize showAttribution=_showAttribution - In the implementation block
@property (nonatomic,readonly) IGFeedDefaultConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1 ;
-(char)shouldHideFeedItem:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(int)timestampTypeForFeedItem:(id)arg1 ;
-(char)showRefreshButton;
-(char)enablePivotForFeedItem:(id)arg1 ;
-(char)enablePivotGridAfterCommentForFeedItem:(id)arg1 ;
-(char)enablePlaceHolderForPivotGrid:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)shouldAutoplayVideos;
-(char)shouldShowVideoDummyPostForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;
-(char)showFollowButton;
-(void)setShowFollowButton:(char)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(char)showAttribution;
-(id)init;
-(IGFeedDefaultConfiguration *)defaultConfig;
@end

