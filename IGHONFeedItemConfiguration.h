
#import <Instagram/IGFeedItemConfigurationType.h>

@class IGMainFeedItemConfiguration, NSString;

@interface IGHONFeedItemConfiguration : NSObject <IGFeedItemConfigurationType> {

	IGMainFeedItemConfiguration* _mainFeedItemConfiguration;

}

@property (nonatomic,readonly) IGMainFeedItemConfiguration * mainFeedItemConfiguration;              //@synthesize mainFeedItemConfiguration=_mainFeedItemConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldHideFeedItem:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(int)timestampTypeForFeedItem:(id)arg1 ;
-(char)shouldUseChevronMenuForFeedItem:(id)arg1 ;
-(char)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1 ;
-(id)likeRequestParametersForFeedItem:(id)arg1 ;
-(char)shouldTightenUpWhiteSpace:(id)arg1 ;
-(char)shouldShowInlineInsightsForFeedItem:(id)arg1 ;
-(char)shouldPopAfterDeletingFeedItem:(id)arg1 ;
-(id)actionSheetConfigurationForFeedItem:(id)arg1 ;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1 ;
-(IGMainFeedItemConfiguration *)mainFeedItemConfiguration;
-(id)init;
@end

