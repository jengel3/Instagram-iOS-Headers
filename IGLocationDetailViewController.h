
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGRankedMediaViewDelegate.h>
#import <Instagram/IGLocationHeaderViewDelegate.h>
#import <Instagram/IGExploreComposedPeopleYouFollowViewDelegate.h>
#import <Instagram/IGRelatedItemsHeaderViewDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGLocation, NSArray, IGRankedMediaView, IGLocationHeaderView, IGExploreComposedPeopleYouFollowView, NSString, IGMediaThumbnailLogger, NSMutableSet, IGFeedItemPreviewingHandler, IGRelatedItemsService, IGRelatedItemsHeaderView, IGVisitedRelatedItemsStore, IGRelatedItemsLogger;

@interface IGLocationDetailViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGLocationHeaderViewDelegate, IGExploreComposedPeopleYouFollowViewDelegate, IGRelatedItemsHeaderViewDelegate, IGAnalyticsModule> {

	char _shouldUpdateLocationHeaderView;
	IGLocation* _location;
	NSArray* _forceMediaIDs;
	IGRankedMediaView* _rankedMediaView;
	IGLocationHeaderView* _locationHeaderView;
	IGExploreComposedPeopleYouFollowView* _peopleYouFollowView;
	NSString* _sessionId;
	IGMediaThumbnailLogger* _mediaLogger;
	NSMutableSet* _loggedMediaImpressions;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	IGRelatedItemsService* _relatedItemsService;
	IGRelatedItemsHeaderView* _relatedItemsHeaderView;
	IGVisitedRelatedItemsStore* _visitedLocationsStore;
	IGRelatedItemsLogger* _relatedItemsLogger;

}

@property (assign,nonatomic,__weak) IGLocationHeaderView * locationHeaderView;                               //@synthesize locationHeaderView=_locationHeaderView - In the implementation block
@property (assign,nonatomic,__weak) IGExploreComposedPeopleYouFollowView * peopleYouFollowView;              //@synthesize peopleYouFollowView=_peopleYouFollowView - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailLogger * mediaLogger;                                         //@synthesize mediaLogger=_mediaLogger - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedMediaImpressions;                                        //@synthesize loggedMediaImpressions=_loggedMediaImpressions - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGRelatedItemsService * relatedItemsService;                                    //@synthesize relatedItemsService=_relatedItemsService - In the implementation block
@property (nonatomic,retain) IGRelatedItemsHeaderView * relatedItemsHeaderView;                              //@synthesize relatedItemsHeaderView=_relatedItemsHeaderView - In the implementation block
@property (nonatomic,retain) IGVisitedRelatedItemsStore * visitedLocationsStore;                             //@synthesize visitedLocationsStore=_visitedLocationsStore - In the implementation block
@property (nonatomic,readonly) IGRelatedItemsLogger * relatedItemsLogger;                                    //@synthesize relatedItemsLogger=_relatedItemsLogger - In the implementation block
@property (assign,nonatomic) char shouldUpdateLocationHeaderView;                                            //@synthesize shouldUpdateLocationHeaderView=_shouldUpdateLocationHeaderView - In the implementation block
@property (nonatomic,readonly) IGLocation * location;                                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * forceMediaIDs;                                                      //@synthesize forceMediaIDs=_forceMediaIDs - In the implementation block
@property (nonatomic,retain) IGRankedMediaView * rankedMediaView;                                            //@synthesize rankedMediaView=_rankedMediaView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(id)analyticsExtras;
-(void)composedPeopleYouFollowView:(id)arg1 didTapSocialItemAtIndex:(unsigned)arg2 ;
-(IGMediaThumbnailLogger *)mediaLogger;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(NSArray *)forceMediaIDs;
-(void)setRankedMediaView:(IGRankedMediaView *)arg1 ;
-(void)requestRelatedItems;
-(void)setRelatedItemsService:(IGRelatedItemsService *)arg1 ;
-(IGRelatedItemsService *)relatedItemsService;
-(void)configureRelatedItemsViewWithItems:(id)arg1 ;
-(void)setRelatedItemsHeaderView:(IGRelatedItemsHeaderView *)arg1 ;
-(IGRelatedItemsLogger *)relatedItemsLogger;
-(void)configureRankedHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)configureSocialSectionHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)updateRankedViewVisibility;
-(IGExploreComposedPeopleYouFollowView *)peopleYouFollowView;
-(void)setPeopleYouFollowView:(IGExploreComposedPeopleYouFollowView *)arg1 ;
-(void)logClickForMedia:(id)arg1 atIndex:(int)arg2 sectionType:(unsigned)arg3 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)logSocialItemClickForPost:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logImpressionForMedia:(id)arg1 atIndex:(int)arg2 sectionType:(unsigned)arg3 ;
-(NSMutableSet *)loggedMediaImpressions;
-(void)relatedItemsHeaderView:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)relatedItemsHeaderView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3 ;
-(IGRelatedItemsHeaderView *)relatedItemsHeaderView;
-(id)initWithLocation:(id)arg1 forceMediaIDs:(id)arg2 ;
-(IGVisitedRelatedItemsStore *)visitedLocationsStore;
-(void)configureLocationHeaderView;
-(void)presentLocationShareView;
-(char)shouldUpdateLocationHeaderView;
-(IGLocationHeaderView *)locationHeaderView;
-(void)setShouldUpdateLocationHeaderView:(char)arg1 ;
-(void)setLocationHeaderView:(IGLocationHeaderView *)arg1 ;
-(void)openInMaps;
-(void)onLocationInfoFailed:(id)arg1 ;
-(void)setVisitedLocationsStore:(IGVisitedRelatedItemsStore *)arg1 ;
-(void)locationHeaderViewMapTapped:(id)arg1 ;
-(IGRankedMediaView *)rankedMediaView;
-(void)rankedMediaView:(id)arg1 didSelectItemAtIndex:(unsigned)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(IGLocation *)location;
-(NSString *)sessionId;
-(id)initWithLocation:(id)arg1 ;
@end

