
#import <Instagram/IGFeedItemConfigurationType.h>

@class IGDefaultFeedItemConfiguration, NSString;

@interface IGPivotFeedItemConfiguration : NSObject <IGFeedItemConfigurationType> {

	char _shouldShowPlaceholderForPivotGrid;
	IGDefaultFeedItemConfiguration* _defaultConfig;

}

@property (assign,nonatomic) char shouldShowPlaceholderForPivotGrid;                        //@synthesize shouldShowPlaceholderForPivotGrid=_shouldShowPlaceholderForPivotGrid - In the implementation block
@property (nonatomic,readonly) IGDefaultFeedItemConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
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
-(char)enablePivotGridAfterCommentForFeedItem:(id)arg1 ;
-(char)enablePlaceHolderForPivotGrid:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(id)likeRequestParametersForFeedItem:(id)arg1 ;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1 ;
-(char)shouldShowPlaceholderForPivotGrid;
-(id)init;
-(IGDefaultFeedItemConfiguration *)defaultConfig;
@end
