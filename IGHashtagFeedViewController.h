
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGRankedMediaViewDelegate.h>
#import <Instagram/IGExploreComposedPeopleYouFollowViewDelegate.h>
#import <Instagram/IGRelatedItemsHeaderViewDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>

@class IGRankedMediaView, IGExploreComposedPeopleYouFollowView, UIBarButtonItem, IGHashtagModel, NSArray, IGVisitedRelatedItemsStore, NSString, NSMutableSet, IGMediaThumbnailLogger, IGRelatedItemsHeaderView, IGRelatedItemsService, IGRelatedItemsLogger, NSDictionary, IGGenericMegaphoneView, IGDefaultGenericMegaphoneLogger, IGFeedItemPreviewingHandler;

@interface IGHashtagFeedViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGExploreComposedPeopleYouFollowViewDelegate, IGRelatedItemsHeaderViewDelegate, IGGenericMegaphoneViewDelegate, IGAnalyticsModule, IGFeedPromotionBannerDelegate> {

	IGRankedMediaView* _rankedMediaView;
	IGExploreComposedPeopleYouFollowView* _peopleYouFollowView;
	UIBarButtonItem* _moreOptionsButton;
	IGHashtagModel* _hashtag;
	NSArray* _forceMediaIDs;
	IGVisitedRelatedItemsStore* _visitedHashtagsStore;
	NSString* _sessionId;
	NSMutableSet* _loggedMediaImpressions;
	IGMediaThumbnailLogger* _mediaLogger;
	NSMutableSet* _lastVisibleIndexPaths;
	NSMutableSet* _lastIndexPaths;
	NSMutableSet* _lastVisibleRankedImageURLs;
	NSMutableSet* _lastRankedImageURLs;
	IGRelatedItemsHeaderView* _relatedItemsHeaderView;
	IGRelatedItemsService* _relatedItemsService;
	IGRelatedItemsLogger* _relatedItemsLogger;
	NSDictionary* _serverMegaphoneData;
	IGGenericMegaphoneView* _megaphoneView;
	IGDefaultGenericMegaphoneLogger* _megaphoneLogger;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;

}

@property (assign,nonatomic,__weak) IGExploreComposedPeopleYouFollowView * peopleYouFollowView;              //@synthesize peopleYouFollowView=_peopleYouFollowView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moreOptionsButton;                                            //@synthesize moreOptionsButton=_moreOptionsButton - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                                                       //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,retain) NSArray * forceMediaIDs;                                                        //@synthesize forceMediaIDs=_forceMediaIDs - In the implementation block
@property (nonatomic,retain) IGVisitedRelatedItemsStore * visitedHashtagsStore;                              //@synthesize visitedHashtagsStore=_visitedHashtagsStore - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedMediaImpressions;                                        //@synthesize loggedMediaImpressions=_loggedMediaImpressions - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailLogger * mediaLogger;                                         //@synthesize mediaLogger=_mediaLogger - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleIndexPaths;                                           //@synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastIndexPaths;                                                  //@synthesize lastIndexPaths=_lastIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleRankedImageURLs;                                      //@synthesize lastVisibleRankedImageURLs=_lastVisibleRankedImageURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastRankedImageURLs;                                             //@synthesize lastRankedImageURLs=_lastRankedImageURLs - In the implementation block
@property (assign,nonatomic,__weak) IGRelatedItemsHeaderView * relatedItemsHeaderView;                       //@synthesize relatedItemsHeaderView=_relatedItemsHeaderView - In the implementation block
@property (nonatomic,retain) IGRelatedItemsService * relatedItemsService;                                    //@synthesize relatedItemsService=_relatedItemsService - In the implementation block
@property (nonatomic,readonly) IGRelatedItemsLogger * relatedItemsLogger;                                    //@synthesize relatedItemsLogger=_relatedItemsLogger - In the implementation block
@property (nonatomic,retain) NSDictionary * serverMegaphoneData;                                             //@synthesize serverMegaphoneData=_serverMegaphoneData - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                                         //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,retain) IGDefaultGenericMegaphoneLogger * megaphoneLogger;                              //@synthesize megaphoneLogger=_megaphoneLogger - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGRankedMediaView * rankedMediaView;                                            //@synthesize rankedMediaView=_rankedMediaView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(UIBarButtonItem *)moreOptionsButton;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(id)analyticsExtras;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(NSMutableSet *)lastIndexPaths;
-(NSMutableSet *)lastVisibleIndexPaths;
-(void)setLastVisibleIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastIndexPaths:(NSMutableSet *)arg1 ;
-(void)composedPeopleYouFollowView:(id)arg1 didTapSocialItemAtIndex:(unsigned)arg2 ;
-(IGMediaThumbnailLogger *)mediaLogger;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(void)onHashtagUpdated;
-(void)setRankedMediaView:(IGRankedMediaView *)arg1 ;
-(void)presentHashtagReshareView;
-(void)setMoreOptionsButton:(UIBarButtonItem *)arg1 ;
-(void)requestRelatedItems;
-(void)setRelatedItemsService:(IGRelatedItemsService *)arg1 ;
-(IGRelatedItemsService *)relatedItemsService;
-(IGVisitedRelatedItemsStore *)visitedHashtagsStore;
-(void)configureRelatedItemsViewWithItems:(id)arg1 ;
-(void)setRelatedItemsHeaderView:(IGRelatedItemsHeaderView *)arg1 ;
-(IGRelatedItemsLogger *)relatedItemsLogger;
-(void)setMegaphoneLogger:(IGDefaultGenericMegaphoneLogger *)arg1 ;
-(IGDefaultGenericMegaphoneLogger *)megaphoneLogger;
-(void)configureRankedHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)configureSocialSectionHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)updateRankedViewVisibility;
-(IGExploreComposedPeopleYouFollowView *)peopleYouFollowView;
-(void)setPeopleYouFollowView:(IGExploreComposedPeopleYouFollowView *)arg1 ;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(void)logClickForMedia:(id)arg1 atIndex:(int)arg2 sectionType:(unsigned)arg3 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)logSocialItemClickForPost:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logImpressionForMedia:(id)arg1 atIndex:(int)arg2 sectionType:(unsigned)arg3 ;
-(NSMutableSet *)loggedMediaImpressions;
-(void)relatedItemsHeaderView:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)relatedItemsHeaderView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3 ;
-(NSArray *)forceMediaIDs;
-(void)setForceMediaIDs:(NSArray *)arg1 ;
-(void)setVisitedHashtagsStore:(IGVisitedRelatedItemsStore *)arg1 ;
-(NSMutableSet *)lastVisibleRankedImageURLs;
-(void)setLastVisibleRankedImageURLs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)lastRankedImageURLs;
-(void)setLastRankedImageURLs:(NSMutableSet *)arg1 ;
-(IGRelatedItemsHeaderView *)relatedItemsHeaderView;
-(IGHashtagModel *)hashtag;
-(id)initWithHashtag:(id)arg1 ;
-(void)setServerMegaphoneData:(NSDictionary *)arg1 ;
-(NSDictionary *)serverMegaphoneData;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(IGRankedMediaView *)rankedMediaView;
-(void)rankedMediaView:(id)arg1 didSelectItemAtIndex:(unsigned)arg2 ;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(char)enableNavState;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(NSString *)sessionId;
@end

