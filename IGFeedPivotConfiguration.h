
#import <Instagram/IGFeedConfigurationType.h>

@class IGFeedDefaultConfiguration, NSString;

@interface IGFeedPivotConfiguration : NSObject <IGFeedConfigurationType> {

	char _shouldShowPlaceholderForPivotGrid;
	IGFeedDefaultConfiguration* _defaultConfig;

}

@property (assign,nonatomic) char shouldShowPlaceholderForPivotGrid;                    //@synthesize shouldShowPlaceholderForPivotGrid=_shouldShowPlaceholderForPivotGrid - In the implementation block
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
-(void)setShouldShowPlaceholderForPivotGrid:(char)arg1 ;
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
-(char)shouldShowPlaceholderForPivotGrid;
-(id)init;
-(IGFeedDefaultConfiguration *)defaultConfig;
@end

