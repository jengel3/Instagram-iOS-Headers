
#import <Instagram/IGFeedItemConfigurationType.h>

@class IGDefaultFeedItemConfiguration, IGMainFeedItemConfiguration, NSString;

@interface IGSingleFeedItemConfiguration : NSObject <IGFeedItemConfigurationType> {

	char _showFollowButton;
	char _showAttribution;
	char _displayedInPromoteOrganicToggle;
	char _hideSponsoredContext;
	IGDefaultFeedItemConfiguration* _defaultConfig;
	IGMainFeedItemConfiguration* _mainConfig;

}

@property (nonatomic,readonly) IGDefaultFeedItemConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (nonatomic,readonly) IGMainFeedItemConfiguration * mainConfig;                    //@synthesize mainConfig=_mainConfig - In the implementation block
@property (assign,nonatomic) char showFollowButton;                                         //@synthesize showFollowButton=_showFollowButton - In the implementation block
@property (assign,nonatomic) char showAttribution;                                          //@synthesize showAttribution=_showAttribution - In the implementation block
@property (assign,nonatomic) char displayedInPromoteOrganicToggle;                          //@synthesize displayedInPromoteOrganicToggle=_displayedInPromoteOrganicToggle - In the implementation block
@property (assign,nonatomic) char hideSponsoredContext;                                     //@synthesize hideSponsoredContext=_hideSponsoredContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldHideFeedItem:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1 ;
-(char)shouldPopAfterDeletingFeedItem:(id)arg1 ;
-(id)actionSheetConfigurationForFeedItem:(id)arg1 ;
-(char)showVerifiedBadge;
-(char)shouldUseProfilePhotoForTitleForFeedItem:(id)arg1 ;
-(char)shouldUsePlusButtonForRightNavigationBarButtonItem:(id)arg1 ;
-(id)profilePictureHelperDelegate;
-(char)displayedInPromoteOrganicToggle;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(id)likeRequestParametersForFeedItem:(id)arg1 ;
-(char)shouldShowInlineInsightsForFeedItem:(id)arg1 ;
-(char)showFollowButton;
-(char)hideSponsoredContext;
-(IGMainFeedItemConfiguration *)mainConfig;
-(void)setShowFollowButton:(char)arg1 ;
-(void)setDisplayedInPromoteOrganicToggle:(char)arg1 ;
-(void)setHideSponsoredContext:(char)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(char)showAttribution;
-(id)init;
-(IGDefaultFeedItemConfiguration *)defaultConfig;
@end

